#ifndef PLANT_HPP
#define PLANT_HPP

#include <string>
#include <list>
#include "Task.hpp"
#include "Period.hpp"

#define COLOR int

class CPlant
{
	private:
		std::string m_name;
		COLOR m_color;
		CPeriod m_bloomPeriod;
		std::list<CTask> m_taskList;
		int height;
		int width;
	public:
		CPlant();
};

#endif //!PLANT_HPP