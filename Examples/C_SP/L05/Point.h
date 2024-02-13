/*
 * Point.h
 *
 * @author jonl
 *
 */

#ifndef POINT_H_
#define POINT_H_

typedef struct Point {
	int x;
	int y;
} Point;

Point new_Point(int x, int y);
Point emptyPoint();
Point Point_difference(Point p1, Point p2);
void Point_shiftX(Point* p, int diff);
void Point_shiftY(Point* p, int diff);
void Point_printDetails(Point this);

#endif /* POINT_H_ */
