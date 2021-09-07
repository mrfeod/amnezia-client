#ifndef SERVER_LIST_LOGIC_H
#define SERVER_LIST_LOGIC_H

#include "PageLogicBase.h"
#include "../serversmodel.h"

class UiLogic;

class ServerListLogic : public PageLogicBase
{
    Q_OBJECT

public:
    Q_INVOKABLE void updateServersListPage();

    Q_PROPERTY(QObject* serverListModel READ getServerListModel CONSTANT)

    Q_INVOKABLE void onServerListPushbuttonDefaultClicked(int index);
    Q_INVOKABLE void onServerListPushbuttonSettingsClicked(int index);

public:
    explicit ServerListLogic(UiLogic *uiLogic, QObject *parent = nullptr);
    ~ServerListLogic() = default;

    QObject* getServerListModel() const;


signals:


private:


private slots:


private:
    ServersModel* m_serverListModel;

};
#endif // SERVER_LIST_LOGIC_H
