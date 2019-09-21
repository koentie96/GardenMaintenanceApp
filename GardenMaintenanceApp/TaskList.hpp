#ifndef TASKLIST_HPP
#define TASKLIST_HPP

#include <list>
#include "Task.hpp"

class CTaskList
{
	private:
		std::list<CTask> m_taskList;
	public:
		//CTaskList();
		std::list<CTask>& GetList() const;
		void AddTask(CTask);
		bool DeleteTaskList();
		bool RemoveTask();
};

#endif // !TASKLIST_HPP
