#ifndef PLANTLIST_HPP
#define PLANTLIST_HPP

#include <list>
#include "Plant.hpp"

class CPlantList
{
	private:
		std::list<CPlant> m_plantList;
	public:
		//CPlantList();
		std::list<CPlant> GetPlantList() const;
		void AddPlant(CPlant);
};

#endif //!PLANTLIST_HPP
