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
 * AWAccountUpdateRecoveryRequest.h
 *
 * 
 */

#ifndef AWACCOUNTUPDATERECOVERYREQUEST_H
#define AWACCOUNTUPDATERECOVERYREQUEST_H

#include <QJsonObject>

#include <QString>

#include "src/AWEnum.h"
#include "src/AWObject.h"

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWAccountUpdateRecoveryRequest : public AWObject {
public:
    AWAccountUpdateRecoveryRequest();
    AWAccountUpdateRecoveryRequest(QString json);
    ~AWAccountUpdateRecoveryRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getUserId() const;
    void setUserId(const QString &user_id);
    bool is_user_id_Set() const;
    bool is_user_id_Valid() const;

    QString getSecret() const;
    void setSecret(const QString &secret);
    bool is_secret_Set() const;
    bool is_secret_Valid() const;

    QString getPassword() const;
    void setPassword(const QString &password);
    bool is_password_Set() const;
    bool is_password_Valid() const;

    QString getPasswordAgain() const;
    void setPasswordAgain(const QString &password_again);
    bool is_password_again_Set() const;
    bool is_password_again_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString user_id;
    bool m_user_id_isSet;
    bool m_user_id_isValid;

    QString secret;
    bool m_secret_isSet;
    bool m_secret_isValid;

    QString password;
    bool m_password_isSet;
    bool m_password_isValid;

    QString password_again;
    bool m_password_again_isSet;
    bool m_password_again_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWAccountUpdateRecoveryRequest)

#endif // AWACCOUNTUPDATERECOVERYREQUEST_H
