#ifndef PERIOD_HPP
#define PERIOD_HPP

class CPeriod
{
	private:
		int m_begin;
		int m_end;
	public:
		CPeriod();
		int GetBegin() const;
		int GetEnd() const;
		void SetBegin();
		void SetEnd();
};

#endif //!PERIOD_HPP
