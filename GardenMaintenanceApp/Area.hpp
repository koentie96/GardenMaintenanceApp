#ifndef AREA_HPP
#define AREA_HPP

#include <vector>
#include "Point.hpp"

#define COLOR int

class CArea
{
	private:
		std::vector<CPoint> m_outlinePoints;
		COLOR m_color;
		int m_id;
		bool m_plantable;
	public:
		CArea();
		COLOR GetColor() const;
		void SetColor(COLOR);
		int GetId() const;
		void SetId(int);
		bool IsPlantable() const;
		void SetPlantable(bool);
};

#endif //!AREA_HPP
