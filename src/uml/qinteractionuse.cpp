/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qinteractionuse.h"
#include "qinteractionuse_p.h"

#include <QtUml/QProperty>
#include <QtUml/QInteraction>
#include <QtUml/QGate>
#include <QtUml/QValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QInteractionUsePrivate::QInteractionUsePrivate() :
    returnValue(0),
    refersTo(0),
    returnValueRecipient(0)
{
}

QInteractionUsePrivate::~QInteractionUsePrivate()
{
}

/*!
    \class QInteractionUse

    \inmodule QtUml

    \brief An interaction use refers to an interaction. The interaction use is a shorthand for copying the contents of the referenced interaction where the interaction use is. To be accurate the copying must take into account substituting parameters with arguments and connect the formal gates with the actual ones.
 */

QInteractionUse::QInteractionUse(QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(*new QInteractionUsePrivate, wrapper, parent)
{
    setPropertyData();
}

QInteractionUse::QInteractionUse(QInteractionUsePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QInteractionUse::~QInteractionUse()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInteractionUse
// ---------------------------------------------------------------

/*!
    The actual gates of the InteractionUse
 */
QSet<QGate *> QInteractionUse::actualGates() const
{
    // This is a read-write association end

    Q_D(const QInteractionUse);
    return d->actualGates;
}

void QInteractionUse::addActualGate(QGate *actualGate)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (!d->actualGates.contains(actualGate)) {
        d->actualGates.insert(actualGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(actualGate));
    }
}

void QInteractionUse::removeActualGate(QGate *actualGate)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (d->actualGates.contains(actualGate)) {
        d->actualGates.remove(actualGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(actualGate));
    }
}

/*!
    The value of the executed Interaction.
 */
QValueSpecification *QInteractionUse::returnValue() const
{
    // This is a read-write association end

    Q_D(const QInteractionUse);
    return d->returnValue;
}

void QInteractionUse::setReturnValue(QValueSpecification *returnValue)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (d->returnValue != returnValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->returnValue));

        d->returnValue = returnValue;

        // Adjust subsetted property(ies)
        if (returnValue) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(returnValue));
        }
    }
}

/*!
    Refers to the Interaction that defines its meaning
 */
QInteraction *QInteractionUse::refersTo() const
{
    // This is a read-write association end

    Q_D(const QInteractionUse);
    return d->refersTo;
}

void QInteractionUse::setRefersTo(QInteraction *refersTo)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (d->refersTo != refersTo) {
        d->refersTo = refersTo;
    }
}

/*!
    The actual arguments of the Interaction
 */
QList<QValueSpecification *> QInteractionUse::arguments() const
{
    // This is a read-write association end

    Q_D(const QInteractionUse);
    return d->arguments;
}

void QInteractionUse::addArgument(QValueSpecification *argument)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (!d->arguments.contains(argument)) {
        d->arguments.append(argument);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(argument));
    }
}

void QInteractionUse::removeArgument(QValueSpecification *argument)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (d->arguments.contains(argument)) {
        d->arguments.removeAll(argument);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(argument));
    }
}

/*!
    The recipient of the return value.
 */
QProperty *QInteractionUse::returnValueRecipient() const
{
    // This is a read-write association end

    Q_D(const QInteractionUse);
    return d->returnValueRecipient;
}

void QInteractionUse::setReturnValueRecipient(QProperty *returnValueRecipient)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (d->returnValueRecipient != returnValueRecipient) {
        d->returnValueRecipient = returnValueRecipient;
    }
}

void QInteractionUse::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The actual gates of the InteractionUse");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The value of the executed Interaction.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the Interaction that defines its meaning");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The actual arguments of the Interaction");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The recipient of the return value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QInteractionFragment::setPropertyData();
}

#include "moc_qinteractionuse.cpp"

QT_END_NAMESPACE_QTUML

