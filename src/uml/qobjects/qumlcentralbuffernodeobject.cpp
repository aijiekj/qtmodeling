/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlcentralbuffernodeobject_p.h"

#include <QtUml/QUmlCentralBufferNode>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlCentralBufferNodeObject::QUmlCentralBufferNodeObject(QUmlCentralBufferNode *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlCentralBufferNodeObject::~QUmlCentralBufferNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCentralBufferNodeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCentralBufferNodeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCentralBufferNodeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCentralBufferNodeObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlCentralBufferNodeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->name();
}

QObject *QUmlCentralBufferNodeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->nameExpression()->asQObject();
}

QObject *QUmlCentralBufferNodeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->namespace_()->asQObject();
}

QString QUmlCentralBufferNodeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCentralBufferNodeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCentralBufferNodeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCentralBufferNodeObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCentralBufferNodeObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlCentralBufferNodeObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlCentralBufferNodeObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCentralBufferNodeObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCentralBufferNodeObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCentralBufferNodeObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlCentralBufferNodeObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCentralBufferNodeObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCentralBufferNodeObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlCentralBufferNodeObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlCentralBufferNodeObject::inStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->inStates())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCentralBufferNodeObject::isControlType() const
{
    return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlCentralBufferNodeObject::ordering() const
{
    return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->ordering();
}

QObject *QUmlCentralBufferNodeObject::selection() const
{
    if (!qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->selection())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->selection()->asQObject();
}

QObject *QUmlCentralBufferNodeObject::upperBound() const
{
    if (!qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->upperBound())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->upperBound()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCentralBufferNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCentralBufferNodeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCentralBufferNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCentralBufferNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCentralBufferNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCentralBufferNodeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlCentralBufferNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCentralBufferNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCentralBufferNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCentralBufferNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCentralBufferNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCentralBufferNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCentralBufferNodeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCentralBufferNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCentralBufferNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCentralBufferNodeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setName(name);
}

void QUmlCentralBufferNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCentralBufferNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCentralBufferNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlCentralBufferNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCentralBufferNodeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setLeaf(isLeaf);
}

void QUmlCentralBufferNodeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlCentralBufferNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCentralBufferNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCentralBufferNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCentralBufferNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlCentralBufferNodeObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlCentralBufferNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCentralBufferNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCentralBufferNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCentralBufferNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCentralBufferNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCentralBufferNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCentralBufferNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlCentralBufferNodeObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCentralBufferNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCentralBufferNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCentralBufferNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCentralBufferNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlCentralBufferNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlCentralBufferNodeObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlCentralBufferNodeObject::addInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->addInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlCentralBufferNodeObject::removeInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->removeInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlCentralBufferNodeObject::setControlType(bool isControlType)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setControlType(isControlType);
}

void QUmlCentralBufferNodeObject::unsetControlType()
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("controlType"));
}

void QUmlCentralBufferNodeObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setOrdering(ordering);
}

void QUmlCentralBufferNodeObject::unsetOrdering()
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordering"));
}

void QUmlCentralBufferNodeObject::setSelection(QObject *selection)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setSelection(qmodelingobjectproperty_cast<QUmlBehavior *>(selection));
}

void QUmlCentralBufferNodeObject::setUpperBound(QObject *upperBound)
{
    qmodelingobjectproperty_cast<QUmlCentralBufferNode *>(this)->setUpperBound(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperBound));
}

QT_END_NAMESPACE
