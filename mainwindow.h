#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtGui>
#include <QSqlTableModel>
#include "db.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

// созданные слоты
private slots:
    void on_pushButton_clicked();

    void on_debug_button_clicked();

private:
    Ui::MainWindow *ui;
protected:
    DataBaseManager *db; // бд
    void FillTree();
    QStandardItemModel *model;
    QStandardItem *rootItem;
};
#endif // MAINWINDOW_H
