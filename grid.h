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

#ifndef GRID_H
#define GRID_H

#include <memory>
#include <vector>

#include "color.h"
#include "mandelbrotcalculator.h"
#include "transformation.h"

class Grid
{
public:
	Grid(int width, int height, std::unique_ptr<Transformation> transformation):
		width(width), height(height), transformation(std::move(transformation)),
		data(width*height), colorData(width*height) {}
	
	void fill();
	MandelbrotResult getData(int x, int y);
	
private:
	int width, height;
	std::unique_ptr<Transformation> transformation;
	std::vector<MandelbrotResult> data;
	std::vector<Color> colorData;
};

#endif // GRID_H
