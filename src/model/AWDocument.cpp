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

#include "AWDocument.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWDocument::AWDocument(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWDocument::AWDocument() {
    this->initializeModel();
}

AWDocument::~AWDocument() {}

void AWDocument::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_collection_id_isSet = false;
    m_collection_id_isValid = false;

    m_database_id_isSet = false;
    m_database_id_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_updated_at_isSet = false;
    m_updated_at_isValid = false;

    m_permissions_isSet = false;
    m_permissions_isValid = false;
	
	m_data_isSet = false;
	m_data_isValid = false;
}

void AWDocument::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWDocument::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("$id")]);
    m_id_isSet = !json[QString("$id")].isNull() && m_id_isValid;
	json.remove("$id");

    m_collection_id_isValid = ::OpenAPI::fromJsonValue(collection_id, json[QString("$collectionId")]);
    m_collection_id_isSet = !json[QString("$collectionId")].isNull() && m_collection_id_isValid;
	json.remove("$collectionId");

    m_database_id_isValid = ::OpenAPI::fromJsonValue(database_id, json[QString("$databaseId")]);
    m_database_id_isSet = !json[QString("$databaseId")].isNull() && m_database_id_isValid;
	json.remove("$databaseId");

    m_created_at_isValid = ::OpenAPI::fromJsonValue(created_at, json[QString("$createdAt")]);
    m_created_at_isSet = !json[QString("$createdAt")].isNull() && m_created_at_isValid;
	json.remove("$createdAt");

    m_updated_at_isValid = ::OpenAPI::fromJsonValue(updated_at, json[QString("$updatedAt")]);
    m_updated_at_isSet = !json[QString("$updatedAt")].isNull() && m_updated_at_isValid;
	json.remove("$updatedAt");

    m_permissions_isValid = ::OpenAPI::fromJsonValue(permissions, json[QString("$permissions")]);
    m_permissions_isSet = !json[QString("$permissions")].isNull() && m_permissions_isValid;
	json.remove("$permissions");
	
	data = json;
	m_data_isValid = true;
	m_data_isSet = true;
}

QString AWDocument::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWDocument::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("$id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_collection_id_isSet) {
        obj.insert(QString("$collectionId"), ::OpenAPI::toJsonValue(collection_id));
    }
    if (m_database_id_isSet) {
        obj.insert(QString("$databaseId"), ::OpenAPI::toJsonValue(database_id));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("$createdAt"), ::OpenAPI::toJsonValue(created_at));
    }
    if (m_updated_at_isSet) {
        obj.insert(QString("$updatedAt"), ::OpenAPI::toJsonValue(updated_at));
    }
    if (permissions.size() > 0) {
        obj.insert(QString("$permissions"), ::OpenAPI::toJsonValue(permissions));
    }
	if (!data.isEmpty()) {
		for (auto i = data.constBegin(); i != data.constEnd(); i++) {
			obj.insert(i.key(), ::OpenAPI::toJsonValue(i.value()));
		}
	}
    return obj;
}

QString AWDocument::getId() const {
    return id;
}
void AWDocument::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool AWDocument::is_id_Set() const{
    return m_id_isSet;
}

bool AWDocument::is_id_Valid() const{
    return m_id_isValid;
}

QString AWDocument::getCollectionId() const {
    return collection_id;
}
void AWDocument::setCollectionId(const QString &collection_id) {
    this->collection_id = collection_id;
    this->m_collection_id_isSet = true;
}

bool AWDocument::is_collection_id_Set() const{
    return m_collection_id_isSet;
}

bool AWDocument::is_collection_id_Valid() const{
    return m_collection_id_isValid;
}

QString AWDocument::getDatabaseId() const {
    return database_id;
}
void AWDocument::setDatabaseId(const QString &database_id) {
    this->database_id = database_id;
    this->m_database_id_isSet = true;
}

bool AWDocument::is_database_id_Set() const{
    return m_database_id_isSet;
}

bool AWDocument::is_database_id_Valid() const{
    return m_database_id_isValid;
}

QString AWDocument::getCreatedAt() const {
    return created_at;
}
void AWDocument::setCreatedAt(const QString &created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

bool AWDocument::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool AWDocument::is_created_at_Valid() const{
    return m_created_at_isValid;
}

QString AWDocument::getUpdatedAt() const {
    return updated_at;
}
void AWDocument::setUpdatedAt(const QString &updated_at) {
    this->updated_at = updated_at;
    this->m_updated_at_isSet = true;
}

bool AWDocument::is_updated_at_Set() const{
    return m_updated_at_isSet;
}

bool AWDocument::is_updated_at_Valid() const{
    return m_updated_at_isValid;
}

QList<QString> AWDocument::getPermissions() const {
    return permissions;
}
void AWDocument::setPermissions(const QList<QString> &permissions) {
    this->permissions = permissions;
    this->m_permissions_isSet = true;
}

bool AWDocument::is_permissions_Set() const{
    return m_permissions_isSet;
}

bool AWDocument::is_permissions_Valid() const{
	return m_permissions_isValid;
}

QJsonObject AWDocument::getData() const
{
	return data;
}

void AWDocument::setData(const QJsonObject &data)
{
	this->data = data;
	this->m_data_isSet = true;
}

bool AWDocument::is_data_Set() const
{
	return m_data_isSet;
}

bool AWDocument::is_data_Valid() const
{
	return m_data_isValid;
}

bool AWDocument::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_collection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_database_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_updated_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (permissions.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWDocument::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_collection_id_isValid && m_database_id_isValid && m_created_at_isValid && m_updated_at_isValid && m_permissions_isValid && true;
}

} // namespace OpenAPI
