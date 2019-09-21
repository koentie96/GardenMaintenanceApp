#include "Point.hpp"

CPoint::CPoint() : m_id(0), m_x(0), m_y(0) {} // initializer list for constructor

int CPoint::GetX() const
{
	return m_x;
}

void CPoint::SetX(int x)
{
	m_x = x;
}

int CPoint::GetY() const
{
	return m_y;
}

void CPoint::SetY(int y)
{
	m_y = y;
}

int CPoint::GetId() const
{
	return m_id;
}

void CPoint::SetId(int id)
{
	m_id = id;
}
