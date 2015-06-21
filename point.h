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

#ifndef POINT_H
#define POINT_H

class Point
{
public:
	Point(double x, double y): x(x), y(y) {}
	Point(): x(0), y(0) {}
	
	Point operator+(Point p);
	Point operator-(Point p);
	Point operator*(Point p);
	Point operator*(double c);
	friend Point operator*(double c, Point p);
	Point squared();
	double sqrMagnitude();
	
private:
	double x, y;
};

#endif // POINT_H
