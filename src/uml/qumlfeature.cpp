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
#include "qumlfeature.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlClassifier>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlFeature

    \inmodule QtUml

    \brief A feature declares a behavioral or structural characteristic of instances of classifiers.
 */

QUmlFeature::QUmlFeature() :
    _isStatic(false)
{
    d_ptr->object.setProperty("featuringClassifier", QVariant::fromValue(&_featuringClassifier));
    d_ptr->object.setProperty("isStatic", QVariant::fromValue(false));
}

// OWNED ATTRIBUTES

/*!
    The Classifiers that have this Feature as a feature.
 */
const QSet<QUmlClassifier *> QUmlFeature::featuringClassifier() const
{
    // This is a read-only derived union association end

    return _featuringClassifier;
}

void QUmlFeature::addFeaturingClassifier(QUmlClassifier *featuringClassifier)
{
    // This is a read-only derived union association end

    if (!_featuringClassifier.contains(featuringClassifier)) {
        _featuringClassifier.insert(featuringClassifier);

        // Adjust opposite properties
        if (featuringClassifier) {
            featuringClassifier->addFeature(this);
        }
    }
}

void QUmlFeature::removeFeaturingClassifier(QUmlClassifier *featuringClassifier)
{
    // This is a read-only derived union association end

    if (_featuringClassifier.contains(featuringClassifier)) {
        _featuringClassifier.remove(featuringClassifier);

        // Adjust opposite properties
        if (featuringClassifier) {
            featuringClassifier->removeFeature(this);
        }
    }
}

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QUmlFeature::isStatic() const
{
    // This is a read-write property

    return _isStatic;
}

void QUmlFeature::setStatic(bool isStatic)
{
    // This is a read-write property

    if (_isStatic != isStatic) {
        _isStatic = isStatic;
    }
}

QT_END_NAMESPACE

