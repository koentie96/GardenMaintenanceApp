#include "Area.hpp"

CArea::CArea() : m_color(0), m_id(0), m_plantable(false) {} // initializer list for constructor

COLOR CArea::GetColor() const
{
	return m_color;
}

void CArea::SetColor(COLOR color)
{
	m_color = color;
}

int CArea::GetId() const
{
	return m_id;
}

void CArea::SetId(int id)
{
	m_id = id;
}

bool CArea::IsPlantable() const
{
	return m_plantable;
}

void CArea::SetPlantable(bool isItPlantable)
{
	m_plantable = isItPlantable;
}
