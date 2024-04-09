#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QObject>
#include <QWidget>
#include <QAbstractTableModel>

class tablemodel: public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit tablemodel(QObject *parent=nullptr);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
};

#endif // TABLEMODEL_H
