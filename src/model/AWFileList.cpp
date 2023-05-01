/**
 * Appwrite
 * Appwrite backend as a service cuts up to 70% of the time and costs required for building a modern application. We abstract and simplify common development tasks behind a REST APIs, to help you develop your app in a fast and secure way. For full API documentation and tutorials go to [https://appwrite.io/docs](https://appwrite.io/docs)
 *
 * The version of the OpenAPI document: 1.3.0
 * Contact: team@appwrite.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "AWFileList.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWFileList::AWFileList(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWFileList::AWFileList() {
    this->initializeModel();
}

AWFileList::~AWFileList() {}

void AWFileList::initializeModel() {

    m_total_isSet = false;
    m_total_isValid = false;

    m_files_isSet = false;
    m_files_isValid = false;
}

void AWFileList::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWFileList::fromJsonObject(QJsonObject json) {

    m_total_isValid = ::OpenAPI::fromJsonValue(total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;

    m_files_isValid = ::OpenAPI::fromJsonValue(files, json[QString("files")]);
    m_files_isSet = !json[QString("files")].isNull() && m_files_isValid;
}

QString AWFileList::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWFileList::asJsonObject() const {
    QJsonObject obj;
    if (m_total_isSet) {
        obj.insert(QString("total"), ::OpenAPI::toJsonValue(total));
    }
    if (files.size() > 0) {
        obj.insert(QString("files"), ::OpenAPI::toJsonValue(files));
    }
    return obj;
}

qint32 AWFileList::getTotal() const {
    return total;
}
void AWFileList::setTotal(const qint32 &total) {
    this->total = total;
    this->m_total_isSet = true;
}

bool AWFileList::is_total_Set() const{
    return m_total_isSet;
}

bool AWFileList::is_total_Valid() const{
    return m_total_isValid;
}

QList<AWFileEx> AWFileList::getFiles() const {
    return files;
}
void AWFileList::setFiles(const QList<AWFileEx> &files) {
    this->files = files;
    this->m_files_isSet = true;
}

bool AWFileList::is_files_Set() const{
    return m_files_isSet;
}

bool AWFileList::is_files_Valid() const{
    return m_files_isValid;
}

bool AWFileList::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (files.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWFileList::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_total_isValid && m_files_isValid && true;
}

} // namespace OpenAPI
