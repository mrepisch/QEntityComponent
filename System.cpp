#include "System.h"


System::System(int p_systemType)
{
    m_systemType = p_systemType;
}

int System::getSystemType() const
{
    return m_systemType;
}

