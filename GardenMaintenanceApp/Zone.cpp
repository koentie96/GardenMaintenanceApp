#include "Zone.hpp"

CZone::CZone() : m_name("") {} // initializer list for constructor

CArea CZone::GetArea() const
{
	return m_area;
}

void CZone::SetArea(CArea& area)
{
	m_area = area;
}

std::string CZone::GetName() const
{
	return m_name;
}

void CZone::SetName(std::string name)
{
	m_name = name;
}

CPlantList CZone::GetPlantList() const
{
	return m_plantList;
}

void CZone::SetPlantList(CPlantList& plantList)
{
	m_plantList = plantList;
}
