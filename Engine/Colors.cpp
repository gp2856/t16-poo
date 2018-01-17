#include "Colors.h"

bool Color::operator==(const Color & rhs) const
{
	return dword == rhs.dword;
}

bool Color::operator!=(const Color & rhs) const
{
	return !(*this == rhs);
}
