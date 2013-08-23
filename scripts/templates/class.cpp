[%- PROCESS common.tmpl -%]
/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt${namespace} module of the Qt Toolkit.
**
** \$QT_BEGIN_LICENSE:LGPL\$
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
** \$QT_END_LICENSE\$
**
****************************************************************************/
#include "q${namespace.lower}${className.lower}.h"
[%- superclasses = [] -%]
[%- FOREACH superclass = class.findnodes("generalization") -%]
[%- superclasses.push("Q${namespace}${superclass.findvalue('@general')}") -%]
[%- END -%]
[%- forwards = [] -%]
[%- FOREACH forward = class.findnodes("ownedAttribute[@type] | ownedOperation/ownedParameter[@type]") -%]
[%- SET forwardName = forward.findvalue('@type') -%]
[%- IF xmi.findnodes("//packagedElement[@xmi:type='uml:Enumeration' and @name='$forwardName']").findvalue("@name") == "" -%]
[%- IF forwardName != className && superclasses.grep("^Q${namespace}${forwardName}$").size == 0 -%][%- forwards.push("Q${namespace}${forwardName}") -%][%- END -%]
[%- END -%]
[%- END -%]
[%- FOREACH forward = forwards.unique.sort -%]
[%- IF loop.first %]
[% END %]
#include <Qt${namespace}/${forward}>
[%- END %]

QT_BEGIN_NAMESPACE

/*!
    \class Q${namespace}${className}

    \inmodule Qt${namespace}

    \brief ${class.findvalue("ownedComment/body/text()")}
 */

Q${namespace}${className}::Q${namespace}${className}()
{
}
[%- FOREACH attribute = class.findnodes("ownedAttribute") %]
[%- IF loop.first %]

// Owned attributes
[%- END %]

/*!
    ${attribute.findvalue("ownedComment/body/text()")}
 */
[% QT_TYPE(namespace, attribute) -%]
Q${namespace}${className}::[% QT_ATTRIBUTE(attribute) %]() const
{
    [%- SET qtType = QT_TYPE(namespace, attribute).trim -%]
    [%- IF qtType.match('\*$') %]
    return 0;
    [%- ELSE %]
    return [% QT_TYPE(namespace, attribute).trim -%]();
    [%- END %]
}
    [%- SET attributeName = attribute.findvalue("@name").ucfirst %]
    [%- IF attribute.findvalue("@isReadOnly") != "true" -%]
        [%- IF attribute.findnodes("upperValue").findvalue("@value") == "*" %]

void Q${namespace}${className}::add${attributeName}([% QT_TYPE(namespace, attribute) %][% QT_ATTRIBUTE(attribute) %])
{
    Q_UNUSED([% QT_ATTRIBUTE(attribute) %]);
}

void Q${namespace}${className}::remove${attributeName}([% QT_TYPE(namespace, attribute) %][% QT_ATTRIBUTE(attribute) %])
{
    Q_UNUSED([% QT_ATTRIBUTE(attribute) %]);
}
        [%- ELSE %]

void Q${namespace}${className}::set${attributeName.remove("^Is")}([% QT_TYPE(namespace, attribute) %][% QT_ATTRIBUTE(attribute) %])
{
    Q_UNUSED([% QT_ATTRIBUTE(attribute) %]);
}
        [%- END %]
    [%- END %]
[%- END %]
[%- FOREACH operation = class.findnodes("ownedOperation[@name != ../ownedAttribute[@isDerived='true']/@name]") -%]
[%- IF loop.first %]

// Operations
[%- END %]
[%- SET operationName = operation.findvalue("@name") -%]

[%- SET returnType = QT_TYPE(namespace, operation.findnodes("ownedParameter[@direction='return']")) %]
/*!
    ${operation.findvalue("ownedComment/body/text()")}
 */
${returnType}Q${namespace}${className}::${operationName}(
    [%- SET parameters = operation.findnodes("ownedParameter[@direction!='return']") -%]
    [%- FOREACH parameter = parameters -%]
        [%- QT_TYPE(namespace, parameter) -%]
${parameter.findvalue("@name")}
        [%- IF !loop.last %], [% END -%]
    [%- END -%]
)[% IF operation.findvalue("@isQuery") == "true" %] const[% END %]
{
    [%- FOREACH parameter = parameters %]
    Q_UNUSED(${parameter.findvalue("@name")});
    [%- END %]
    [%- IF returnType.match('\*$') %]
    return 0;
    [%- ELSE %]
    return ${returnType}();
    [%- END %]
}
[%- END %]

QT_END_NAMESPACE

