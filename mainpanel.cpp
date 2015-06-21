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

#include "mainpanel.h"

BEGIN_EVENT_TABLE(MainPanel, wxPanel)

EVT_PAINT(MainPanel::paintEvent)

END_EVENT_TABLE()

MainPanel::MainPanel(wxFrame* parent) : wxPanel(parent, wxID_ANY, wxDefaultPosition, wxSize(800, 600))
{
	grid = std::unique_ptr<Grid>(new Grid(1024, 768, std::unique_ptr<Transformation>(new BasicTransformation(Point(), 3.0, 0.0))));
	grid->fill();
}

void MainPanel::paintEvent(wxPaintEvent& event)
{
	wxPaintDC dc(this);
	render(dc);
}

void MainPanel::paintNow()
{
	wxClientDC dc(this);
	render(dc);
}

void MainPanel::render(wxDC& dc)
{
	int width = dc.GetSize().GetWidth(), height = dc.GetSize().GetHeight();
	
	wxBitmap bmp(width, height, 24);
	display.render(bmp, grid);
	
	dc.DrawBitmap(bmp, 0, 0);
}