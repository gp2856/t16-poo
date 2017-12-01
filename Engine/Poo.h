#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Poo
{
public:
	void Init(Vec2 in_pos, Vec2 in_vel);
	void Update(float dt);
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
private:
	Vec2 pos;
	Vec2 vel;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool initialized = false;
};