/*
 * TryLine.c
 *
 * @author jonl
 *
 */
#include <stdio.h>

#include "Line.h"
#include "Point.h"

int main() {
    Point p1 = new_Point(0, 0);
    Point p2 = new_Point(100, 50);
    Line l = new_Line(p1, p2);
    Line_printDetails(l);

    printf("\n");

    Line_printDetails( new_Line( new_Point(1, 2), new_Point(3, 4) ) );

    return 0;
}
