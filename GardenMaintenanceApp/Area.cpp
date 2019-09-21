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

int CArea::CalculateAreaByOutlinePoints() const
{
	int totalArea = 0;
	if(m_outlinePoints.size() >= AreaDefines::MinNumberOfPointsInArea)
	{
		// calculate total area...
		// https://m.wikihow.com/Calculate-the-Area-of-a-Polygon
	}
	return totalArea;
}