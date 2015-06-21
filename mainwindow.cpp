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

#include "mainwindow.h"

BEGIN_EVENT_TABLE(MainWindow, wxFrame)
EVT_MENU(wxID_EXIT,  MainWindow::OnExit)
EVT_MENU(wxID_ABOUT, MainWindow::OnAbout)
END_EVENT_TABLE()

MainWindow::MainWindow(const wxString& title, const wxPoint& pos, const wxSize& size)
: wxFrame(NULL, wxID_ANY, title, pos, size)
{
	wxMenu *menuFile = new wxMenu;
	menuFile->wxMenuBase::Append(wxID_EXIT);
	wxMenu *menuHelp = new wxMenu;
	menuHelp->wxMenuBase::Append(wxID_ABOUT);
	wxMenuBar *menuBar = new wxMenuBar;
	menuBar->Append( menuFile, "&File" );
	menuBar->Append( menuHelp, "&Help" );
	wxFrameBase::SetMenuBar( menuBar );
}

void MainWindow::OnExit(wxCommandEvent& event)
{
	wxWindowBase::Close( true );
}

void MainWindow::OnAbout(wxCommandEvent& event)
{
	wxMessageBox( PROGRAM_NAME " is a program that allows you to explore the Mandelbrot set "
	"and analyze many things pertaining to it.",
	"About " PROGRAM_NAME, wxOK | wxICON_INFORMATION );
}