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
 * AWCurrency.h
 *
 * Currency
 */

#ifndef AWCURRENCY_H
#define AWCURRENCY_H

#include <QJsonObject>

#include <QString>

#include "src/AWEnum.h"
#include "src/AWObject.h"

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWCurrency : public AWObject {
public:
    AWCurrency();
    AWCurrency(QString json);
    ~AWCurrency() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSymbol() const;
    void setSymbol(const QString &symbol);
    bool is_symbol_Set() const;
    bool is_symbol_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getSymbolNative() const;
    void setSymbolNative(const QString &symbol_native);
    bool is_symbol_native_Set() const;
    bool is_symbol_native_Valid() const;

    qint32 getDecimalDigits() const;
    void setDecimalDigits(const qint32 &decimal_digits);
    bool is_decimal_digits_Set() const;
    bool is_decimal_digits_Valid() const;

    double getRounding() const;
    void setRounding(const double &rounding);
    bool is_rounding_Set() const;
    bool is_rounding_Valid() const;

    QString getCode() const;
    void setCode(const QString &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    QString getNamePlural() const;
    void setNamePlural(const QString &name_plural);
    bool is_name_plural_Set() const;
    bool is_name_plural_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString symbol;
    bool m_symbol_isSet;
    bool m_symbol_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString symbol_native;
    bool m_symbol_native_isSet;
    bool m_symbol_native_isValid;

    qint32 decimal_digits;
    bool m_decimal_digits_isSet;
    bool m_decimal_digits_isValid;

    double rounding;
    bool m_rounding_isSet;
    bool m_rounding_isValid;

    QString code;
    bool m_code_isSet;
    bool m_code_isValid;

    QString name_plural;
    bool m_name_plural_isSet;
    bool m_name_plural_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWCurrency)

#endif // AWCURRENCY_H
