/* pango-myanmar
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Author: Thura Hlaing <trhura@gmail.com>
 *
 */

#include <glib.h>

void	wbrk_init ();
void	wbrk_unload ();
gint	wbrk_get_next_brkpos (gunichar *nstring,gunichar *string);
gunichar*	wbrk_normalize_string (gunichar *string);
gboolean	wbrk_is_ready ();


