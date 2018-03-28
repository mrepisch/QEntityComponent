#ifndef SYSTEMCONTAINER_H
#define SYSTEMCONTAINER_H


#include "System.h"
#include "Event.h"
#include "entitycomponent_global.h"


class ENTITYCOMPONENTSHARED_EXPORT SystemContainer
{
public:
    SystemContainer();
    virtual ~SystemContainer();

    void update();

    void sendEvent( Event* p_event);
};

#endif // SYSTEMCONTAINER_H
