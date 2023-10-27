#include "NetworkLibInterface.h"

NetworkLibInterface::NetworkLibInterface() {
    m_creatSocketFunc = {};
}

NetworkLibInterface::~NetworkLibInterface() {
    m_creatSocketFunc = {};
}

NetworkLibInterface& NetworkLibInterface::GetInstance() {
    static NetworkLibInterface instance;
    return instance;
}

int NetworkLibInterface::NetworkCreateSocket(int __af, int __type, int __protocol) {
    if (m_creatSocketFunc)
        return m_creatSocketFunc(__af, __type, __protocol);
    else
        return -1;
}
void NetworkLibInterface::SetNetworkCreateSocket(const std::function<int(int, int, int)>& func) {
    m_creatSocketFunc = func;
}