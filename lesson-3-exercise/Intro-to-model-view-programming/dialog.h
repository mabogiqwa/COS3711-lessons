#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QDialog>
#include <QAbstractItemView>
#include <QtGui>

#include "./ui_dialog.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    // VIEW: The auto-generated UI class that owns and manages all the visual
    // widgets (listView, comboBox, pushButtons) defined in dialog.ui
    Ui::Dialog *ui;

    // MODEL: QStringListModel holds the actual data (the list of strings).
    // It is the single source of truth — both the listView and comboBox
    // read from and write to this same object.
    QStringListModel *model;

private slots:
    // CONTROLLER: These slots respond to user actions (button clicks) and
    // update the model, which in turn automatically refreshes the views.
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
};
#endif // DIALOG_H
