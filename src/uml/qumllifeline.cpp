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
#include "qumllifeline.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlPartDecomposition>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlLifeline

    \inmodule QtUml

    \brief A lifeline represents an individual participant in the interaction. While parts and structural features may have multiplicity greater than 1, lifelines represent only one interacting entity.
 */

QUmlLifeline::QUmlLifeline() :
    _decomposedAs(0),
    _interaction(0),
    _represents(0),
    _selector(0)
{
    d_ptr->object.setProperty("coveredBy", QVariant::fromValue(&_coveredBy));
    d_ptr->object.setProperty("decomposedAs", QVariant::fromValue((QUmlPartDecomposition *)(0)));
    d_ptr->object.setProperty("interaction", QVariant::fromValue((QUmlInteraction *)(0)));
    d_ptr->object.setProperty("represents", QVariant::fromValue((QUmlConnectableElement *)(0)));
    d_ptr->object.setProperty("selector", QVariant::fromValue((QUmlValueSpecification *)(0)));
}

// OWNED ATTRIBUTES

/*!
    References the InteractionFragments in which this Lifeline takes part.
 */
const QSet<QUmlInteractionFragment *> QUmlLifeline::coveredBy() const
{
    // This is a read-write association end

    return _coveredBy;
}

void QUmlLifeline::addCoveredBy(QUmlInteractionFragment *coveredBy)
{
    // This is a read-write association end

    if (!_coveredBy.contains(coveredBy)) {
        _coveredBy.insert(coveredBy);

        // Adjust opposite properties
        if (coveredBy) {
            coveredBy->addCovered(this);
        }
    }
}

void QUmlLifeline::removeCoveredBy(QUmlInteractionFragment *coveredBy)
{
    // This is a read-write association end

    if (_coveredBy.contains(coveredBy)) {
        _coveredBy.remove(coveredBy);

        // Adjust opposite properties
        if (coveredBy) {
            coveredBy->removeCovered(this);
        }
    }
}

/*!
    References the Interaction that represents the decomposition.
 */
QUmlPartDecomposition *QUmlLifeline::decomposedAs() const
{
    // This is a read-write association end

    return _decomposedAs;
}

void QUmlLifeline::setDecomposedAs(QUmlPartDecomposition *decomposedAs)
{
    // This is a read-write association end

    if (_decomposedAs != decomposedAs) {
        _decomposedAs = decomposedAs;
    }
}

/*!
    References the Interaction enclosing this Lifeline.
 */
QUmlInteraction *QUmlLifeline::interaction() const
{
    // This is a read-write association end

    return _interaction;
}

void QUmlLifeline::setInteraction(QUmlInteraction *interaction)
{
    // This is a read-write association end

    if (_interaction != interaction) {
        // Adjust subsetted properties

        _interaction = interaction;

        // Adjust subsetted properties
        setNamespace(interaction);
    }
}

/*!
    References the ConnectableElement within the classifier that contains the enclosing interaction.
 */
QUmlConnectableElement *QUmlLifeline::represents() const
{
    // This is a read-write association end

    return _represents;
}

void QUmlLifeline::setRepresents(QUmlConnectableElement *represents)
{
    // This is a read-write association end

    if (_represents != represents) {
        _represents = represents;
    }
}

/*!
    If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.
 */
QUmlValueSpecification *QUmlLifeline::selector() const
{
    // This is a read-write association end

    return _selector;
}

void QUmlLifeline::setSelector(QUmlValueSpecification *selector)
{
    // This is a read-write association end

    if (_selector != selector) {
        // Adjust subsetted properties
        removeOwnedElement(_selector);

        _selector = selector;

        // Adjust subsetted properties
        if (selector) {
            addOwnedElement(selector);
        }
    }
}

QT_END_NAMESPACE

