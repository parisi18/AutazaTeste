#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TesteAutaza.h"

class TesteAutaza : public QMainWindow
{
    Q_OBJECT

public:
    TesteAutaza(QWidget *parent = Q_NULLPTR);

private:
    Ui::TesteAutazaClass ui;
};
