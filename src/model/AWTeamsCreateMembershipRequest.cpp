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

#include "AWTeamsCreateMembershipRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWTeamsCreateMembershipRequest::AWTeamsCreateMembershipRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWTeamsCreateMembershipRequest::AWTeamsCreateMembershipRequest() {
    this->initializeModel();
}

AWTeamsCreateMembershipRequest::~AWTeamsCreateMembershipRequest() {}

void AWTeamsCreateMembershipRequest::initializeModel() {

    m_email_isSet = false;
    m_email_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_phone_isSet = false;
    m_phone_isValid = false;

    m_roles_isSet = false;
    m_roles_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;
}

void AWTeamsCreateMembershipRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWTeamsCreateMembershipRequest::fromJsonObject(QJsonObject json) {

    m_email_isValid = ::OpenAPI::fromJsonValue(email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_user_id_isValid = ::OpenAPI::fromJsonValue(user_id, json[QString("userId")]);
    m_user_id_isSet = !json[QString("userId")].isNull() && m_user_id_isValid;

    m_phone_isValid = ::OpenAPI::fromJsonValue(phone, json[QString("phone")]);
    m_phone_isSet = !json[QString("phone")].isNull() && m_phone_isValid;

    m_roles_isValid = ::OpenAPI::fromJsonValue(roles, json[QString("roles")]);
    m_roles_isSet = !json[QString("roles")].isNull() && m_roles_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;
}

QString AWTeamsCreateMembershipRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWTeamsCreateMembershipRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_email_isSet) {
        obj.insert(QString("email"), ::OpenAPI::toJsonValue(email));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("userId"), ::OpenAPI::toJsonValue(user_id));
    }
    if (m_phone_isSet) {
        obj.insert(QString("phone"), ::OpenAPI::toJsonValue(phone));
    }
    if (roles.size() > 0) {
        obj.insert(QString("roles"), ::OpenAPI::toJsonValue(roles));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    return obj;
}

QString AWTeamsCreateMembershipRequest::getEmail() const {
    return email;
}
void AWTeamsCreateMembershipRequest::setEmail(const QString &email) {
    this->email = email;
    this->m_email_isSet = true;
}

bool AWTeamsCreateMembershipRequest::is_email_Set() const{
    return m_email_isSet;
}

bool AWTeamsCreateMembershipRequest::is_email_Valid() const{
    return m_email_isValid;
}

QString AWTeamsCreateMembershipRequest::getUserId() const {
    return user_id;
}
void AWTeamsCreateMembershipRequest::setUserId(const QString &user_id) {
    this->user_id = user_id;
    this->m_user_id_isSet = true;
}

bool AWTeamsCreateMembershipRequest::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool AWTeamsCreateMembershipRequest::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QString AWTeamsCreateMembershipRequest::getPhone() const {
    return phone;
}
void AWTeamsCreateMembershipRequest::setPhone(const QString &phone) {
    this->phone = phone;
    this->m_phone_isSet = true;
}

bool AWTeamsCreateMembershipRequest::is_phone_Set() const{
    return m_phone_isSet;
}

bool AWTeamsCreateMembershipRequest::is_phone_Valid() const{
    return m_phone_isValid;
}

QList<QString> AWTeamsCreateMembershipRequest::getRoles() const {
    return roles;
}
void AWTeamsCreateMembershipRequest::setRoles(const QList<QString> &roles) {
    this->roles = roles;
    this->m_roles_isSet = true;
}

bool AWTeamsCreateMembershipRequest::is_roles_Set() const{
    return m_roles_isSet;
}

bool AWTeamsCreateMembershipRequest::is_roles_Valid() const{
    return m_roles_isValid;
}

QString AWTeamsCreateMembershipRequest::getUrl() const {
    return url;
}
void AWTeamsCreateMembershipRequest::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

bool AWTeamsCreateMembershipRequest::is_url_Set() const{
    return m_url_isSet;
}

bool AWTeamsCreateMembershipRequest::is_url_Valid() const{
    return m_url_isValid;
}

QString AWTeamsCreateMembershipRequest::getName() const {
    return name;
}
void AWTeamsCreateMembershipRequest::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool AWTeamsCreateMembershipRequest::is_name_Set() const{
    return m_name_isSet;
}

bool AWTeamsCreateMembershipRequest::is_name_Valid() const{
    return m_name_isValid;
}

bool AWTeamsCreateMembershipRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_phone_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWTeamsCreateMembershipRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_roles_isValid && m_url_isValid && true;
}

} // namespace OpenAPI
