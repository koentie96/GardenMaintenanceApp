#ifndef TASK_HPP
#define TASK_HPP

#include <string>

class CTask
{
	private:
		std::string m_name;
		std::string m_description;
		int m_monthOfTheYear; // TO DO: create nice enum for months of year
	public:
		CTask();
};


#endif //!TASK_HPP
