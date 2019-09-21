#ifndef ZONE_HPP
#define ZONE_HPP

#include <string>
#include <list>
#include "PlantList.hpp"
#include "Area.hpp"

class CZone
{
	private:
		CArea m_area; // TO DO: maybe better to use std wrapper reference
		std::string m_name;
		CPlantList m_plantList; // TO DO: maybe better to use std wrapper reference
	public:
		CZone();
		CArea GetArea() const;
		void SetArea(CArea&);
		std::string GetName() const;
		void SetName(std::string);
		CPlantList GetPlantList() const;
		void SetPlantList(CPlantList&);
};

#endif //!ZONE_HPP
