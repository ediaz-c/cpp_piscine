#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point d (b.getX() - a.getX(), b.getY() - a.getY());
    Point e (c.getX() - a.getX(), c.getY() - a.getY());
    Fixed w1 = (e.getX() * (a.getY() - point.getY()) + e.getY() * (point.getX() - a.getX())) / (d.getX() * e.getY() - d.getY() * e.getX());
    Fixed w2 = (point.getY() - a.getY() - w1 * d.getY()) / e.getY();
    return (w1 >= 0 && w2 >= 0 && (w1 + w2) <= 1);
}