/*
 * Line.h
 *
 * @author jonl
 */

#ifndef LINE_H_
#define LINE_H_

#include "Point.h"

typedef struct Line {
	Point from;
	Point to;
} Line;

Line new_Line(Point from, Point to);

void Line_printDetails(Line this);

#endif /* LINE_H_ */
