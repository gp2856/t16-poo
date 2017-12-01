#include "Dude.h"
#include "Graphics.h"

Dude::Dude(float x, float y)
{
	pos.x = x;
	pos.y = y;
}

void Dude::ClampToScreen()
{
	const int right = (int)pos.x + width;
	if( pos.x < 0.0f )
	{
		pos.x = 0.0f;
	}
	else if( right >= Graphics::ScreenWidth )
	{
		pos.x = (float)((Graphics::ScreenWidth - 1) - width);
	}

	const int bottom = (int)pos.y + height;
	if( pos.y < 0.0f )
	{
		pos.y = 0.0f;
	}
	else if( bottom >= Graphics::ScreenHeight )
	{
		pos.y = (int)((Graphics::ScreenHeight - 1) - height);
	}
}

void Dude::Draw( Graphics& gfx ) const
{
	gfx.PutPixel( 7 + (int)pos.x,0 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 8 + (int)pos.x,0 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 9 + (int)pos.x,0 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 10 + (int)pos.x,0 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 11 + (int)pos.x,0 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 12 + (int)pos.x,0 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 5 + (int)pos.x,1 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 6 + (int)pos.x,1 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 7 + (int)pos.x,1 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 8 + (int)pos.x,1 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 9 + (int)pos.x,1 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 10 + (int)pos.x,1 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 11 + (int)pos.x,1 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 12 + (int)pos.x,1 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 13 + (int)pos.x,1 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 14 + (int)pos.x,1 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 3 + (int)pos.x,2 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 4 + (int)pos.x,2 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 5 + (int)pos.x,2 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 6 + (int)pos.x,2 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 7 + (int)pos.x,2 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 8 + (int)pos.x,2 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 9 + (int)pos.x,2 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 10 + (int)pos.x,2 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 11 + (int)pos.x,2 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 12 + (int)pos.x,2 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 13 + (int)pos.x,2 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 14 + (int)pos.x,2 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 15 + (int)pos.x,2 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 16 + (int)pos.x,2 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 2 + (int)pos.x,3 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 3 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 4 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 5 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 6 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 7 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 8 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 9 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 10 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 11 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 12 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 13 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 14 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 15 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 16 + (int)pos.x,3 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,3 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 2 + (int)pos.x,4 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 3 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 4 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 5 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 6 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 7 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 8 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 9 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 10 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 11 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 12 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 13 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 14 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 15 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 16 + (int)pos.x,4 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,4 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 1 + (int)pos.x,5 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 2 + (int)pos.x,5 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 3 + (int)pos.x,5 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 4 + (int)pos.x,5 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 5 + (int)pos.x,5 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 6 + (int)pos.x,5 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 7 + (int)pos.x,5 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 8 + (int)pos.x,5 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 9 + (int)pos.x,5 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 10 + (int)pos.x,5 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 11 + (int)pos.x,5 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 12 + (int)pos.x,5 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 13 + (int)pos.x,5 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 14 + (int)pos.x,5 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 15 + (int)pos.x,5 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 16 + (int)pos.x,5 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,5 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 18 + (int)pos.x,5 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 1 + (int)pos.x,6 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 2 + (int)pos.x,6 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 3 + (int)pos.x,6 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 4 + (int)pos.x,6 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 5 + (int)pos.x,6 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 6 + (int)pos.x,6 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 7 + (int)pos.x,6 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 8 + (int)pos.x,6 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 9 + (int)pos.x,6 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 10 + (int)pos.x,6 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 11 + (int)pos.x,6 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 12 + (int)pos.x,6 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 13 + (int)pos.x,6 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 14 + (int)pos.x,6 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 15 + (int)pos.x,6 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 16 + (int)pos.x,6 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,6 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 18 + (int)pos.x,6 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 0 + (int)pos.x,7 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 1 + (int)pos.x,7 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 2 + (int)pos.x,7 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 3 + (int)pos.x,7 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 4 + (int)pos.x,7 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 5 + (int)pos.x,7 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 6 + (int)pos.x,7 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 7 + (int)pos.x,7 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 8 + (int)pos.x,7 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 9 + (int)pos.x,7 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 10 + (int)pos.x,7 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 11 + (int)pos.x,7 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 12 + (int)pos.x,7 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 13 + (int)pos.x,7 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 14 + (int)pos.x,7 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 15 + (int)pos.x,7 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 16 + (int)pos.x,7 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,7 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 18 + (int)pos.x,7 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 19 + (int)pos.x,7 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 0 + (int)pos.x,8 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 1 + (int)pos.x,8 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 2 + (int)pos.x,8 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 3 + (int)pos.x,8 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 4 + (int)pos.x,8 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 5 + (int)pos.x,8 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 6 + (int)pos.x,8 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 7 + (int)pos.x,8 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 8 + (int)pos.x,8 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 9 + (int)pos.x,8 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 10 + (int)pos.x,8 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 11 + (int)pos.x,8 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 12 + (int)pos.x,8 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 13 + (int)pos.x,8 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 14 + (int)pos.x,8 + (int)pos.y,255,255,255 );
	gfx.PutPixel( 15 + (int)pos.x,8 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 16 + (int)pos.x,8 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,8 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 18 + (int)pos.x,8 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 19 + (int)pos.x,8 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 0 + (int)pos.x,9 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 1 + (int)pos.x,9 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 2 + (int)pos.x,9 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 3 + (int)pos.x,9 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 4 + (int)pos.x,9 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 5 + (int)pos.x,9 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 6 + (int)pos.x,9 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 7 + (int)pos.x,9 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 8 + (int)pos.x,9 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 9 + (int)pos.x,9 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 10 + (int)pos.x,9 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 11 + (int)pos.x,9 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 12 + (int)pos.x,9 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 13 + (int)pos.x,9 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 14 + (int)pos.x,9 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 15 + (int)pos.x,9 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 16 + (int)pos.x,9 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,9 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 18 + (int)pos.x,9 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 19 + (int)pos.x,9 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 0 + (int)pos.x,10 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 1 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 2 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 3 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 4 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 5 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 6 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 7 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 8 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 9 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 10 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 11 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 12 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 13 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 14 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 15 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 16 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 18 + (int)pos.x,10 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 19 + (int)pos.x,10 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 0 + (int)pos.x,11 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 1 + (int)pos.x,11 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 2 + (int)pos.x,11 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 3 + (int)pos.x,11 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 4 + (int)pos.x,11 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 5 + (int)pos.x,11 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 6 + (int)pos.x,11 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 7 + (int)pos.x,11 + (int)pos.y,20,14,18 );
	gfx.PutPixel( 8 + (int)pos.x,11 + (int)pos.y,18,11,14 );
	gfx.PutPixel( 9 + (int)pos.x,11 + (int)pos.y,18,12,14 );
	gfx.PutPixel( 10 + (int)pos.x,11 + (int)pos.y,18,12,14 );
	gfx.PutPixel( 11 + (int)pos.x,11 + (int)pos.y,21,13,16 );
	gfx.PutPixel( 12 + (int)pos.x,11 + (int)pos.y,24,11,15 );
	gfx.PutPixel( 13 + (int)pos.x,11 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 14 + (int)pos.x,11 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 15 + (int)pos.x,11 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 16 + (int)pos.x,11 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,11 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 18 + (int)pos.x,11 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 19 + (int)pos.x,11 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 0 + (int)pos.x,12 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 1 + (int)pos.x,12 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 2 + (int)pos.x,12 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 3 + (int)pos.x,12 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 4 + (int)pos.x,12 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 5 + (int)pos.x,12 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 6 + (int)pos.x,12 + (int)pos.y,23,9,23 );
	gfx.PutPixel( 7 + (int)pos.x,12 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 8 + (int)pos.x,12 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 9 + (int)pos.x,12 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 10 + (int)pos.x,12 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 11 + (int)pos.x,12 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 12 + (int)pos.x,12 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 13 + (int)pos.x,12 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 14 + (int)pos.x,12 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 15 + (int)pos.x,12 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 16 + (int)pos.x,12 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,12 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 18 + (int)pos.x,12 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 19 + (int)pos.x,12 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 1 + (int)pos.x,13 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 2 + (int)pos.x,13 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 3 + (int)pos.x,13 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 4 + (int)pos.x,13 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 5 + (int)pos.x,13 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 6 + (int)pos.x,13 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 7 + (int)pos.x,13 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 8 + (int)pos.x,13 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 9 + (int)pos.x,13 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 10 + (int)pos.x,13 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 11 + (int)pos.x,13 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 12 + (int)pos.x,13 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 13 + (int)pos.x,13 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 14 + (int)pos.x,13 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 15 + (int)pos.x,13 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 16 + (int)pos.x,13 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,13 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 18 + (int)pos.x,13 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 1 + (int)pos.x,14 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 2 + (int)pos.x,14 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 3 + (int)pos.x,14 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 4 + (int)pos.x,14 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 5 + (int)pos.x,14 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 6 + (int)pos.x,14 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 7 + (int)pos.x,14 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 8 + (int)pos.x,14 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 9 + (int)pos.x,14 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 10 + (int)pos.x,14 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 11 + (int)pos.x,14 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 12 + (int)pos.x,14 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 13 + (int)pos.x,14 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 14 + (int)pos.x,14 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 15 + (int)pos.x,14 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 16 + (int)pos.x,14 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,14 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 18 + (int)pos.x,14 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 2 + (int)pos.x,15 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 3 + (int)pos.x,15 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 4 + (int)pos.x,15 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 5 + (int)pos.x,15 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 6 + (int)pos.x,15 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 7 + (int)pos.x,15 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 8 + (int)pos.x,15 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 9 + (int)pos.x,15 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 10 + (int)pos.x,15 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 11 + (int)pos.x,15 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 12 + (int)pos.x,15 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 13 + (int)pos.x,15 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 14 + (int)pos.x,15 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 15 + (int)pos.x,15 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 16 + (int)pos.x,15 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,15 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 2 + (int)pos.x,16 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 3 + (int)pos.x,16 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 4 + (int)pos.x,16 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 5 + (int)pos.x,16 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 6 + (int)pos.x,16 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 7 + (int)pos.x,16 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 8 + (int)pos.x,16 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 9 + (int)pos.x,16 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 10 + (int)pos.x,16 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 11 + (int)pos.x,16 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 12 + (int)pos.x,16 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 13 + (int)pos.x,16 + (int)pos.y,251,192,224 );
	gfx.PutPixel( 14 + (int)pos.x,16 + (int)pos.y,135,26,68 );
	gfx.PutPixel( 15 + (int)pos.x,16 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 16 + (int)pos.x,16 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 17 + (int)pos.x,16 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 3 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 4 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 5 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 6 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 7 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 8 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 9 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 10 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 11 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 12 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 13 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 14 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 15 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 16 + (int)pos.x,17 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 5 + (int)pos.x,18 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 6 + (int)pos.x,18 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 7 + (int)pos.x,18 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 8 + (int)pos.x,18 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 9 + (int)pos.x,18 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 10 + (int)pos.x,18 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 11 + (int)pos.x,18 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 12 + (int)pos.x,18 + (int)pos.y,254,221,88 );
	gfx.PutPixel( 13 + (int)pos.x,18 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 14 + (int)pos.x,18 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 7 + (int)pos.x,19 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 8 + (int)pos.x,19 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 9 + (int)pos.x,19 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 10 + (int)pos.x,19 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 11 + (int)pos.x,19 + (int)pos.y,0,0,0 );
	gfx.PutPixel( 12 + (int)pos.x,19 + (int)pos.y,0,0,0 );
}

void Dude::Update( const Keyboard & kbd, float dt )
{
	if( kbd.KeyIsPressed( VK_RIGHT ) )
	{
		pos.x += (float)(speed * dt);
	}
	if( kbd.KeyIsPressed( VK_LEFT ) )
	{
		pos.x -= (float)(speed * dt);
	}
	if( kbd.KeyIsPressed( VK_DOWN ) )
	{
		pos.y += (float)(speed * dt);
	}
	if( kbd.KeyIsPressed( VK_UP ) )
	{
		pos.y -= (float)(speed * dt);
	}
}

Vec2 Dude::GetPos() const
{
	return Vec2(pos.x, pos.y);
}



int Dude::GetWidth() const
{
	return width;
}

int Dude::GetHeight() const
{
	return height;
}
