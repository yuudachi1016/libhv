#ifndef YS_NETWORKLIBINTERFACE_H
#define YS_NETWORKLIBINTERFACE_H

#include <functional>

class NetworkLibInterface {
protected:
    NetworkLibInterface();

public:
    ~NetworkLibInterface();
    NetworkLibInterface(const NetworkLibInterface& reader) = delete;
    NetworkLibInterface& operator=(const NetworkLibInterface& reader) = delete;

public:
    static NetworkLibInterface& GetInstance();

    // 客户端创建Socket
    int NetworkCreateSocket(int __af, int __type, int __protocol);
    void SetNetworkCreateSocket(const std::function<int(int, int, int)>& func);

public:
    std::function<int(int, int, int)> m_creatSocketFunc = {};
};

#endif // YS_NETWORKLIBINTERFACE_H