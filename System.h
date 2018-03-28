#ifndef SYSTEM_H
#define SYSTEM_H


#include "entitycomponent_global.h"
#include "Event.h"

class ENTITYCOMPONENTSHARED_EXPORT System
{
public:
    System(int p_systemType);
    virtual void update() = 0;
    virtual void handleEvent( Event* p_event) = 0;
    int getSystemType() const;

protected:
    int m_systemType;
};

#endif // SYSTEM_H
