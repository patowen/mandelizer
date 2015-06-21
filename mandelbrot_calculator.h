/*
 * Copyright 2015 <copyright holder> <email>
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

#ifndef MANDELBROTCALCULATOR_H
#define MANDELBROTCALCULATOR_H

#include <stdint.h>
#include <gmp.h>
#include "point.h"

class MandelbrotResult
{
public:
	MandelbrotResult() {}
	MandelbrotResult(bool escaped, uint32_t iterations=0) : escaped(escaped), iterations(iterations) {}
	bool escaped;
	uint32_t iterations;
};

// State machine used to calculate spots of the Mandelbrot set
class MandelbrotCalculator
{
public:
	MandelbrotResult calculate(Point p);
};

#endif // MANDELBROTCALCULATOR_H
