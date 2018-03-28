#include "Event.h"

Event::Event(int p_eventType)
{
    m_eventType = p_eventType;
}

int Event::getEventType() const
{
    return m_eventType;
}

