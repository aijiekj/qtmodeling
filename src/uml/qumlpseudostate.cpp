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
#include "qumlpseudostate.h"

#include "private/qumlpseudostateobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlPseudostate

    \inmodule QtUml

    \brief A pseudostate is an abstraction that encompasses different types of transient vertices in the state machine graph.
 */

/*!
    Creates a new QUmlPseudostate. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlPseudostate::QUmlPseudostate(bool createQModelingObject) :
    _kind(QtUml::PseudostateKindInitial),
    _state(0),
    _stateMachine(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlPseudostateObject(this));
}

/*!
    Destroys the QUmlPseudostate.
 */
QUmlPseudostate::~QUmlPseudostate()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlPseudostate.
*/
QModelingElement *QUmlPseudostate::clone() const
{
    QUmlPseudostate *c = new QUmlPseudostate;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setKind(kind());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.
 */
QtUml::PseudostateKind QUmlPseudostate::kind() const
{
    // This is a read-write property

    return _kind;
}

/*!
    Adjusts kind to \a kind.
 */
void QUmlPseudostate::setKind(QtUml::PseudostateKind kind)
{
    // This is a read-write property

    if (_kind != kind) {
        _kind = kind;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("kind");
    }
}

/*!
    The State that owns this pseudostate and in which it appears.

    \b {Subsetted property(ies):} QUmlNamedElement::namespace_().

    \b {Opposite property(ies):} QUmlState::connectionPoints().
 */
QUmlState *QUmlPseudostate::state() const
{
    // This is a read-write association end

    return _state;
}

/*!
    Adjusts state to \a state.
 */
void QUmlPseudostate::setState(QUmlState *state)
{
    // This is a read-write association end

    if (_state != state) {
        // Adjust subsetted properties

        _state = state;
        if (state && state->asQModelingObject() && this->asQModelingObject())
            QObject::connect(state->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setState()));

        // Adjust subsetted properties
        setNamespace(state);
    }
}

/*!
    The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.

    \b {Subsetted property(ies):} QUmlNamedElement::namespace_().

    \b {Opposite property(ies):} QUmlStateMachine::connectionPoints().
 */
QUmlStateMachine *QUmlPseudostate::stateMachine() const
{
    // This is a read-write association end

    return _stateMachine;
}

/*!
    Adjusts stateMachine to \a stateMachine.
 */
void QUmlPseudostate::setStateMachine(QUmlStateMachine *stateMachine)
{
    // This is a read-write association end

    if (_stateMachine != stateMachine) {
        // Adjust subsetted properties

        _stateMachine = stateMachine;
        if (stateMachine && stateMachine->asQModelingObject() && this->asQModelingObject())
            QObject::connect(stateMachine->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setStateMachine()));

        // Adjust subsetted properties
        setNamespace(stateMachine);
    }
}

QT_END_NAMESPACE

