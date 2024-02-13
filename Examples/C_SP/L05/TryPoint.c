/*
 * TryPoint.c
 *
 * @author jonl
 *
 */

#include "Point.h"

int main() {
  Point p1 = new_Point(1, 2);
  Point p2 = new_Point(-1, -2);
  Point difference = Point_difference(p1, p2);
  Point origin = emptyPoint();
  Point_printDetails(p1);
  Point_printDetails(p2);
  Point_printDetails(difference);
  Point_printDetails(origin);
  return 0;
}
