// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// The last mod-tap hold will be converted to the corresponding mod-tap tap if
// another key on the same hand is tapped during the hold, unless a key on the
// other hand is tapped first.
#define BILATERAL_COMBINATIONS

// Use command-x, c, and v for cut, copy, and paste.
#define MIRYOKU_CLIPBOARD_MAC
