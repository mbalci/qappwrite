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

#include "AWDatabasesApi.h"
#include "src/AWServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

AWDatabasesApi::AWDatabasesApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

AWDatabasesApi::~AWDatabasesApi() {
}

void AWDatabasesApi::initializeServerConfigs() {
    //Default server
    QList<AWServerConfiguration> defaultConf = QList<AWServerConfiguration>();
    //varying endpoint server
    defaultConf.append(AWServerConfiguration(
    QUrl("https://HOSTNAME/v1"),
    "No description provided",
    QMap<QString, AWServerVariable>()));
    _serverConfigs.insert("databasesCreateDocument", defaultConf);
    _serverIndices.insert("databasesCreateDocument", 0);
    _serverConfigs.insert("databasesDeleteDocument", defaultConf);
    _serverIndices.insert("databasesDeleteDocument", 0);
    _serverConfigs.insert("databasesGetDocument", defaultConf);
    _serverIndices.insert("databasesGetDocument", 0);
    _serverConfigs.insert("databasesListDocuments", defaultConf);
    _serverIndices.insert("databasesListDocuments", 0);
    _serverConfigs.insert("databasesUpdateDocument", defaultConf);
    _serverIndices.insert("databasesUpdateDocument", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int AWDatabasesApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void AWDatabasesApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void AWDatabasesApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void AWDatabasesApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void AWDatabasesApi::setUsername(const QString &username) {
    _username = username;
}

void AWDatabasesApi::setPassword(const QString &password) {
    _password = password;
}


void AWDatabasesApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void AWDatabasesApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void AWDatabasesApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;
}

/**
    * Appends a new ServerConfiguration to the config map for a specific operation.
    * @param operation The id to the target operation.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    * returns the index of the new server config on success and -1 if the operation is not found
    */
int AWDatabasesApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, AWServerVariable> &variables) {
    if (_serverConfigs.contains(operation)) {
        _serverConfigs[operation].append(AWServerConfiguration(
                    url,
                    description,
                    variables));
        return _serverConfigs[operation].size()-1;
    } else {
        return -1;
    }
}

