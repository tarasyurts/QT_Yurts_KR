#include "fileio.h"

FileIO::FileIO()
{

}


void FileIO::saveResultToFile(QWidget* widget, double result)
{
    QString filename = QFileDialog::getSaveFileName(widget, QFileDialog::tr("Open file"), ".", QFileDialog::tr("*.txt"));

    QTextStream in(stdin);
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)){

        file.write(qPrintable(QString::number(result)));
        file.close();
    }
}


QList<double> FileIO::readFieldsFromFile(QWidget* widget)
{
    QList<double> fields;

    QString filename = QFileDialog::getOpenFileName(widget, QFileDialog::tr("Open file"), ".", QFileDialog::tr("*.txt"));
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly | QIODevice::Truncate)){
        QTextStream in(&file);
        while (!in.atEnd())
        {
            fields.append(in.readLine().toDouble());
        }
    }
    return fields;
}
