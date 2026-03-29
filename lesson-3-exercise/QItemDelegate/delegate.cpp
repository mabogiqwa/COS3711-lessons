#include "delegate.h"

Delegate::Delegate(QObject *parent) : QItemDelegate(parent) {}

QWidget *Delegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                                const QModelIndex &index) const
{
    // Create a QSpinBox as the editor widget
    QSpinBox *editor = new QSpinBox(parent);
    editor->setMinimum(0);
    editor->setMaximum(100);
    return editor;
}

void Delegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    // Read current value from model and push it into the spinbox
    int value = index.model()->data(index, Qt::EditRole).toInt();
    QSpinBox *spinBox = static_cast<QSpinBox *>(editor);
    spinBox->setValue(value);
}

void Delegate::setModelData(QWidget *editor, QAbstractItemModel *model,
                            const QModelIndex &index) const
{
    // Read value from spinbox and push it back into the model
    QSpinBox *spinBox = static_cast<QSpinBox *>(editor);
    spinBox->interpretText();
    int value = spinBox->value();
    model->setData(index, value, Qt::EditRole);
}

void Delegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                                    const QModelIndex &index) const
{
    // Make the editor fit exactly within the cell
    editor->setGeometry(option.rect);
}
