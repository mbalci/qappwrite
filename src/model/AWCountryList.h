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
 * AWCountryList.h
 *
 * Countries List
 */

#ifndef AWCOUNTRYLIST_H
#define AWCOUNTRYLIST_H

#include <QJsonObject>

#include "src/model/AWCountry.h"
#include <QList>

#include "src/AWEnum.h"
#include "src/AWObject.h"

#include "src/AWGlobalExport.h"

namespace OpenAPI {
class AWCountry;

class APPWRITE_EXPORT AWCountryList : public AWObject {
public:
    AWCountryList();
    AWCountryList(QString json);
    ~AWCountryList() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getTotal() const;
    void setTotal(const qint32 &total);
    bool is_total_Set() const;
    bool is_total_Valid() const;

    QList<AWCountry> getCountries() const;
    void setCountries(const QList<AWCountry> &countries);
    bool is_countries_Set() const;
    bool is_countries_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 total;
    bool m_total_isSet;
    bool m_total_isValid;

    QList<AWCountry> countries;
    bool m_countries_isSet;
    bool m_countries_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWCountryList)

#endif // AWCOUNTRYLIST_H
