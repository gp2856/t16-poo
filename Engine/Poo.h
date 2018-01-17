#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"
#include "Surface.h"

class Poo
{
public:
	void Init(Vec2 in_pos, Vec2 in_vel);
	void Update(float dt);
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
	int GetWidth() const;
	int GetHeight() const;
private:
	Vec2 pos;
	Vec2 vel;
	surface sprite_ = surface("Graphics\\poo.bmp");
	bool initialized = false;
};