/**
    * Appends a new ServerConfiguration to the config map for a all operations and sets the index to that server.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void AWDatabasesApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, AWServerVariable> &variables) {
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    for (auto keyIt = _serverIndices.keyBegin(); keyIt != _serverIndices.keyEnd(); keyIt++) {
        setServerIndex(*keyIt, addServerConfiguration(*keyIt, url, description, variables));
    }
#else
    for (auto &e : _serverIndices.keys()) {
        setServerIndex(e, addServerConfiguration(e, url, description, variables));
    }
#endif
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void AWDatabasesApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, AWServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void AWDatabasesApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void AWDatabasesApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void AWDatabasesApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void AWDatabasesApi::abortRequests() {
    emit abortRequestsSignal();
}

QString AWDatabasesApi::getParamStylePrefix(const QString &style) {
    if (style == "matrix") {
        return ";";
    } else if (style == "label") {
        return ".";
    } else if (style == "form") {
        return "&";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "&";
    } else if (style == "pipeDelimited") {
        return "&";
    } else {
        return "none";
    }
}

QString AWDatabasesApi::getParamStyleSuffix(const QString &style) {
    if (style == "matrix") {
        return "=";
    } else if (style == "label") {
        return "";
    } else if (style == "form") {
        return "=";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "=";
    } else if (style == "pipeDelimited") {
        return "=";
    } else {
        return "none";
    }
}

QString AWDatabasesApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

    if (style == "matrix") {
        return (isExplode) ? ";" + name + "=" : ",";

    } else if (style == "label") {
        return (isExplode) ? "." : ",";

    } else if (style == "form") {
        return (isExplode) ? "&" + name + "=" : ",";

    } else if (style == "simple") {
        return ",";
    } else if (style == "spaceDelimited") {
        return (isExplode) ? "&" + name + "=" : " ";

    } else if (style == "pipeDelimited") {
        return (isExplode) ? "&" + name + "=" : "|";

    } else if (style == "deepObject") {
        return (isExplode) ? "&" : "none";

    } else {
        return "none";
    }
}

void AWDatabasesApi::databasesCreateDocument(const QString &database_id, const QString &collection_id, const ::OpenAPI::OptionalParam<AWDatabasesCreateDocumentRequest> &aw_databases_create_document_request) {
    QString fullPath = QString(_serverConfigs["databasesCreateDocument"][_serverIndices.value("databasesCreateDocument")].URL()+"/databases/{databaseId}/collections/{collectionId}/documents");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    
    {
        QString database_idPathParam("{");
        database_idPathParam.append("databaseId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "databaseId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"databaseId"+pathSuffix : pathPrefix;
        fullPath.replace(database_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(database_id)));
    }
    
    {
        QString collection_idPathParam("{");
        collection_idPathParam.append("collectionId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "collectionId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"collectionId"+pathSuffix : pathPrefix;
        fullPath.replace(collection_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(collection_id)));
    }
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "POST");

    if (aw_databases_create_document_request.hasValue()){

        
        QByteArray output = aw_databases_create_document_request.value().asJson().toUtf8();
        input.request_body.append(output);
    }
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWDatabasesApi::databasesCreateDocumentCallback);
    connect(this, &AWDatabasesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWDatabasesApi::databasesCreateDocumentCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    AWDocument output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit databasesCreateDocumentSignal(output);
        emit databasesCreateDocumentSignalFull(worker, output);
    } else {
        emit databasesCreateDocumentSignalE(output, error_type, error_str);
        emit databasesCreateDocumentSignalEFull(worker, error_type, error_str);
    }
}

void AWDatabasesApi::databasesDeleteDocument(const QString &database_id, const QString &collection_id, const QString &document_id) {
    QString fullPath = QString(_serverConfigs["databasesDeleteDocument"][_serverIndices.value("databasesDeleteDocument")].URL()+"/databases/{databaseId}/collections/{collectionId}/documents/{documentId}");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    
    {
        QString database_idPathParam("{");
        database_idPathParam.append("databaseId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "databaseId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"databaseId"+pathSuffix : pathPrefix;
        fullPath.replace(database_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(database_id)));
    }
    
    {
        QString collection_idPathParam("{");
        collection_idPathParam.append("collectionId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "collectionId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"collectionId"+pathSuffix : pathPrefix;
        fullPath.replace(collection_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(collection_id)));
    }
    
    {
        QString document_idPathParam("{");
        document_idPathParam.append("documentId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "documentId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"documentId"+pathSuffix : pathPrefix;
        fullPath.replace(document_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(document_id)));
    }
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "DELETE");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWDatabasesApi::databasesDeleteDocumentCallback);
    connect(this, &AWDatabasesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWDatabasesApi::databasesDeleteDocumentCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit databasesDeleteDocumentSignal();
        emit databasesDeleteDocumentSignalFull(worker);
    } else {
        emit databasesDeleteDocumentSignalE(error_type, error_str);
        emit databasesDeleteDocumentSignalEFull(worker, error_type, error_str);
    }
}

void AWDatabasesApi::databasesGetDocument(const QString &database_id, const QString &collection_id, const QString &document_id, const ::OpenAPI::OptionalParam<QList<QString>> &queries) {
    QString fullPath = QString(_serverConfigs["databasesGetDocument"][_serverIndices.value("databasesGetDocument")].URL()+"/databases/{databaseId}/collections/{collectionId}/documents/{documentId}");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    
    {
        QString database_idPathParam("{");
        database_idPathParam.append("databaseId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "databaseId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"databaseId"+pathSuffix : pathPrefix;
        fullPath.replace(database_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(database_id)));
    }
    
    {
        QString collection_idPathParam("{");
        collection_idPathParam.append("collectionId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "collectionId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"collectionId"+pathSuffix : pathPrefix;
        fullPath.replace(collection_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(collection_id)));
    }
    
    {
        QString document_idPathParam("{");
        document_idPathParam.append("documentId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "documentId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"documentId"+pathSuffix : pathPrefix;
        fullPath.replace(document_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(document_id)));
    }
    QString queryPrefix, querySuffix, queryDelimiter, queryStyle;
    if (queries.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "queries", true);
        if (queries.value().size() > 0) {
            if (QString("multi").indexOf("multi") == 0) {
                for (QString t : queries.value()) {
                    if (fullPath.indexOf("?") > 0)
                        fullPath.append(queryPrefix);
                    else
                        fullPath.append("?");
                    fullPath.append("queries=").append(::OpenAPI::toStringValue(t));
                }
            } else if (QString("multi").indexOf("ssv") == 0) {
                if (fullPath.indexOf("?") > 0)
                    fullPath.append("&");
                else
                    fullPath.append("?").append(queryPrefix).append("queries").append(querySuffix);
                qint32 count = 0;
                for (QString t : queries.value()) {
                    if (count > 0) {
                        fullPath.append((true)? queryDelimiter : QUrl::toPercentEncoding(queryDelimiter));
                    }
                    fullPath.append(::OpenAPI::toStringValue(t));
                    count++;
                }
            } else if (QString("multi").indexOf("tsv") == 0) {
                if (fullPath.indexOf("?") > 0)
                    fullPath.append("&");
                else
                    fullPath.append("?").append(queryPrefix).append("queries").append(querySuffix);
                qint32 count = 0;
                for (QString t : queries.value()) {
                    if (count > 0) {
                        fullPath.append("\t");
                    }
                    fullPath.append(::OpenAPI::toStringValue(t));
                    count++;
                }
            } else if (QString("multi").indexOf("csv") == 0) {
                if (fullPath.indexOf("?") > 0)
                    fullPath.append("&");
                else
                    fullPath.append("?").append(queryPrefix).append("queries").append(querySuffix);
                qint32 count = 0;
                for (QString t : queries.value()) {
                    if (count > 0) {
                        fullPath.append(queryDelimiter);
                    }
                    fullPath.append(::OpenAPI::toStringValue(t));
                    count++;
                }
            } else if (QString("multi").indexOf("pipes") == 0) {
                if (fullPath.indexOf("?") > 0)
                    fullPath.append("&");
                else
                    fullPath.append("?").append(queryPrefix).append("queries").append(querySuffix);
                qint32 count = 0;
                for (QString t : queries.value()) {
                    if (count > 0) {
                        fullPath.append(queryDelimiter);
                    }
                    fullPath.append(::OpenAPI::toStringValue(t));
                    count++;
                }
            } else if (QString("multi").indexOf("deepObject") == 0) {
                if (fullPath.indexOf("?") > 0)
                    fullPath.append("&");
                else
                    fullPath.append("?").append(queryPrefix).append("queries").append(querySuffix);
                qint32 count = 0;
                for (QString t : queries.value()) {
                    if (count > 0) {
                        fullPath.append(queryDelimiter);
                    }
                    fullPath.append(::OpenAPI::toStringValue(t));
                    count++;
                }
            }
        }
    }
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWDatabasesApi::databasesGetDocumentCallback);
    connect(this, &AWDatabasesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWDatabasesApi::databasesGetDocumentCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    AWDocument output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit databasesGetDocumentSignal(output);
        emit databasesGetDocumentSignalFull(worker, output);
    } else {
        emit databasesGetDocumentSignalE(output, error_type, error_str);
        emit databasesGetDocumentSignalEFull(worker, error_type, error_str);
    }
}

void AWDatabasesApi::databasesListDocuments(const QString &database_id, const QString &collection_id, const ::OpenAPI::OptionalParam<QList<QString>> &queries) {
    QString fullPath = QString(_serverConfigs["databasesListDocuments"][_serverIndices.value("databasesListDocuments")].URL()+"/databases/{databaseId}/collections/{collectionId}/documents");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    
    {
        QString database_idPathParam("{");
        database_idPathParam.append("databaseId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "databaseId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"databaseId"+pathSuffix : pathPrefix;
        fullPath.replace(database_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(database_id)));
    }
    
    {
        QString collection_idPathParam("{");
        collection_idPathParam.append("collectionId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "collectionId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"collectionId"+pathSuffix : pathPrefix;
        fullPath.replace(collection_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(collection_id)));
    }
    QString queryPrefix, querySuffix, queryDelimiter, queryStyle;
    if (queries.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "queries", true);
        if (queries.value().size() > 0) {
            if (QString("multi").indexOf("multi") == 0) {
                for (QString t : queries.value()) {
                    if (fullPath.indexOf("?") > 0)
                        fullPath.append(queryPrefix);
                    else
                        fullPath.append("?");
                    fullPath.append("queries=").append(::OpenAPI::toStringValue(t));
                }
            } else if (QString("multi").indexOf("ssv") == 0) {
                if (fullPath.indexOf("?") > 0)
                    fullPath.append("&");
                else
                    fullPath.append("?").append(queryPrefix).append("queries").append(querySuffix);
                qint32 count = 0;
                for (QString t : queries.value()) {
                    if (count > 0) {
                        fullPath.append((true)? queryDelimiter : QUrl::toPercentEncoding(queryDelimiter));
                    }
                    fullPath.append(::OpenAPI::toStringValue(t));
                    count++;
                }
            } else if (QString("multi").indexOf("tsv") == 0) {
                if (fullPath.indexOf("?") > 0)
                    fullPath.append("&");
                else
                    fullPath.append("?").append(queryPrefix).append("queries").append(querySuffix);
                qint32 count = 0;
                for (QString t : queries.value()) {
                    if (count > 0) {
                        fullPath.append("\t");
                    }
                    fullPath.append(::OpenAPI::toStringValue(t));
                    count++;
                }
            } else if (QString("multi").indexOf("csv") == 0) {
                if (fullPath.indexOf("?") > 0)
                    fullPath.append("&");
                else
                    fullPath.append("?").append(queryPrefix).append("queries").append(querySuffix);
                qint32 count = 0;
                for (QString t : queries.value()) {
                    if (count > 0) {
                        fullPath.append(queryDelimiter);
                    }
                    fullPath.append(::OpenAPI::toStringValue(t));
                    count++;
                }
            } else if (QString("multi").indexOf("pipes") == 0) {
                if (fullPath.indexOf("?") > 0)
                    fullPath.append("&");
                else
                    fullPath.append("?").append(queryPrefix).append("queries").append(querySuffix);
                qint32 count = 0;
                for (QString t : queries.value()) {
                    if (count > 0) {
                        fullPath.append(queryDelimiter);
                    }
                    fullPath.append(::OpenAPI::toStringValue(t));
                    count++;
                }
            } else if (QString("multi").indexOf("deepObject") == 0) {
                if (fullPath.indexOf("?") > 0)
                    fullPath.append("&");
                else
                    fullPath.append("?").append(queryPrefix).append("queries").append(querySuffix);
                qint32 count = 0;
                for (QString t : queries.value()) {
                    if (count > 0) {
                        fullPath.append(queryDelimiter);
                    }
                    fullPath.append(::OpenAPI::toStringValue(t));
                    count++;
                }
            }
        }
    }
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWDatabasesApi::databasesListDocumentsCallback);
    connect(this, &AWDatabasesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWDatabasesApi::databasesListDocumentsCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    AWDocumentList output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit databasesListDocumentsSignal(output);
        emit databasesListDocumentsSignalFull(worker, output);
    } else {
        emit databasesListDocumentsSignalE(output, error_type, error_str);
        emit databasesListDocumentsSignalEFull(worker, error_type, error_str);
    }
}

void AWDatabasesApi::databasesUpdateDocument(const QString &database_id, const QString &collection_id, const QString &document_id, const ::OpenAPI::OptionalParam<AWDatabasesUpdateDocumentRequest> &aw_databases_update_document_request) {
    QString fullPath = QString(_serverConfigs["databasesUpdateDocument"][_serverIndices.value("databasesUpdateDocument")].URL()+"/databases/{databaseId}/collections/{collectionId}/documents/{documentId}");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    
    {
        QString database_idPathParam("{");
        database_idPathParam.append("databaseId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "databaseId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"databaseId"+pathSuffix : pathPrefix;
        fullPath.replace(database_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(database_id)));
    }
    
    {
        QString collection_idPathParam("{");
        collection_idPathParam.append("collectionId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "collectionId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"collectionId"+pathSuffix : pathPrefix;
        fullPath.replace(collection_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(collection_id)));
    }
    
    {
        QString document_idPathParam("{");
        document_idPathParam.append("documentId").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "documentId", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"documentId"+pathSuffix : pathPrefix;
        fullPath.replace(document_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(document_id)));
    }
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "PATCH");

    if (aw_databases_update_document_request.hasValue()){

        
        QByteArray output = aw_databases_update_document_request.value().asJson().toUtf8();
        input.request_body.append(output);
    }
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWDatabasesApi::databasesUpdateDocumentCallback);
    connect(this, &AWDatabasesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWDatabasesApi::databasesUpdateDocumentCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    AWDocument output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit databasesUpdateDocumentSignal(output);
        emit databasesUpdateDocumentSignalFull(worker, output);
    } else {
        emit databasesUpdateDocumentSignalE(output, error_type, error_str);
        emit databasesUpdateDocumentSignalEFull(worker, error_type, error_str);
    }
}

void AWDatabasesApi::tokenAvailable(){

    oauthToken token;
    switch (_OauthMethod) {
    case 1: //implicit flow
        token = _implicitFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _implicitFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 2: //authorization flow
        token = _authFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _authFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 3: //client credentials flow
        token = _credentialFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 4: //resource owner password flow
        token = _passwordFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    default:
        qDebug() << "No Oauth method set!";
        break;
    }
}
} // namespace OpenAPI
