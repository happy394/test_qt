#ifndef LISTMODEL_H
#define LISTMODEL_H

#include <QAbstractTableModel>
#include <QList>
#include <QObject>
#include <QSet>
#include <QStringList>
#include <QWidget>
#include <qfile.h>

class Netflix
{
private:
public:
    QList<QList<QString>> list; // vector
    QStringList stringList;     // vector of string
    QSet<QString> genres;
    Netflix();
    // ~listModel();
};

#endif // LISTMODEL_H
