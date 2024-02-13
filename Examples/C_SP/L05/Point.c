/*
 * Point.c
 *
 * @author jonl
 *
 */

#include <stdio.h>

#include "Point.h"

Point new_Point(int x, int y) {
    Point this;
    this.x = x;
    this.y = y;
    return this;
}

Point emptyPoint() {
    return new_Point(0, 0);
}

//Point Point_difference(Point p1, Point p2) {
//  p1.x -= p2.x;
//  p1.y -= p2.y;
//  return p1;
//}


Point Point_difference(Point p1, Point p2) {
    Point retval = { p1.x - p2.x, p1.y - p2.y };
    return retval;
}

// This will change the original p
void Point_shiftX(Point* p, int diff) {
    (*p).x += diff;
}

// Same as above using p-> instead of (*p).
void Point_shiftY(Point* p, int diff) {
    p->x += diff;
}


void Point_printDetails(Point this) {
    printf("(%d, %d) ", this.x, this.y);
}
