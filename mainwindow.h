#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
 //our variables are declared:
   double a1;
   double a2;
   double a3;
   double a4;
   double b1;
   double b2;
   double b3;
   double b4;
   double c1;
   double c2;
   double c3;
   double c4;
   double d1;
   double d2;
   double d3;
   double d4;
   double A;
   double B;
   double C;
   double D;
   double X1;
   double X2;
   double X3;
   double X4;


private:
    Ui::MainWindow *ui;

public slots: //The functions slots are declared for our program:
    void metodo();
    void borrar();

};

#endif // MAINWINDOW_H
