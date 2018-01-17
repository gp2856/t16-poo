#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "Mouse.h"
#include "Vec2.h"
#include "Surface.h"

class Dude
{
public:
	Dude(float x, float y);
	void ClampToScreen();
	void Draw( Graphics& gfx ) const;
	void Update( const Mouse& mouse, const float dt );
	Vec2 GetPos() const;
	int GetWidth() const;
	int GetHeight() const;
private:
	Vec2 pos;
	surface sprite_ = surface("Graphics\\awsom.bmp");
	static constexpr float speed = 120.0f;
	
};