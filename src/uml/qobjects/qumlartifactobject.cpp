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
#include "qumlartifactobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlArtifact>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlManifestation>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlArtifactObject::QUmlArtifactObject(QUmlArtifact *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlArtifactObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlArtifactObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlArtifactObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlArtifactObject::name() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->name();
}

QObject *QUmlArtifactObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlArtifactObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->namespace_()->asQModelingObject();
}

QString QUmlArtifactObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlArtifactObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlArtifactObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlArtifactObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlArtifactObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlArtifactObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isLeaf();
}

const QSet<QObject *> QUmlArtifactObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlArtifactObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlArtifactObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->generals())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isAbstract();
}

bool QUmlArtifactObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isFinalSpecialization();
}

QObject *QUmlArtifactObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlArtifactObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlArtifactObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlArtifactObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlArtifactObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlArtifactObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Artifact]

QString QUmlArtifactObject::fileName() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->fileName();
}

const QSet<QObject *> QUmlArtifactObject::manifestations() const
{
    QSet<QObject *> set;
    foreach (QUmlManifestation *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->manifestations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::nestedArtifacts() const
{
    QSet<QObject *> set;
    foreach (QUmlArtifact *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->nestedArtifacts())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlArtifactObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlArtifactObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlArtifactObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlArtifactObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlArtifactObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlArtifactObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlArtifactObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlArtifactObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlArtifactObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlArtifactObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlArtifactObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]

// OPERATIONS [RedefinableElement]

bool QUmlArtifactObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlArtifactObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlArtifactObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlArtifactObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlArtifactObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlArtifactObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlArtifactObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlArtifactObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isTemplate();
}

bool QUmlArtifactObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlArtifactObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlArtifactObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlArtifactObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlArtifactObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlArtifactObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlArtifactObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlArtifactObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlArtifactObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlArtifactObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setName(name);
}

void QUmlArtifactObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlArtifactObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlArtifactObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlArtifactObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlArtifactObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlArtifactObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlArtifactObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlArtifactObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlArtifactObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlArtifactObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlArtifactObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlArtifactObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlArtifactObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlArtifactObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlArtifactObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlArtifactObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlArtifactObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setVisibility(visibility);
}

void QUmlArtifactObject::unsetVisibility()
{
    Q_D(QModelingObject);
    setVisibility(QtUml::VisibilityKindPublic);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlArtifactObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlArtifactObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setLeaf(isLeaf);
}

void QUmlArtifactObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QUmlArtifactObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlArtifactObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlArtifactObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlArtifactObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlArtifactObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlArtifactObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlArtifactObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlArtifactObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlArtifactObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlArtifactObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlArtifactObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlArtifactObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlArtifactObject::addGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlArtifactObject::removeGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlArtifactObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlArtifactObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlArtifactObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlArtifactObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlArtifactObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setAbstract(isAbstract);
}

void QUmlArtifactObject::unsetAbstract()
{
    Q_D(QModelingObject);
    setAbstract(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isAbstract"));
}

void QUmlArtifactObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlArtifactObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    setFinalSpecialization(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isFinalSpecialization"));
}

void QUmlArtifactObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlArtifactObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlArtifactObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlArtifactObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlArtifactObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlArtifactObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlArtifactObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlArtifactObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlArtifactObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlArtifactObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlArtifactObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlArtifactObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlArtifactObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Artifact]

void QUmlArtifactObject::setFileName(QString fileName)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setFileName(fileName);
}

void QUmlArtifactObject::addManifestation(QObject *manifestation)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addManifestation(qmodelingelementproperty_cast<QUmlManifestation *>(manifestation));
}

void QUmlArtifactObject::removeManifestation(QObject *manifestation)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeManifestation(qmodelingelementproperty_cast<QUmlManifestation *>(manifestation));
}

void QUmlArtifactObject::addNestedArtifact(QObject *nestedArtifact)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addNestedArtifact(qmodelingelementproperty_cast<QUmlArtifact *>(nestedArtifact));
}

void QUmlArtifactObject::removeNestedArtifact(QObject *nestedArtifact)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeNestedArtifact(qmodelingelementproperty_cast<QUmlArtifact *>(nestedArtifact));
}

void QUmlArtifactObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlArtifactObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlArtifactObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlArtifactObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}


void QUmlArtifactObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));

    d->propertyGroups << QStringLiteral("QUmlDeployedArtifact");

    d->propertyGroups << QStringLiteral("QUmlNamespace");
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlType");
    d->groupProperties.insert(QStringLiteral("QUmlType"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("package"))));

    d->propertyGroups << QStringLiteral("QUmlRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateableElement");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateBindings"))));

    d->propertyGroups << QStringLiteral("QUmlClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("attributes"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("collaborationUses"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("features"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generals"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalizations"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inheritedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isAbstract"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isFinalSpecialization"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedTemplateSignature"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedUseCases"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("powertypeExtents"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("representation"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("substitutions"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("useCases"))));

    d->propertyGroups << QStringLiteral("QUmlArtifact");
    d->groupProperties.insert(QStringLiteral("QUmlArtifact"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("fileName"))));
    d->groupProperties.insert(QStringLiteral("QUmlArtifact"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("manifestations"))));
    d->groupProperties.insert(QStringLiteral("QUmlArtifact"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nestedArtifacts"))));
    d->groupProperties.insert(QStringLiteral("QUmlArtifact"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedAttributes"))));
    d->groupProperties.insert(QStringLiteral("QUmlArtifact"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedOperations"))));
}

void QUmlArtifactObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, DocumentationRole, QStringLiteral("References the ElementImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, OppositeEndRole, QStringLiteral("ElementImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, DocumentationRole, QStringLiteral("References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, DocumentationRole, QStringLiteral("A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, DocumentationRole, QStringLiteral("A collection of NamedElements owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, OppositeEndRole, QStringLiteral("NamedElement-namespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, DocumentationRole, QStringLiteral("Specifies a set of Constraints owned by this Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, OppositeEndRole, QStringLiteral("Constraint-context"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, DocumentationRole, QStringLiteral("References the PackageImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, OppositeEndRole, QStringLiteral("PackageImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, DocumentationRole, QStringLiteral("The formal template parameter that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, SubsettedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-ownedParameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, PropertyClassRole, QStringLiteral("QUmlPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, PropertyClassRole, QStringLiteral("QUmlType"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, DocumentationRole, QStringLiteral("Specifies the owning package of this classifier, if any."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, SubsettedPropertiesRole, QStringLiteral("A_packagedElement_owningPackage-owningPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, OppositeEndRole, QStringLiteral("Package-ownedType"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, PropertyClassRole, QStringLiteral("QUmlTemplateableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, DocumentationRole, QStringLiteral("The optional template signature specifying the formal template parameters."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, OppositeEndRole, QStringLiteral("TemplateSignature-template"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, PropertyClassRole, QStringLiteral("QUmlTemplateableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, DocumentationRole, QStringLiteral("The optional bindings from this element to templates."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, OppositeEndRole, QStringLiteral("TemplateBinding-boundElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, DocumentationRole, QStringLiteral("Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, DocumentationRole, QStringLiteral("References the collaboration uses owned by the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, DocumentationRole, QStringLiteral("Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, OppositeEndRole, QStringLiteral("Feature-featuringClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, DocumentationRole, QStringLiteral("Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, DocumentationRole, QStringLiteral("Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, OppositeEndRole, QStringLiteral("Generalization-specific"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, DocumentationRole, QStringLiteral("Specifies all elements inherited by this classifier from the general classifiers."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, DocumentationRole, QStringLiteral("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, DocumentationRole, QStringLiteral("If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, DocumentationRole, QStringLiteral("The optional template signature specifying the formal template parameters."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, RedefinedPropertiesRole, QStringLiteral("TemplateableElement-ownedTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, SubsettedPropertiesRole, QStringLiteral("A_redefinitionContext_redefinableElement-redefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, OppositeEndRole, QStringLiteral("RedefinableTemplateSignature-classifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, DocumentationRole, QStringLiteral("References the use cases owned by this classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, DocumentationRole, QStringLiteral("Designates the GeneralizationSet of which the associated Classifier is a power type."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, OppositeEndRole, QStringLiteral("GeneralizationSet-powertype"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, DocumentationRole, QStringLiteral("References the Classifiers that are redefined by this Classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, DocumentationRole, QStringLiteral("References a collaboration use which indicates the collaboration that represents this classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, SubsettedPropertiesRole, QStringLiteral("Classifier-collaborationUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, DocumentationRole, QStringLiteral("References the substitutions that are owned by this Classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement NamedElement-clientDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, OppositeEndRole, QStringLiteral("Substitution-substitutingClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, RedefinedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, OppositeEndRole, QStringLiteral("ClassifierTemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, DocumentationRole, QStringLiteral("The set of use cases for which this Classifier is the subject."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, OppositeEndRole, QStringLiteral("UseCase-subject"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, PropertyClassRole, QStringLiteral("QUmlArtifact"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, DocumentationRole, QStringLiteral("A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, PropertyClassRole, QStringLiteral("QUmlArtifact"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, DocumentationRole, QStringLiteral("The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement NamedElement-clientDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, PropertyClassRole, QStringLiteral("QUmlArtifact"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, DocumentationRole, QStringLiteral("The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, PropertyClassRole, QStringLiteral("QUmlArtifact"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, DocumentationRole, QStringLiteral("The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember Classifier-attribute"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, PropertyClassRole, QStringLiteral("QUmlArtifact"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, DocumentationRole, QStringLiteral("The Operations defined for the Artifact. The association is a specialization of the ownedMember association."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

