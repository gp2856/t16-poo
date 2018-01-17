#include "Poo.h"
#include "Graphics.h"
#include <assert.h>

void Poo::Init( Vec2 in_pos, Vec2 in_vel )
{
	assert( initialized == false );
	pos = in_pos;
	vel = in_vel;
	initialized = true;
}

void Poo::Update(float dt)
{
	assert( initialized == true );
	pos.x += vel.x * dt;
	pos.y += vel.y * dt;

	const int right = int(pos.x) + GetWidth();
	if( pos.x < 0 )
	{
		pos.x = 0.0f;
		vel.x = -vel.x;
	}
	else if( right >= Graphics::ScreenWidth )
	{
		pos.x = float((Graphics::ScreenWidth - 1) - GetWidth());
		vel.x = -vel.x;
	}

	const int bottom = int(pos.y) + GetHeight();
	if( pos.y < 0 )
	{
		pos.y = 0.0f;
		vel.y = -vel.y;
	}
	else if( bottom >= Graphics::ScreenHeight )
	{
		pos.y = float((Graphics::ScreenHeight - 1) - GetHeight());
		vel.y = -vel.y;
	}
}

bool Poo::TestCollision( const Dude& dude ) const
{
	assert( initialized == true );
	const Vec2 dudePos = dude.GetPos();
	const int duderight = (int)dudePos.x + dude.GetWidth();
	const int dudebottom = (int)dudePos.y + dude.GetHeight();
	const int pooright = (int)pos.x + GetWidth();
	const int poobottom = (int)pos.y + GetHeight();

	return
		duderight >= (int)pos.x &&
		dudePos.x <= pooright &&
		dudebottom >= (int)pos.y &&
		dudePos.y <= poobottom;
}

void Poo::Draw( Graphics& gfx ) const
{
	assert( initialized == true );
	gfx.draw_sprite(int(pos.x), int(pos.y), sprite_, Colors::Magenta);
}

int Poo::GetWidth() const
{
	return sprite_.get_width();
}

int Poo::GetHeight() const
{
	return sprite_.get_height();
}
