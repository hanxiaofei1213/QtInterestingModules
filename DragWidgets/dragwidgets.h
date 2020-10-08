#pragma once

#include <QtWidgets/QWidget>
#include "ui_dragwidgets.h"

class DragWidgets : public QWidget
{
    Q_OBJECT

public:
    DragWidgets(QWidget *parent = Q_NULLPTR);

private:
    Ui::DragWidgetsClass ui;
};
