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
#include "qumlactivitygroup.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlActivityGroup

    \inmodule QtUml

    \brief ActivityGroup is an abstract class for defining sets of nodes and edges in an activity.
 */

QUmlActivityGroup::QUmlActivityGroup() :
    _inActivity(0),
    _superGroup(0)
{
    d_ptr->object.setProperty("containedEdge", QVariant::fromValue(&_containedEdge));
    d_ptr->object.setProperty("containedNode", QVariant::fromValue(&_containedNode));
    d_ptr->object.setProperty("inActivity", QVariant::fromValue((QUmlActivity *)(0)));
    d_ptr->object.setProperty("subgroup", QVariant::fromValue(&_subgroup));
    d_ptr->object.setProperty("superGroup", QVariant::fromValue((QUmlActivityGroup *)(0)));
}

// OWNED ATTRIBUTES

/*!
    Edges immediately contained in the group.
 */
const QSet<QUmlActivityEdge *> QUmlActivityGroup::containedEdge() const
{
    // This is a read-only derived union association end

    return _containedEdge;
}

void QUmlActivityGroup::addContainedEdge(QUmlActivityEdge *containedEdge)
{
    // This is a read-only derived union association end

    if (!_containedEdge.contains(containedEdge)) {
        _containedEdge.insert(containedEdge);

        // Adjust opposite properties
        if (containedEdge) {
            containedEdge->addInGroup(this);
        }
    }
}

void QUmlActivityGroup::removeContainedEdge(QUmlActivityEdge *containedEdge)
{
    // This is a read-only derived union association end

    if (_containedEdge.contains(containedEdge)) {
        _containedEdge.remove(containedEdge);

        // Adjust opposite properties
        if (containedEdge) {
            containedEdge->removeInGroup(this);
        }
    }
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QUmlActivityNode *> QUmlActivityGroup::containedNode() const
{
    // This is a read-only derived union association end

    return _containedNode;
}

void QUmlActivityGroup::addContainedNode(QUmlActivityNode *containedNode)
{
    // This is a read-only derived union association end

    if (!_containedNode.contains(containedNode)) {
        _containedNode.insert(containedNode);

        // Adjust opposite properties
        if (containedNode) {
            containedNode->addInGroup(this);
        }
    }
}

void QUmlActivityGroup::removeContainedNode(QUmlActivityNode *containedNode)
{
    // This is a read-only derived union association end

    if (_containedNode.contains(containedNode)) {
        _containedNode.remove(containedNode);

        // Adjust opposite properties
        if (containedNode) {
            containedNode->removeInGroup(this);
        }
    }
}

/*!
    Activity containing the group.
 */
QUmlActivity *QUmlActivityGroup::inActivity() const
{
    // This is a read-write association end

    return _inActivity;
}

void QUmlActivityGroup::setInActivity(QUmlActivity *inActivity)
{
    // This is a read-write association end

    if (_inActivity != inActivity) {
        // Adjust subsetted properties

        _inActivity = inActivity;

        // Adjust subsetted properties
        setOwner(inActivity);
    }
}

/*!
    Groups immediately contained in the group.
 */
const QSet<QUmlActivityGroup *> QUmlActivityGroup::subgroup() const
{
    // This is a read-only derived union association end

    return _subgroup;
}

void QUmlActivityGroup::addSubgroup(QUmlActivityGroup *subgroup)
{
    // This is a read-only derived union association end

    if (!_subgroup.contains(subgroup)) {
        _subgroup.insert(subgroup);

        // Adjust subsetted properties
        addOwnedElement(subgroup);
    }
}

void QUmlActivityGroup::removeSubgroup(QUmlActivityGroup *subgroup)
{
    // This is a read-only derived union association end

    if (_subgroup.contains(subgroup)) {
        _subgroup.remove(subgroup);

        // Adjust subsetted properties
        removeOwnedElement(subgroup);
    }
}

/*!
    Group immediately containing the group.
 */
QUmlActivityGroup *QUmlActivityGroup::superGroup() const
{
    // This is a read-only derived union association end

    return _superGroup;
}

void QUmlActivityGroup::setSuperGroup(QUmlActivityGroup *superGroup)
{
    // This is a read-only derived union association end

    if (_superGroup != superGroup) {
        // Adjust subsetted properties

        _superGroup = superGroup;

        // Adjust subsetted properties
        setOwner(superGroup);
    }
}

QT_END_NAMESPACE

