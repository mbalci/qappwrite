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

#include "AWToken.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWToken::AWToken(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWToken::AWToken() {
    this->initializeModel();
}

AWToken::~AWToken() {}

void AWToken::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_secret_isSet = false;
    m_secret_isValid = false;

    m_expire_isSet = false;
    m_expire_isValid = false;
}

void AWToken::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWToken::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("$id")]);
    m_id_isSet = !json[QString("$id")].isNull() && m_id_isValid;

    m_created_at_isValid = ::OpenAPI::fromJsonValue(created_at, json[QString("$createdAt")]);
    m_created_at_isSet = !json[QString("$createdAt")].isNull() && m_created_at_isValid;

    m_user_id_isValid = ::OpenAPI::fromJsonValue(user_id, json[QString("userId")]);
    m_user_id_isSet = !json[QString("userId")].isNull() && m_user_id_isValid;

    m_secret_isValid = ::OpenAPI::fromJsonValue(secret, json[QString("secret")]);
    m_secret_isSet = !json[QString("secret")].isNull() && m_secret_isValid;

    m_expire_isValid = ::OpenAPI::fromJsonValue(expire, json[QString("expire")]);
    m_expire_isSet = !json[QString("expire")].isNull() && m_expire_isValid;
}

QString AWToken::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWToken::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("$id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("$createdAt"), ::OpenAPI::toJsonValue(created_at));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("userId"), ::OpenAPI::toJsonValue(user_id));
    }
    if (m_secret_isSet) {
        obj.insert(QString("secret"), ::OpenAPI::toJsonValue(secret));
    }
    if (m_expire_isSet) {
        obj.insert(QString("expire"), ::OpenAPI::toJsonValue(expire));
    }
    return obj;
}

QString AWToken::getId() const {
    return id;
}
void AWToken::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool AWToken::is_id_Set() const{
    return m_id_isSet;
}

bool AWToken::is_id_Valid() const{
    return m_id_isValid;
}

QString AWToken::getCreatedAt() const {
    return created_at;
}
void AWToken::setCreatedAt(const QString &created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

bool AWToken::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool AWToken::is_created_at_Valid() const{
    return m_created_at_isValid;
}

QString AWToken::getUserId() const {
    return user_id;
}
void AWToken::setUserId(const QString &user_id) {
    this->user_id = user_id;
    this->m_user_id_isSet = true;
}

bool AWToken::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool AWToken::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QString AWToken::getSecret() const {
    return secret;
}
void AWToken::setSecret(const QString &secret) {
    this->secret = secret;
    this->m_secret_isSet = true;
}

bool AWToken::is_secret_Set() const{
    return m_secret_isSet;
}

bool AWToken::is_secret_Valid() const{
    return m_secret_isValid;
}

QString AWToken::getExpire() const {
    return expire;
}
void AWToken::setExpire(const QString &expire) {
    this->expire = expire;
    this->m_expire_isSet = true;
}

bool AWToken::is_expire_Set() const{
    return m_expire_isSet;
}

bool AWToken::is_expire_Valid() const{
    return m_expire_isValid;
}

bool AWToken::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_secret_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expire_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWToken::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_created_at_isValid && m_user_id_isValid && m_secret_isValid && m_expire_isValid && true;
}

} // namespace OpenAPI
