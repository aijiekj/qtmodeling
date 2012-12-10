/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtWrappedObjects module of the Qt Toolkit.
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
#ifndef QTWRAPPEDOBJECTSGLOBAL_H
#define QTWRAPPEDOBJECTSGLOBAL_H

#include <QtCore/qglobal.h>

QT_BEGIN_HEADER

#ifndef QT_STATIC
#    if defined(QT_BUILD_WRAPPEDOBJECTS_LIB)
#        define Q_WRAPPEDOBJECTS_EXPORT Q_DECL_EXPORT
#    else
#        define Q_WRAPPEDOBJECTS_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_WRAPPEDOBJECTS_EXPORT
#endif

// QtWrappedObjects macros

#if defined(Q_MOC_RUN)

#define QT_NAMESPACE_QTWRAPPEDOBJECTS
#define QT_BEGIN_NAMESPACE_QTWRAPPEDOBJECTS
#define QT_END_NAMESPACE_QTWRAPPEDOBJECTS
#define QT_USE_NAMESPACE_QTWRAPPEDOBJECTS
#define QT_PREPEND_NAMESPACE_QTWRAPPEDOBJECTS(name) ::name

#else

#if defined(QT_NAMESPACE)
#    define QT_NAMESPACE_QTWRAPPEDOBJECTS QT_NAMESPACE::QtWrappedObjects
#else
#    define QT_NAMESPACE_QTWRAPPEDOBJECTS QtWrappedObjects
#endif

#define QT_BEGIN_NAMESPACE_QTWRAPPEDOBJECTS QT_BEGIN_NAMESPACE namespace QtWrappedObjects {
#define QT_END_NAMESPACE_QTWRAPPEDOBJECTS QT_END_NAMESPACE }
#define QT_USE_NAMESPACE_QTWRAPPEDOBJECTS using namespace ::QT_NAMESPACE_QTWRAPPEDOBJECTS;
#define QT_PREPEND_NAMESPACE_QTWRAPPEDOBJECTS(name) ::QT_NAMESPACE_QTWRAPPEDOBJECTS::name

#endif /* defined(Q_MOC_RUN) */

QT_END_HEADER

#endif // QTWRAPPEDOBJECTSGLOBAL_H

