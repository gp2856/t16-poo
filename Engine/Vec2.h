#pragma once

class Vec2
{
public:
	//ctor
	Vec2() = default;
	Vec2(float x_in, float y_in);

	// Operators
	Vec2 operator+(const Vec2& rhs) const;
	Vec2 operator-(const Vec2& rhs) const;
	Vec2 operator*(const float rhs) const;
	bool operator==(const Vec2& rhs) const;

	Vec2& operator+=(const Vec2& rhs);
	Vec2& operator-=(const Vec2& rhs);
	Vec2& operator*=(const float rhs);

	// Other member functions
	float GetLength() const;
	float GetLengthSq() const;
	Vec2& Normalize();
	Vec2 GetNormalized() const;
	
	
public:
	float x;
	float y;
};