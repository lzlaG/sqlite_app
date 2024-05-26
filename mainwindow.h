#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtGui>
#include <QSqlTableModel>
#include "db.h"
#include "mutant.h"

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
    void on_treeView_clicked(const QModelIndex &index);

    void on_ListCheckBox_clicked();

    void on_VectorCheckBox_clicked();

    void on_DbCheckBox_clicked();

    void on_FillContainer_clicked();

private:
    Ui::MainWindow *ui;
protected:
    DataBaseManager *db; // бд
    void FillTree(); // функция для заполнения
    QStandardItemModel *model; //модель
    int Container_User_Choice;
};
#endif // MAINWINDOW_H
