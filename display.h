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

#ifndef DISPLAY_H
#define DISPLAY_H

#include <memory>
#include <wx/bitmap.h>

#include "gridset.h"
#include "transformation.h"

class Display
{
public:
	void render(wxBitmap &bmp, std::unique_ptr<Grid> const& grid);
private:
	std::unique_ptr<Transformation> transformation;
	GridSet gridSet;
};

#endif // DISPLAY_H
