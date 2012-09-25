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
** rights. These rights are described in the Nokia  LGPL Exception
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
#ifndef CLASSES_KERNEL_QEXPRESSION_H
#define CLASSES_KERNEL_QEXPRESSION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtCore/QObject>
#include <QtUml/QValueSpecification>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QExpressionPrivate;

class Q_UML_EXPORT QExpression : public QObject, public QValueSpecification
{
    Q_OBJECT

    Q_PROPERTY(QString symbol READ symbol WRITE setSymbol)
    Q_PROPERTY(QList<QValueSpecification *> * operand READ operand)

public:
    explicit QExpression(QObject *parent = 0);
    virtual ~QExpression();

    // Attributes (except those derived && !derivedUnion)
    QString symbol() const;
    void setSymbol(QString symbol);

    // Association-ends (except those derived && !derivedUnion)
    QList<QValueSpecification *> *operand();

private:
    Q_DISABLE_COPY(QExpression)
    Q_DECLARE_PRIVATE(QExpression)
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QExpression) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QExpression) *> *)

QT_END_HEADER

#endif // CLASSES_KERNEL_QEXPRESSION_H
