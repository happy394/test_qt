#include "listmodel.h"


Netflix::Netflix() {
    QFile file("/Users/happy394/Desktop/ok_netflix_shows_2.csv");
    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream ss(&file);
    QString s = ss.readLine();
    QList <QString> buff;

    while (!ss.atEnd())
    {
        s = ss.readLine();
        buff = s.split("\";\"");
        buff[0].remove("\"");
        (buff.end() - 1)->remove("\"");
        this->list.append(buff);
        this->stringList << buff[0];
        for (const QString &i: buff[7].split(", "))
        {
            this->genres.insert(i);
        }
    }

    file.close();
}
