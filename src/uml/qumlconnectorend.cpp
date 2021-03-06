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
#include "qumlconnectorend.h"

#include "private/qumlconnectorendobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlConnectorEnd

    \inmodule QtUml

    \brief A connector end is an endpoint of a connector, which attaches the connector to a connectable element. Each connector end is part of one connector.
 */

/*!
    Creates a new QUmlConnectorEnd. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlConnectorEnd::QUmlConnectorEnd(bool createQModelingObject) :
    _partWithPort(0),
    _role(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlConnectorEndObject(this));
}

/*!
    Destroys the QUmlConnectorEnd.
 */
QUmlConnectorEnd::~QUmlConnectorEnd()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlConnectorEnd.
*/
QModelingElement *QUmlConnectorEnd::clone() const
{
    QUmlConnectorEnd *c = new QUmlConnectorEnd;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setOrdered(isOrdered());
    c->setUnique(isUnique());
    if (lowerValue())
        c->setLowerValue(dynamic_cast<QUmlValueSpecification *>(lowerValue()->clone()));
    if (upperValue())
        c->setUpperValue(dynamic_cast<QUmlValueSpecification *>(upperValue()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    A derived association referencing the corresponding association end on the association which types the connector owing this connector end. This association is derived by selecting the association end at the same place in the ordering of association ends as this connector end.

    \b {This is a read-only derived property.}
 */
QUmlProperty *QUmlConnectorEnd::definingEnd() const
{
    // This is a read-only derived association end

    qWarning("QUmlConnectorEnd::definingEnd(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    Adjusts definingEnd to \a definingEnd.
 */
void QUmlConnectorEnd::setDefiningEnd(QUmlProperty *definingEnd)
{
    // This is a read-only derived association end

    qWarning("QUmlConnectorEnd::setDefiningEnd(): to be implemented (this is a derived association end)");
    Q_UNUSED(definingEnd);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Indicates the role of the internal structure of a classifier with the port to which the connector end is attached.
 */
QUmlProperty *QUmlConnectorEnd::partWithPort() const
{
    // This is a read-write association end

    return _partWithPort;
}

/*!
    Adjusts partWithPort to \a partWithPort.
 */
void QUmlConnectorEnd::setPartWithPort(QUmlProperty *partWithPort)
{
    // This is a read-write association end

    if (_partWithPort != partWithPort) {
        _partWithPort = partWithPort;
        if (partWithPort && partWithPort->asQModelingObject() && this->asQModelingObject())
            QObject::connect(partWithPort->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setPartWithPort()));
    }
}

/*!
    The connectable element attached at this connector end. When an instance of the containing classifier is created, a link may (depending on the multiplicities) be created to an instance of the classifier that types this connectable element.

    \b {Opposite property(ies):} QUmlConnectableElement::ends().
 */
QUmlConnectableElement *QUmlConnectorEnd::role() const
{
    // This is a read-write association end

    return _role;
}

/*!
    Adjusts role to \a role.
 */
void QUmlConnectorEnd::setRole(QUmlConnectableElement *role)
{
    // This is a read-write association end

    if (_role != role) {
        _role = role;
        if (role && role->asQModelingObject() && this->asQModelingObject())
            QObject::connect(role->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setRole()));
    }
}

QT_END_NAMESPACE

