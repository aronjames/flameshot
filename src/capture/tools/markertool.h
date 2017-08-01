// Copyright 2017 Alejandro Sirgo Rica
//
// This file is part of Flameshot.
//
//     Flameshot is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) any later version.
//
//     Flameshot is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.
//
//     You should have received a copy of the GNU General Public License
//     along with Flameshot.  If not, see <http://www.gnu.org/licenses/>.

#ifndef MARKERTOOL_H
#define MARKERTOOL_H

#include "capturetool.h"

class MarkerTool : public CaptureTool
{
    Q_OBJECT
public:
    explicit MarkerTool(QObject *parent = nullptr);

    int getID();
    bool isSelectable();
    ToolWorkType getToolType();

    QString getIconName();
    QString getName();
    QString getDescription();

    void processImage(
            QPainter &painter,
            const QVector<QPoint> &points,
            const QColor &color);

    void onPressed();

private:
    inline bool needsAdjustment(const QPoint &p0, const QPoint &p1) const;
};

#endif // MARKERTOOL_H
