#ifndef EVENT_H
#define EVENT_H

#include "entitycomponent_global.h"

class ENTITYCOMPONENTSHARED_EXPORT Event
{
public:
    Event(int p_eventType);

    int getEventType() const;
private:
    int m_eventType;
};

#endif // EVENT_H
