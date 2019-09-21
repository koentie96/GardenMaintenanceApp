#ifndef ZONE_HPP
#define ZONE_HPP

#include <string>
#include <list>
#include "Plant.hpp"
#include "Area.hpp"

class CZone
{
	private:
		CArea m_area;
		std::string m_name;
		std::list<CPlant> m_plantList;
	public:
		CZone();

};

#endif //!ZONE_HPP