/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofliteralinteger.h"

#include "private/qmofliteralintegerobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

/*!
    \class QMofLiteralInteger

    \inmodule QtMof

    \brief A literal integer is a specification of an integer value.
 */

/*!
    Creates a new QMofLiteralInteger. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QMofLiteralInteger::QMofLiteralInteger(bool createQModelingObject) :
    _value(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofLiteralIntegerObject(this));
}

/*!
    Destroys the QMofLiteralInteger.
 */
QMofLiteralInteger::~QMofLiteralInteger()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofLiteralInteger.
*/
QModelingElement *QMofLiteralInteger::clone() const
{
    QMofLiteralInteger *c = new QMofLiteralInteger;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    c->setValue(value());
    return c;
}

// OWNED ATTRIBUTES

/*!
    The specified Integer value.
 */
int QMofLiteralInteger::value() const
{
    // This is a read-write property

    return _value;
}

/*!
    Adjusts value to \a value.
 */
void QMofLiteralInteger::setValue(int value)
{
    // This is a read-write property

    if (_value != value) {
        _value = value;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("value");
    }
}

// OPERATIONS

/*!
    The query integerValue() gives the value.
 */
int QMofLiteralInteger::integerValue() const
{
    qWarning("QMofLiteralInteger::integerValue(): to be implemented (operation)");

    return int ();
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QMofLiteralInteger::isComputable() const
{
    qWarning("QMofLiteralInteger::isComputable(): to be implemented (operation)");

    return bool ();
}

QT_END_NAMESPACE

