#ifndef COMPONENT_H
#define COMPONENT_H

#include <QHash>
#include <QVariant>
#include "entitycomponent_global.h"


class ENTITYCOMPONENTSHARED_EXPORT Component
{
Q_DISABLE_COPY(Component)

public:
    Component(int p_type);
    virtual ~Component();


    const QVariant getAttribute(int p_key) const;
    void setAttributte( int p_key, const QVariant& t_value);
    const QHash<int,QVariant>getAttributes() const;
    int getComponentType() const;

protected:
    QHash<int,QVariant>m_attributes;
    int m_componentType;

};

#endif // COMPONENT_H
