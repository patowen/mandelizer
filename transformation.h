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

#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include "point.h"

class Transformation
{
public:
	virtual Point toWorld(Point &p) = 0;
	virtual Point toScreen(Point &p) = 0;
};

class BasicTransformation: public Transformation
{
public:
	BasicTransformation(Point center, double radius, double theta): center(center), radius(radius), theta(theta) {}
	Point toWorld(Point &p);
	Point toScreen(Point &p);
	
private:
	Point center;
	double radius;
	double theta;
};

#endif // TRANSFORMATION_H
