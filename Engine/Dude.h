#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "Vec2.h"

class Dude
{
public:
	Dude(float x, float y);
	void ClampToScreen();
	void Draw( Graphics& gfx ) const;
	void Update( const Keyboard& kbd, float dt, Vec2 direction );
	Vec2 GetPos() const;
	int GetWidth() const;
	int GetHeight() const;
private:
	Vec2 pos;
	static constexpr float speed = 120.0f;
	static constexpr int width = 20;
	static constexpr int height = 20;
};