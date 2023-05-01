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
 * AWAlgoArgon2.h
 *
 * AlgoArgon2
 */

#ifndef AWALGOARGON2_H
#define AWALGOARGON2_H

#include <QJsonObject>

#include <QString>

#include "src/AWEnum.h"
#include "src/AWObject.h"

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWAlgoArgon2 : public AWObject {
public:
    AWAlgoArgon2();
    AWAlgoArgon2(QString json);
    ~AWAlgoArgon2() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getMemoryCost() const;
    void setMemoryCost(const qint32 &memory_cost);
    bool is_memory_cost_Set() const;
    bool is_memory_cost_Valid() const;

    qint32 getTimeCost() const;
    void setTimeCost(const qint32 &time_cost);
    bool is_time_cost_Set() const;
    bool is_time_cost_Valid() const;

    qint32 getThreads() const;
    void setThreads(const qint32 &threads);
    bool is_threads_Set() const;
    bool is_threads_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 memory_cost;
    bool m_memory_cost_isSet;
    bool m_memory_cost_isValid;

    qint32 time_cost;
    bool m_time_cost_isSet;
    bool m_time_cost_isValid;

    qint32 threads;
    bool m_threads_isSet;
    bool m_threads_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWAlgoArgon2)

#endif // AWALGOARGON2_H
