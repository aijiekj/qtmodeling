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

#include "qcomponentrealization.h"
#include "qcomponentrealization_p.h"

#include <QtUml/QComponent>
#include <QtUml/QClassifier>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QComponentRealizationPrivate::QComponentRealizationPrivate() :
    abstraction(0)
{
}

QComponentRealizationPrivate::~QComponentRealizationPrivate()
{
}

/*!
    \class QComponentRealization

    \inmodule QtUml

    \brief The realization concept is specialized to (optionally) define the classifiers that realize the contract offered by a component in terms of its provided and required interfaces. The component forms an abstraction from these various classifiers.
 */

QComponentRealization::QComponentRealization(QWrappedObject *wrapper, QWrappedObject *parent) :
    QRealization(*new QComponentRealizationPrivate, wrapper, parent)
{
    setPropertyData();
}

QComponentRealization::QComponentRealization(QComponentRealizationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QRealization(dd, wrapper, parent)
{
    setPropertyData();
}

QComponentRealization::~QComponentRealization()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QComponentRealization
// ---------------------------------------------------------------

/*!
    The Component that owns this ComponentRealization and which is implemented by its realizing classifiers.
 */
QComponent *QComponentRealization::abstraction() const
{
    // This is a read-write association end

    Q_D(const QComponentRealization);
    return d->abstraction;
}

void QComponentRealization::setAbstraction(QComponent *abstraction)
{
    // This is a read-write association end

    Q_D(QComponentRealization);
    if (d->abstraction != abstraction) {
        // Adjust opposite property
        if (d->abstraction)
            d->abstraction->removeRealization(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDependency *>(this))->removeSupplier(qwrappedobject_cast<QNamedElement *>(d->abstraction));

        d->abstraction = abstraction;

        // Adjust subsetted property(ies)
        if (abstraction) {
            (qwrappedobject_cast<QDependency *>(this))->addSupplier(qwrappedobject_cast<QNamedElement *>(abstraction));
        }
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(abstraction));

        // Adjust opposite property
        if (abstraction)
            abstraction->addRealization(this);
    }
}

/*!
    The classifiers that are involved in the implementation of the Component that owns this Realization.
 */
QSet<QClassifier *> QComponentRealization::realizingClassifiers() const
{
    // This is a read-write association end

    Q_D(const QComponentRealization);
    return d->realizingClassifiers;
}

void QComponentRealization::addRealizingClassifier(QClassifier *realizingClassifier)
{
    // This is a read-write association end

    Q_D(QComponentRealization);
    if (!d->realizingClassifiers.contains(realizingClassifier)) {
        d->realizingClassifiers.insert(realizingClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDependency *>(this))->addClient(qwrappedobject_cast<QNamedElement *>(realizingClassifier));
    }
}

void QComponentRealization::removeRealizingClassifier(QClassifier *realizingClassifier)
{
    // This is a read-write association end

    Q_D(QComponentRealization);
    if (d->realizingClassifiers.contains(realizingClassifier)) {
        d->realizingClassifiers.remove(realizingClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDependency *>(this))->removeClient(qwrappedobject_cast<QNamedElement *>(realizingClassifier));
    }
}

void QComponentRealization::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Component that owns this ComponentRealization and which is implemented by its realizing classifiers.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QDependency::suppliers QElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QComponent::realization");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifiers that are involved in the implementation of the Component that owns this Realization.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QDependency::clients");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QRealization::setPropertyData();
}

// Overriden methods for subsetted properties

void QComponentRealization::addSupplier(QWrappedObjectPointer<QComponent> abstraction)
{
    setAbstraction(abstraction);
}

void QComponentRealization::removeSupplier(QWrappedObjectPointer<QComponent> abstraction)
{
    Q_UNUSED(abstraction);
    setAbstraction(0);
}

void QComponentRealization::addClient(QWrappedObjectPointer<QClassifier> realizingClassifier)
{
    addRealizingClassifier(realizingClassifier);
}

void QComponentRealization::removeClient(QWrappedObjectPointer<QClassifier> realizingClassifier)
{
    removeRealizingClassifier(realizingClassifier);
}

#include "moc_qcomponentrealization.cpp"

QT_END_NAMESPACE_QTUML

