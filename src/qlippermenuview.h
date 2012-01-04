/*
Qlipper - clipboard history manager
Copyright (C) 2012 Petr Vanek <petr@scribus.info>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef QLIPPERMENUVIEW_H
#define QLIPPERMENUVIEW_H

#include "qmenuview.h"


class QlipperMenuView : public QMenuView
{
    Q_OBJECT
public:
    explicit QlipperMenuView(QWidget *parent = 0);

signals:
    void editPreferences();
    void showAbout();

protected:
    virtual void postPopulated();
};

#endif // QLIPPERMENUVIEW_H