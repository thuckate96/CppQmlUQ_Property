#include "datastore.h"
#include <QDebug>

DataStore::DataStore(QObject *parent) : QObject(parent), count(0), msg("0 hits"){

}

void DataStore::setMessage(QString str){
    msg = str;
    emit messageChanged();
}

void DataStore::callMeFromQml(){
    qDebug("Inside callMeFromQml()");
    count++;
    setMessage(QString("%1 hits").arg(count));
}
