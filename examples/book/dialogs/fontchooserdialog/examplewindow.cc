//$Id: examplewindow.cc 836 2007-05-09 03:02:38Z jjongsma $ -*- c++ -*-

/* gtkmm example Copyright (C) 2002 gtkmm development team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "examplewindow.h"
#include <iostream>


//TODO: This is not actually a FontChooserDialog example.
ExampleWindow::ExampleWindow()
: m_Button("sans")
{
  set_title("Gtk::FontChooserDialog example");

  add(m_Button);
  m_Button.signal_font_set().connect(sigc::mem_fun(*this,
              &ExampleWindow::on_button_font_set) );

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}

void ExampleWindow::on_button_font_set()
{
  Glib::ustring font_name = m_Button.get_font_name();
  std::cout << "Font chosen: " << font_name << std::endl;
}