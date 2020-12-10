#ifndef FILEIO_H
#define FILEIO_H

#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <QDataStream>
#include <QList>

class FileIO
{
public:
    FileIO();

    void saveResultToFile(QWidget* widget, double result);
    QList<double> readFieldsFromFile(QWidget* widget);
};

#endif // FILEIO_H
