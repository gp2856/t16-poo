#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Goal
{
public:
	Goal( int in_x,int in_y )
		:
		x( in_x ),
		y( in_y )
	{}
	void Draw( Graphics& gfx ) const
	{
		gfx.DrawRectDim( x,y,dimension,dimension,c );
		gfx.DrawCircle(x + 10, y + 10, 20, c);
	}
	bool TestCollision( const Dude& dude ) const
	{
		Vec2 dudePos = dude.GetPos();
		const int duderight = (int)dudePos.x + dude.GetWidth();
		const int dudebottom = (int)dudePos.y + dude.GetHeight();
		const int pooright = x + dimension;
		const int poobottom = y + dimension;

		return
			duderight >= x &&
			dudePos.x <= pooright &&
			dudebottom >= y &&
			dudePos.y <= poobottom;
	}
	void Respawn( int in_x,int in_y )
	{
		x = in_x;
		y = in_y;
	}
	void UpdateColor()
	{
		if( colorIncreasing )
		{
			if( c.GetR() >= 253 )
			{
				colorIncreasing = false;
			}
			else
			{
				c = Color( c.GetR() + 2,c.GetG() + 4,c.GetB() + 4 );
			}
		}
		else
		{
			if( c.GetR() <= 127 )
			{
				colorIncreasing = true;
			}
			else
			{
				c = Color( c.GetR() - 2,c.GetG() - 4,c.GetB() - 4 );
			}
		}
	}

	int GetX()
	{
		return x;
	}

	int GetY()
	{
		return y;
	}
private:
	static constexpr int dimension = 20;
	Color c = { 127,0,0 };
	bool colorIncreasing = true;
	int x;
	int y;
};