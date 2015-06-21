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

#ifndef COLORMAPPING_H
#define COLORMAPPING_H

#include "color.h"
#include "mandelbrot_calculator.h"

class ColorMapping
{
public:
	virtual Color getColor(MandelbrotResult &result) = 0;
};

class BasicColorMapping
{
public:
	Color getColor(MandelbrotResult &result);
};

#endif // COLORMAPPING_H
