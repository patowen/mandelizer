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

#include <cmath>

#include "color.h"

void Color::getRGB(int& red, int& green, int& blue)
{
	red = (int) 256*gammaCorrect(this->red);
	green = (int) 256*gammaCorrect(this->green);
	blue = (int) 256*gammaCorrect(this->blue);
	
	if (red > 255) red = 255;
	if (green > 255) green = 255;
	if (blue > 255) blue = 255;
}

Color Color::operator+(Color p)
{
	return Color(red+p.red, green+p.green, blue+p.blue);
}

Color Color::operator*(double c)
{
	return Color(red*c, green*c, blue*c);
}

Color operator*(double c, Color p)
{
	return Color(c*p.red, c*p.green, c*p.blue);
}

float Color::gammaCorrect(float x)
{
	if (x < 0) x = 0;
	if (x > 1) x = 1;
	
	double a = 0.055;
	if (x <= 0.0031308)
		return 12.92*x;
	else
		return (1+a)*std::pow(x, 1/2.4) - a;
}
