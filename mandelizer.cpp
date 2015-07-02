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

#include "mandelizer.h"

#include "mainwindow.h"

IMPLEMENT_APP(Mandelizer);

bool Mandelizer::OnInit()
{
	wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
	MainWindow *frame = new MainWindow(PROGRAM_NAME, wxPoint(50, 50), wxSize(800, 600));
	
	panel = new MainPanel((wxFrame*) frame);
	sizer->Add(panel, 1, wxEXPAND);
	sizer->SetSizeHints(frame);
	
	frame->wxWindowBase::SetSizer(sizer);
	frame->wxWindowBase::SetAutoLayout(true);
	frame->wxTopLevelWindowBase::SetMinSize(wxSize(0, 0));
	frame->wxTopLevelWindowBase::CenterOnScreen();
	
	frame->wxFrameBase::Show( true );
	return true;
}
