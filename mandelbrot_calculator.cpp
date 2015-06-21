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

#include "mandelbrot_calculator.h"

/*MandelbrotCalculator::MandelbrotCalculator()
{
	mpf_t x;
	mpf_init (x);
	mpf_set_d (x, 3.0);
	
}*/

MandelbrotResult MandelbrotCalculator::calculate(Point p)
{
	Point c = p;
	Point z;
	
	for (int i=0; i<600; i++)
	{
		z = z.squared()+c;
		
		if (z.sqrMagnitude() > 10000)
			return MandelbrotResult(true, i);
	}
	
	return MandelbrotResult(false);
}
