#include "Entity.h"

Entity::Entity()
{
    m_uuid = QUuid::createUuid();
}

void Entity::addComponent( Component* p_component)
{
    if( p_component != NULL)
    {
        m_components.insert(p_component->getComponentType(), p_component);
    }
}

bool Entity::hasComponent(int p_componentType)
{
    return m_components.contains(p_componentType);
}

Component *Entity::getComponent(int p_componentType)
{
    Component* r_comp = NULL;
    if( hasComponent(p_componentType))
    {
        r_comp = m_components.value(p_componentType);
    }
    return r_comp;
}

