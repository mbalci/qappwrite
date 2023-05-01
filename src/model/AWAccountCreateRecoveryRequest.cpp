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

#include "AWAccountCreateRecoveryRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWAccountCreateRecoveryRequest::AWAccountCreateRecoveryRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWAccountCreateRecoveryRequest::AWAccountCreateRecoveryRequest() {
    this->initializeModel();
}

AWAccountCreateRecoveryRequest::~AWAccountCreateRecoveryRequest() {}

void AWAccountCreateRecoveryRequest::initializeModel() {

    m_email_isSet = false;
    m_email_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;
}

void AWAccountCreateRecoveryRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWAccountCreateRecoveryRequest::fromJsonObject(QJsonObject json) {

    m_email_isValid = ::OpenAPI::fromJsonValue(email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;
}

QString AWAccountCreateRecoveryRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWAccountCreateRecoveryRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_email_isSet) {
        obj.insert(QString("email"), ::OpenAPI::toJsonValue(email));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
    return obj;
}

QString AWAccountCreateRecoveryRequest::getEmail() const {
    return email;
}
void AWAccountCreateRecoveryRequest::setEmail(const QString &email) {
    this->email = email;
    this->m_email_isSet = true;
}

bool AWAccountCreateRecoveryRequest::is_email_Set() const{
    return m_email_isSet;
}

bool AWAccountCreateRecoveryRequest::is_email_Valid() const{
    return m_email_isValid;
}

QString AWAccountCreateRecoveryRequest::getUrl() const {
    return url;
}
void AWAccountCreateRecoveryRequest::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

bool AWAccountCreateRecoveryRequest::is_url_Set() const{
    return m_url_isSet;
}

bool AWAccountCreateRecoveryRequest::is_url_Valid() const{
    return m_url_isValid;
}

bool AWAccountCreateRecoveryRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWAccountCreateRecoveryRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_email_isValid && m_url_isValid && true;
}

} // namespace OpenAPI
