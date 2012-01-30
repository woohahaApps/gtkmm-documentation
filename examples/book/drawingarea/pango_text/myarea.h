/* gtkmm example Copyright (C) 2012 gtkmm development team
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef GTKMM_EXAMPLE_MYAREA_H
#define GTKMM_EXAMPLE_MYAREA_H

#include <gtkmm/drawingarea.h>

class MyArea : public Gtk::DrawingArea
{
public:
  MyArea();
  virtual ~MyArea();

protected:
  //Override default signal handler:
  virtual bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr);

private:
  void draw_rectangle(const Cairo::RefPtr<Cairo::Context>& cr, int width, int height);
  void draw_text(const Cairo::RefPtr<Cairo::Context>& cr, int rectangle_width, int rectangle_height);

};

#endif // GTKMM_EXAMPLE_MYAREA_H
