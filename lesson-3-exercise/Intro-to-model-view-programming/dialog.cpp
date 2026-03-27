#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // MODEL: Create the model that will store and manage the list data.
    model = new QStringListModel(this);

    // MODEL: Populate the model with its initial data.
    QStringList list;
    list << "cats" << "dogs" << "birds";
    model->setStringList(list);

    // VIEW: Attach the model to both views. Qt's MVC wiring means any change
    // to the model will automatically be reflected in both widgets without
    // any extra code.
    ui->listView->setModel(model);
    ui->comboBox->setModel(model);

    // VIEW: Configure how the listView triggers in-place editing of items.
    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);
}

Dialog::~Dialog()
{
    delete ui;
}

// CONTROLLER: Handles "Add at end" button click.
// Inserts a new blank row at the bottom of the model, selects it in the
// view, and opens it for immediate editing.
void Dialog::on_pushButton_clicked()
{
    int row = model->rowCount();
    model->insertRows(row, 1);           // MODEL: mutate

    QModelIndex index = model->index(row);
    ui->listView->setCurrentIndex(index); // VIEW: select
    ui->listView->edit(index);            // VIEW: open editor
}

// CONTROLLER: Handles "Insert above" button click.
// Inserts a new blank row above the currently selected row.
void Dialog::on_pushButton_2_clicked()
{
    int row = ui->listView->currentIndex().row(); // VIEW: read selection
    model->insertRows(row, 1);                    // MODEL: mutate

    QModelIndex index = model->index(row);
    ui->listView->setCurrentIndex(index);          // VIEW: select
    ui->listView->edit(index);                     // VIEW: open editor
}

// CONTROLLER: Handles "Delete" button click.
// Removes the currently selected row from the model; the views update automatically.
void Dialog::on_pushButton_3_clicked()
{
    model->removeRows(ui->listView->currentIndex().row(), 1); // MODEL: mutate
}
