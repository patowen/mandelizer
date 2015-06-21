/*
 * Copyright 2015 Patrick Owen patowen95@gmail.com
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

#include "point.h"

Point Point::operator+(Point p)
{
	return Point(x+p.x, y+p.y);
}

Point Point::operator-(Point p)
{
	return Point(x-p.x, y-p.y);
}

Point Point::operator*(Point p)
{
	return Point(x*p.x-y*p.y, x*p.y+y*p.x);
}

Point operator*(double c, Point p)
{
	return Point(p.x*c, p.y*c);
}


Point Point::operator*(double c)
{
	return Point(x*c, y*c);
}

Point Point::squared()
{
	return Point(x*x-y*y, 2*x*y);
}

double Point::sqrMagnitude()
{
	return x*x+y*y;
}
