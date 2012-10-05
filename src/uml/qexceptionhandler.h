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
#ifndef QTUML_QEXCEPTIONHANDLER_H
#define QTUML_QEXCEPTIONHANDLER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QExceptionHandlerPrivate;
class QObjectNode;
class QClassifier;
class QExecutableNode;

class Q_UML_EXPORT QExceptionHandler : public QObject, public QElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)

    // From QExceptionHandler
    Q_PROPERTY(QObjectNode * exceptionInput READ exceptionInput WRITE setExceptionInput)
    Q_PROPERTY(const QSet<QClassifier *> * exceptionTypes READ exceptionTypes)
    Q_PROPERTY(QExecutableNode * handlerBody READ handlerBody WRITE setHandlerBody)
    Q_PROPERTY(QExecutableNode * protectedNode READ protectedNode WRITE setProtectedNode)

public:
    explicit QExceptionHandler(QObject *parent = 0);
    virtual ~QExceptionHandler();

    // Association-ends (except those derived && !derivedUnion)
    QObjectNode *exceptionInput() const;
    void setExceptionInput(const QObjectNode *exceptionInput);
    const QSet<QClassifier *> *exceptionTypes() const;
    void addExceptionType(const QClassifier *exceptionType);
    void removeExceptionType(const QClassifier *exceptionType);
    QExecutableNode *handlerBody() const;
    void setHandlerBody(const QExecutableNode *handlerBody);
    QExecutableNode *protectedNode() const;
    void setProtectedNode(const QExecutableNode *protectedNode);

private:
    Q_DISABLE_COPY(QExceptionHandler)
    Q_DECLARE_PRIVATE(QExceptionHandler)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QExceptionHandler) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QExceptionHandler) *> *)

QT_END_HEADER

#endif // QTUML_QEXCEPTIONHANDLER_H
