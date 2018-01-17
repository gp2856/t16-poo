#include "Goal.h"
Goal::Goal(Vec2 in_pos)
	:
	pos(in_pos)
{}
void Goal::Draw(Graphics& gfx) const
{
	gfx.DrawRectDim((int)pos.x, (int)pos.y, dimension, dimension, c);
}
bool Goal::TestCollision(const Dude& dude) const
{
	Vec2 dudePos = dude.GetPos();
	const int duderight = (int)dudePos.x + dude.GetWidth();
	const int dudebottom = (int)dudePos.y + dude.GetHeight();
	const int pooright = (int)pos.x + dimension;
	const int poobottom = (int)pos.y + dimension;

	return
		duderight >= (int)pos.x &&
		dudePos.x <= (float)pooright &&
		dudebottom >= (int)pos.y &&
		dudePos.y <= (float)poobottom;
}
void Goal::Respawn(Vec2 in_pos)
{
	pos = in_pos;
}
void Goal::UpdateColor()
{
	if (colorIncreasing)
	{
		if (c.GetR() >= 253)
		{
			colorIncreasing = false;
		}
		else
		{
			c = Color(c.GetR() + 2, c.GetG() + 4, c.GetB() + 4);
		}
	}
	else
	{
		if (c.GetR() <= 127)
		{
			colorIncreasing = true;
		}
		else
		{
			c = Color(c.GetR() - 2, c.GetG() - 4, c.GetB() - 4);
		}
	}
}

Vec2 Goal::GetPos()
{
	return Vec2(pos.x, pos.y);
}