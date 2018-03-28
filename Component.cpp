#include "Component.h"


Component::Component(int p_type)
{
    m_componentType = p_type;
}

Component::~Component()
{
    m_attributes.clear();
}

const QVariant Component::getAttribute(int p_key) const
{
    return m_attributes.value(p_key);
}

void Component::setAttributte(int p_key, const QVariant &t_value)
{
    m_attributes.insert(p_key, t_value);
}

const QHash<int, QVariant> Component::getAttributes() const
{
    return m_attributes;
}

int Component::getComponentType() const
{
    return m_componentType;
}
