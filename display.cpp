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

#include <iostream>
#include <wx/rawbmp.h>

#include "display.h"

void Display::render(wxBitmap& bmp, std::unique_ptr<Grid> const& grid)
{
	wxNativePixelData data(bmp);
	assert(data);
	
	wxNativePixelData::Iterator p(data);
	for ( int y = 0; y < bmp.GetHeight(); ++y )
	{
		wxNativePixelData::Iterator rowStart = p;
		for ( int x = 0; x < bmp.GetWidth(); ++x, ++p )
		{
			int red, green, blue;
			colorMapping->getColor(grid->getData(x, y)).getRGB(red, green, blue);
			p.Red() = red;
			p.Green() = green;
			p.Blue() = blue;
		}
		p = rowStart;
		p.OffsetY(data, 1);
	}
}

void Display::setColorMapping(std::unique_ptr<ColorMapping> colorMapping)
{
	this->colorMapping = std::move(colorMapping);
}

