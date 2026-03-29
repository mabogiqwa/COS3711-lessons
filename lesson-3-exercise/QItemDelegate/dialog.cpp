#include "dialog.h"
#include "delegate.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    model = new QStandardItemModel(4, 2, this);

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 2; ++col)
        {
            QModelIndex index = model->index(row, col, QModelIndex());
            model->setData(index, 0);
        }
    }

    ui->tableView->setModel(model);

    // Attach the delegate so the spinbox appears when editing cells
    Delegate *delegate = new Delegate(this);
    ui->tableView->setItemDelegate(delegate);
} //A delegate plays a similar role to the controller but is more specialised

Dialog::~Dialog()
{
    delete ui;
}
