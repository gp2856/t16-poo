#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Goal
{
public:
	Goal(Vec2 in_pos);
	
	void Draw(Graphics& gfx) const;
	bool TestCollision(const Dude& dude) const;
	void Respawn(Vec2 in_pos);
	void UpdateColor();
	Vec2 GetPos();

private:
	static constexpr int dimension = 20;
	Color c;
	bool colorIncreasing;
	Vec2 pos;
};