#ifndef POINT_HPP
#define POINT_HPP

class CPoint
{
	private:
		int m_x;
		int m_y;
		int m_id;
	public:
		CPoint();
		int GetX() const;
		void SetX(int);
		int GetY() const;
		void SetY(int);
		int GetId() const;
		void SetId(int);
};

#endif //!POINT_HPP
