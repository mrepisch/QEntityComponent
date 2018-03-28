#ifndef ENTITY_H
#define ENTITY_H

#include <QHash>
#include <QUuid>
#include "entitycomponent_global.h"
#include "Component.h"


class ENTITYCOMPONENTSHARED_EXPORT Entity
{
public:
    Entity();

    void addComponent(Component* p_component);
    bool hasComponent( int p_componentType);
    Component* getComponent( int p_componentType);

protected:
    QHash<int, Component* >m_components;

private:
    QUuid m_uuid;
};

#endif // ENTITY_H
