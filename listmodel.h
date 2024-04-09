#ifndef LISTMODEL_H
#define LISTMODEL_H

#include <qfile.h>
#include <QList>
#include <QObject>
#include <QWidget>
#include <QAbstractTableModel>
#include <QStringList>
#include <QSet>

class Netflix
{
private:

public:
    QList<QList<QString>> list; // vector
    QStringList stringList; // vector of string
    QSet <QString> genres;
    Netflix();
    // ~listModel();
};

#endif // LISTMODEL_H
