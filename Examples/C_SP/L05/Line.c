/*
 * Line.c
 *
 * @author jonl
 *
 */

#include <stdio.h>
#include "Line.h"

Line new_Line(Point from, Point to) {
	Line this;
	this.from = from;
	this.to = to;
	return this;
}

void Line_printDetails(Line this){
	printf("( ");
	Point_printDetails(this.from);
	printf(", ");
	Point_printDetails(this.to);
	printf(" )");
}
