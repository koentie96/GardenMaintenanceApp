#ifndef PLANT_HPP
#define PLANT_HPP

#include <string>
#include <list>
#include "TaskList.hpp"
#include "Period.hpp"

#define COLOR int

class CPlant
{
	private:
		std::string m_name;
		COLOR m_color;
		CPeriod m_bloomPeriod;
		CTaskList m_taskList;
		int height;
		int width;
	public:
		CPlant();
		std::string GetName() const;
		void SetName(std::string);
		COLOR GetColor() const;
		void SetColor(COLOR);
		CPeriod GetBloomPeriod() const;
		void SetBloomPeriod(CPeriod);
		CTaskList& GetTaskList() const;
		void SetTaskList(CTaskList);
		int GetHeight() const;
		void SetHeight(int);
		int GetWidth() const;
		void SetWidth(int);
};

#endif //!PLANT_HPP
