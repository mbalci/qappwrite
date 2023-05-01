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

#include "AWAccountCreateMagicURLSessionRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWAccountCreateMagicURLSessionRequest::AWAccountCreateMagicURLSessionRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWAccountCreateMagicURLSessionRequest::AWAccountCreateMagicURLSessionRequest() {
    this->initializeModel();
}

AWAccountCreateMagicURLSessionRequest::~AWAccountCreateMagicURLSessionRequest() {}

void AWAccountCreateMagicURLSessionRequest::initializeModel() {

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_email_isSet = false;
    m_email_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;
}

void AWAccountCreateMagicURLSessionRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWAccountCreateMagicURLSessionRequest::fromJsonObject(QJsonObject json) {

    m_user_id_isValid = ::OpenAPI::fromJsonValue(user_id, json[QString("userId")]);
    m_user_id_isSet = !json[QString("userId")].isNull() && m_user_id_isValid;

    m_email_isValid = ::OpenAPI::fromJsonValue(email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;
}

QString AWAccountCreateMagicURLSessionRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWAccountCreateMagicURLSessionRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_user_id_isSet) {
        obj.insert(QString("userId"), ::OpenAPI::toJsonValue(user_id));
    }
    if (m_email_isSet) {
        obj.insert(QString("email"), ::OpenAPI::toJsonValue(email));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
    return obj;
}

QString AWAccountCreateMagicURLSessionRequest::getUserId() const {
    return user_id;
}
void AWAccountCreateMagicURLSessionRequest::setUserId(const QString &user_id) {
    this->user_id = user_id;
    this->m_user_id_isSet = true;
}

bool AWAccountCreateMagicURLSessionRequest::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool AWAccountCreateMagicURLSessionRequest::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QString AWAccountCreateMagicURLSessionRequest::getEmail() const {
    return email;
}
void AWAccountCreateMagicURLSessionRequest::setEmail(const QString &email) {
    this->email = email;
    this->m_email_isSet = true;
}

bool AWAccountCreateMagicURLSessionRequest::is_email_Set() const{
    return m_email_isSet;
}

bool AWAccountCreateMagicURLSessionRequest::is_email_Valid() const{
    return m_email_isValid;
}

QString AWAccountCreateMagicURLSessionRequest::getUrl() const {
    return url;
}
void AWAccountCreateMagicURLSessionRequest::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

bool AWAccountCreateMagicURLSessionRequest::is_url_Set() const{
    return m_url_isSet;
}

bool AWAccountCreateMagicURLSessionRequest::is_url_Valid() const{
    return m_url_isValid;
}

bool AWAccountCreateMagicURLSessionRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

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

bool AWAccountCreateMagicURLSessionRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_id_isValid && m_email_isValid && true;
}

} // namespace OpenAPI
