#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
//#include <QPainter>
#include <QDesktopWidget>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(1300,400);
    move((QApplication::desktop()->width() - width())/2, (QApplication::desktop()->height() - height())/2);
    qApp->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::keyPressEvent(QKeyEvent *event)
bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    qDebug() << obj << event;
    if(event->type() == QEvent::KeyPress ){
        QKeyEvent *KE = static_cast<QKeyEvent*>(event);
        ui->statusBar->showMessage(KE->text());
        if (KE->key() == Qt::Key_Escape) {
            ui->pushButton_Esc->setChecked(true);
        } else if (KE->key() == Qt::Key_F1) {
            ui->pushButton_F1->setChecked(true);
        } else if (KE->key() == Qt::Key_F2) {
            ui->pushButton_F2->setChecked(true);
        } else if (KE->key() == Qt::Key_F3) {
            ui->pushButton_F3->setChecked(true);
        } else if (KE->key() == Qt::Key_F4) {
            ui->pushButton_F4->setChecked(true);
        } else if (KE->key() == Qt::Key_F5) {
            ui->pushButton_F5->setChecked(true);
        } else if (KE->key() == Qt::Key_F6) {
            ui->pushButton_F6->setChecked(true);
        } else if (KE->key() == Qt::Key_F7) {
            ui->pushButton_F7->setChecked(true);
        } else if (KE->key() == Qt::Key_F8) {
            ui->pushButton_F8->setChecked(true);
        } else if (KE->key() == Qt::Key_F9) {
            ui->pushButton_F9->setChecked(true);
        } else if (KE->key() == Qt::Key_F10) {
            ui->pushButton_F10->setChecked(true);
        } else if (KE->key() == Qt::Key_F11) {
            ui->pushButton_F11->setChecked(true);
        } else if (KE->key() == Qt::Key_F12) {
            ui->pushButton_F12->setChecked(true);
        } else if (KE->key() == Qt::Key_QuoteLeft) {
            ui->pushButton_QuoteLeft->setChecked(true);
        } else if (KE->key() == Qt::Key_1) {
            ui->pushButton_1->setChecked(true);
        } else if (KE->key() == Qt::Key_2) {
            ui->pushButton_2->setChecked(true);
        } else if (KE->key() == Qt::Key_3) {
            ui->pushButton_3->setChecked(true);
        } else if (KE->key() == Qt::Key_4) {
            ui->pushButton_4->setChecked(true);
        } else if (KE->key() == Qt::Key_5) {
            ui->pushButton_5->setChecked(true);
        } else if (KE->key() == Qt::Key_6) {
            ui->pushButton_6->setChecked(true);
        } else if (KE->key() == Qt::Key_7) {
            ui->pushButton_7->setChecked(true);
        } else if (KE->key() == Qt::Key_8) {
            ui->pushButton_8->setChecked(true);
        } else if (KE->key() == Qt::Key_9) {
            ui->pushButton_9->setChecked(true);
        } else if (KE->key() == Qt::Key_0) {
            ui->pushButton_0->setChecked(true);
        } else if (KE->key() == Qt::Key_Minus) {
            ui->pushButton_Minus->setChecked(true);
        } else if (KE->key() == Qt::Key_Equal) {
            ui->pushButton_Equal->setChecked(true);
        } else if (KE->key() == Qt::Key_Backspace) {
            ui->pushButton_Backspace->setChecked(true);
        } else if (KE->key() == Qt::Key_Tab) {
            ui->pushButton_Tab->setChecked(true);
        } else if (KE->key() == Qt::Key_Q) {
            ui->pushButton_Q->setChecked(true);
        } else if (KE->key() == Qt::Key_W) {
            ui->pushButton_W->setChecked(true);
        } else if (KE->key() == Qt::Key_E) {
            ui->pushButton_E->setChecked(true);
        } else if (KE->key() == Qt::Key_R) {
            ui->pushButton_R->setChecked(true);
        } else if (KE->key() == Qt::Key_T) {
            ui->pushButton_T->setChecked(true);
        } else if (KE->key() == Qt::Key_Y) {
            ui->pushButton_Y->setChecked(true);
        } else if (KE->key() == Qt::Key_U) {
            ui->pushButton_U->setChecked(true);
        } else if (KE->key() == Qt::Key_I) {
            ui->pushButton_I->setChecked(true);
        } else if (KE->key() == Qt::Key_O) {
            ui->pushButton_O->setChecked(true);
        } else if (KE->key() == Qt::Key_P) {
            ui->pushButton_P->setChecked(true);
        } else if (KE->key() == Qt::Key_BracketLeft) {
            ui->pushButton_BracketLeft->setChecked(true);
        } else if (KE->key() == Qt::Key_BracketRight) {
            ui->pushButton_BracketRight->setChecked(true);
        } else if (KE->key() == Qt::Key_Backslash) {
            ui->pushButton_Backslash->setChecked(true);
        } else if (KE->key() == Qt::Key_CapsLock) {
            ui->pushButton_CapsLock->setChecked(true);
        } else if (KE->key() == Qt::Key_A) {
            ui->pushButton_A->setChecked(true);
        } else if (KE->key() == Qt::Key_S) {
            ui->pushButton_S->setChecked(true);
        } else if (KE->key() == Qt::Key_D) {
            ui->pushButton_D->setChecked(true);
        } else if (KE->key() == Qt::Key_F) {
            ui->pushButton_F->setChecked(true);
        } else if (KE->key() == Qt::Key_G) {
            ui->pushButton_G->setChecked(true);
        } else if (KE->key() == Qt::Key_H) {
            ui->pushButton_H->setChecked(true);
        } else if (KE->key() == Qt::Key_J) {
            ui->pushButton_J->setChecked(true);
        } else if (KE->key() == Qt::Key_K) {
            ui->pushButton_K->setChecked(true);
        } else if (KE->key() == Qt::Key_L) {
            ui->pushButton_L->setChecked(true);
        } else if (KE->key() == Qt::Key_Semicolon) {
            ui->pushButton_Semicolon->setChecked(true);
        } else if (KE->key() == Qt::Key_Apostrophe) {
            ui->pushButton_Apostrophe->setChecked(true);
        } else if (KE->key() == Qt::Key_Return) {
            ui->pushButton_Return->setChecked(true);
        } else if (KE->key() == Qt::Key_Shift) {
            ui->pushButton_ShiftLeft->setChecked(true);
            ui->pushButton_ShiftRight->setChecked(true);
        } else if (KE->key() == Qt::Key_Z) {
            ui->pushButton_Z->setChecked(true);
        } else if (KE->key() == Qt::Key_X) {
            ui->pushButton_X->setChecked(true);
        } else if (KE->key() == Qt::Key_C) {
            ui->pushButton_C->setChecked(true);
        } else if (KE->key() == Qt::Key_V) {
            ui->pushButton_V->setChecked(true);
        } else if (KE->key() == Qt::Key_B) {
            ui->pushButton_B->setChecked(true);
        } else if (KE->key() == Qt::Key_N) {
            ui->pushButton_N->setChecked(true);
        } else if (KE->key() == Qt::Key_M) {
            ui->pushButton_M->setChecked(true);
        } else if (KE->key() == Qt::Key_Comma) {
            ui->pushButton_Comma->setChecked(true);
        } else if (KE->key() == Qt::Key_Period) {
            ui->pushButton_Period->setChecked(true);
        } else if (KE->key() == Qt::Key_Slash) {
            ui->pushButton_Slash->setChecked(true);
        } else if (KE->key() == Qt::Key_Control) {
            ui->pushButton_CtrlLeft->setChecked(true);
            ui->pushButton_CtrlRight->setChecked(true);
        } else if (KE->key() == Qt::Key_Alt) {
            ui->pushButton_AltLeft->setChecked(true);
            ui->pushButton_AltRight->setChecked(true);
        } else if (KE->key() == Qt::Key_Meta) {
            ui->pushButton_WinLeft->setChecked(true);
            ui->pushButton_WinRight->setChecked(true);
        } else if (KE->key() == Qt::Key_Space) {
            ui->pushButton_Space->setChecked(true);
        } else if (KE->key() == Qt::Key_Menu) {
            ui->pushButton_Menu->setChecked(true);
        } else if (KE->key() == Qt::Key_Print) {
            ui->pushButton_Print->setChecked(true);
        } else if (KE->key() == Qt::Key_ScrollLock) {
            ui->pushButton_ScrollLock->setChecked(true);
        } else if (KE->key() == Qt::Key_Pause) {
            ui->pushButton_Pause->setChecked(true);
        } else if (KE->key() == Qt::Key_Insert) {
            ui->pushButton_Insert->setChecked(true);
        } else if (KE->key() == Qt::Key_Home) {
            ui->pushButton_Home->setChecked(true);
        } else if (KE->key() == Qt::Key_PageUp) {
            ui->pushButton_PageUp->setChecked(true);
        } else if (KE->key() == Qt::Key_Delete) {
            ui->pushButton_Delete->setChecked(true);
        } else if (KE->key() == Qt::Key_End) {
            ui->pushButton_End->setChecked(true);
        } else if (KE->key() == Qt::Key_PageDown) {
            ui->pushButton_PageDown->setChecked(true);
        } else if (KE->key() == Qt::Key_Up) {
            ui->pushButton_Up->setChecked(true);
        } else if (KE->key() == Qt::Key_Left) {
            ui->pushButton_Left->setChecked(true);
        } else if (KE->key() == Qt::Key_Down) {
            ui->pushButton_Down->setChecked(true);
        } else if (KE->key() == Qt::Key_Right) {
            ui->pushButton_Right->setChecked(true);
        } else if (KE->key() == Qt::Key_Clear) {
            ui->pushButton_Clear->setChecked(true);
        } else if (KE->key() == Qt::Key_Enter) {
            ui->pushButton_Enter->setChecked(true);
        }
        return false;
    }
    //return QObject::eventFilter(obj, event);
}

/*
void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter p(this);
    p.setPen(Qt::NoPen);
    p.setBrush(QColor(0,0,0));
    p.drawRect(rect());

}
*/