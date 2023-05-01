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

/*
 * AWTeamsUpdatePrefsRequest.h
 *
 * 
 */

#ifndef AWTEAMSUPDATEPREFSREQUEST_H
#define AWTEAMSUPDATEPREFSREQUEST_H

#include <QJsonObject>

#include "src/AWObject.h"

#include "src/AWEnum.h"
#include "src/AWObject.h"

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWTeamsUpdatePrefsRequest : public AWObject {
public:
    AWTeamsUpdatePrefsRequest();
    AWTeamsUpdatePrefsRequest(QString json);
    ~AWTeamsUpdatePrefsRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    AWObject getPrefs() const;
    void setPrefs(const AWObject &prefs);
    bool is_prefs_Set() const;
    bool is_prefs_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    AWObject prefs;
    bool m_prefs_isSet;
    bool m_prefs_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWTeamsUpdatePrefsRequest)

#endif // AWTEAMSUPDATEPREFSREQUEST_H
