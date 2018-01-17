#include "Dude.h"
#include "Graphics.h"
#include "Game.h"

Dude::Dude(float x, float y)
{
	pos.x = x;
	pos.y = y;
}

void Dude::ClampToScreen()
{
	const int right = (int)pos.x + GetWidth();
	if( pos.x < 0.0f )
	{
		pos.x = 0.0f;
	}
	else if( right >= Graphics::ScreenWidth )
	{
		pos.x = (float)((Graphics::ScreenWidth - 1) - GetWidth());
	}

	const int bottom = (int)pos.y + GetHeight();
	if( pos.y < 0.0f )
	{
		pos.y = 0.0f;
	}
	else if( bottom >= Graphics::ScreenHeight )
	{
		pos.y = (float)((Graphics::ScreenHeight - 1) - GetHeight());
	}
}

void Dude::Draw( Graphics& gfx ) const
{
	gfx.draw_sprite(int(pos.x), int(pos.y), sprite_, Colors::Magenta);
}

void Dude::Update(const Mouse & mouse, const float dt)
{
	if (mouse.LeftIsPressed())
	{
		const Vec2 center = pos + Vec2((float)(GetWidth() / 2), (float)(GetHeight() / 2));
		const Vec2 toPointer = Vec2((float)(mouse.GetPosX()), (float)(mouse.GetPosY())) - center;

		if (toPointer.GetLengthSq() > 2.0f)
		{
			pos += toPointer.GetNormalized() * speed * dt;
		}
	}
}

Vec2 Dude::GetPos() const
{
	return { pos.x, pos.y };
}



int Dude::GetWidth() const
{
	return sprite_.get_width();
}

int Dude::GetHeight() const
{
	return sprite_.get_height();
}
