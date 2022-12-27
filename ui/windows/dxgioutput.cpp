//
// Created by reito on 2022/12/27.
//

// You may need to build the project (run Qt uic code generator) to get "ui_DxgiOutput.h" resolved

#include "dxgioutput.h"
#include "ui_DxgiOutput.h"
#include "QtGui"

static DxgiOutput* instance;

DxgiOutput::DxgiOutput(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::DxgiOutput) {
    instance = this;
    _hwnd = (HWND)instance->winId();

    ui->setupUi(this);
    resize(192 * 3, 108 * 3);
}

DxgiOutput::~DxgiOutput() {
    delete ui;
}

DxgiOutput *DxgiOutput::getWindow() {
    return instance;
}

HWND DxgiOutput::getHwnd() {
    return instance->_hwnd;
}
