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

#include "AWPhone.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWPhone::AWPhone(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWPhone::AWPhone() {
    this->initializeModel();
}

AWPhone::~AWPhone() {}

void AWPhone::initializeModel() {

    m_code_isSet = false;
    m_code_isValid = false;

    m_country_code_isSet = false;
    m_country_code_isValid = false;

    m_country_name_isSet = false;
    m_country_name_isValid = false;
}

void AWPhone::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWPhone::fromJsonObject(QJsonObject json) {

    m_code_isValid = ::OpenAPI::fromJsonValue(code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_country_code_isValid = ::OpenAPI::fromJsonValue(country_code, json[QString("countryCode")]);
    m_country_code_isSet = !json[QString("countryCode")].isNull() && m_country_code_isValid;

    m_country_name_isValid = ::OpenAPI::fromJsonValue(country_name, json[QString("countryName")]);
    m_country_name_isSet = !json[QString("countryName")].isNull() && m_country_name_isValid;
}

QString AWPhone::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWPhone::asJsonObject() const {
    QJsonObject obj;
    if (m_code_isSet) {
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(code));
    }
    if (m_country_code_isSet) {
        obj.insert(QString("countryCode"), ::OpenAPI::toJsonValue(country_code));
    }
    if (m_country_name_isSet) {
        obj.insert(QString("countryName"), ::OpenAPI::toJsonValue(country_name));
    }
    return obj;
}

QString AWPhone::getCode() const {
    return code;
}
void AWPhone::setCode(const QString &code) {
    this->code = code;
    this->m_code_isSet = true;
}

bool AWPhone::is_code_Set() const{
    return m_code_isSet;
}

bool AWPhone::is_code_Valid() const{
    return m_code_isValid;
}

QString AWPhone::getCountryCode() const {
    return country_code;
}
void AWPhone::setCountryCode(const QString &country_code) {
    this->country_code = country_code;
    this->m_country_code_isSet = true;
}

bool AWPhone::is_country_code_Set() const{
    return m_country_code_isSet;
}

bool AWPhone::is_country_code_Valid() const{
    return m_country_code_isValid;
}

QString AWPhone::getCountryName() const {
    return country_name;
}
void AWPhone::setCountryName(const QString &country_name) {
    this->country_name = country_name;
    this->m_country_name_isSet = true;
}

bool AWPhone::is_country_name_Set() const{
    return m_country_name_isSet;
}

bool AWPhone::is_country_name_Valid() const{
    return m_country_name_isValid;
}

bool AWPhone::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_country_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_country_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWPhone::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && m_country_code_isValid && m_country_name_isValid && true;
}

} // namespace OpenAPI
