/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtDuse module of the Qt Toolkit.
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
#ifndef QDUSEDESIGNSPACEOBJECT_H
#define QDUSEDESIGNSPACEOBJECT_H

#include <QtDuse/QtDuseGlobal>

#include <QtModeling/QModelingObject>

QT_BEGIN_NAMESPACE

QT_MODULE(QtDuse)

class QDuseDesignSpace;
class QModelingObjectPrivate;
class Q_DUSE_EXPORT QDuseDesignSpaceObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QDuseDesignSpaceObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [DesignSpace]
    Q_PROPERTY(QSet<QObject *> elementImports READ elementImports NOTIFY elementImportsChanged)
    Q_PROPERTY(QSet<QObject *> packageImports READ packageImports NOTIFY packageImportsChanged)
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString requiredProfile READ requiredProfile WRITE setRequiredProfile NOTIFY requiredProfileChanged)
    Q_PROPERTY(QList<QObject *> designDimensions READ designDimensions NOTIFY designDimensionsChanged)
    Q_PROPERTY(QSet<QObject *> qualityMetrics READ qualityMetrics NOTIFY qualityMetricsChanged)

public:
    Q_INVOKABLE explicit QDuseDesignSpaceObject(QDuseDesignSpace *modelingElement);

    // Owned attributes [DesignSpace]
    Q_INVOKABLE const QSet<QObject *> elementImports() const;
    Q_INVOKABLE const QSet<QObject *> packageImports() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QString requiredProfile() const;
    Q_INVOKABLE const QList<QObject *> designDimensions() const;
    Q_INVOKABLE const QSet<QObject *> qualityMetrics() const;

public Q_SLOTS:

    // Slots for owned attributes [DesignSpace]
    void addElementImport(QObject *elementImport);
    void removeElementImport(QObject *elementImport);
    void addPackageImport(QObject *packageImport);
    void removePackageImport(QObject *packageImport);
    void setName(QString name);
    void setRequiredProfile(QString requiredProfile);
    void addDesignDimension(QObject *designDimension);
    void removeDesignDimension(QObject *designDimension);
    void addQualityMetric(QObject *qualityMetric);
    void removeQualityMetric(QObject *qualityMetric);

Q_SIGNALS:

    // Signals for owned attributes [DesignSpace]
    void elementImportsChanged(QSet<QObject *> elementImports);
    void packageImportsChanged(QSet<QObject *> packageImports);
    void nameChanged(QString name);
    void requiredProfileChanged(QString requiredProfile);
    void designDimensionsChanged(QList<QObject *> designDimensions);
    void qualityMetricsChanged(QSet<QObject *> qualityMetrics);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

#endif // QDUSEDESIGNSPACEOBJECT_H

