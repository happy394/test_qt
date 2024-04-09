#include "tablemodel.h"
#include <QFile>
#include <QMessageBox>

tablemodel::tablemodel(QObject *parent): QAbstractTableModel(parent)
{
    QFile file("/Users/happy394/Desktop/ok_netflix_shows_2.csv");
    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream ss(&file);
    // QStringList row;

    // while (!ss.atEnd())
    // {
    //     QString s=ss.readLine();
    //     row.append(s.split("\";\""));
    //     qDebug() << row << '\n';
    // }

    file.close();
}

int tablemodel::rowCount(const QModelIndex &parent) const
{
    return 2663;
}

int tablemodel::columnCount(const QModelIndex &parent) const
{
    return 9;
}

QVariant tablemodel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
        return QString("Row%1, Column%2")
            .arg(index.row() + 1)
            .arg(index.column() +1);

    return QVariant();
}
