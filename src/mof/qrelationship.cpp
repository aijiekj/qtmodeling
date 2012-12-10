/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qrelationship.h"
#include "qrelationship_p.h"

QT_BEGIN_NAMESPACE_QTMOF

QRelationshipPrivate::QRelationshipPrivate() :
    relatedElements(new QSet<QElement *>)
{
}

QRelationshipPrivate::~QRelationshipPrivate()
{
    delete relatedElements;
}

void QRelationshipPrivate::addRelatedElement(QElement *relatedElement)
{
    // This is a read-only derived-union association end

    if (!this->relatedElements->contains(relatedElement)) {
        this->relatedElements->insert(relatedElement);
    }
}

void QRelationshipPrivate::removeRelatedElement(QElement *relatedElement)
{
    // This is a read-only derived-union association end

    if (this->relatedElements->contains(relatedElement)) {
        this->relatedElements->remove(relatedElement);
    }
}

/*!
    \class QRelationship

    \inmodule QtMof

    \brief Relationship is an abstract concept that specifies some kind of relationship between elements.
 */

QRelationship::QRelationship(QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(*new QRelationshipPrivate, parent, wrapper)
{
}

QRelationship::QRelationship(QRelationshipPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(dd, parent, wrapper)
{
}

QRelationship::~QRelationship()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
const QSet<QElement *> *QRelationship::relatedElements() const
{
    // This is a read-only derived-union association end

    Q_D(const QRelationship);
    return d->relatedElements;
}

#include "moc_qrelationship.cpp"

QT_END_NAMESPACE_QTMOF
