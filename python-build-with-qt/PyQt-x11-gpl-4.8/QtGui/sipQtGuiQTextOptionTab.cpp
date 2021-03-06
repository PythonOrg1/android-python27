/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:16 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 107 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 41 "sipQtGuiQTextOptionTab.cpp"

#line 77 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qchar.sip"
#include <qchar.h>
#line 45 "sipQtGuiQTextOptionTab.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 107 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 50 "sipQtGuiQTextOptionTab.cpp"


extern "C" {static PyObject *slot_QTextOption_Tab___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Tab___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextOption::Tab *sipCpp = reinterpret_cast<QTextOption::Tab *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Tab));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextOption::Tab * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextOption_Tab, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextOption::Tab::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextOption_Tab,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextOption_Tab___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Tab___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextOption::Tab *sipCpp = reinterpret_cast<QTextOption::Tab *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Tab));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextOption::Tab * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextOption_Tab, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextOption::Tab::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextOption_Tab,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextOption_Tab(void *, const sipTypeDef *);}
static void *cast_QTextOption_Tab(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextOption_Tab)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextOption_Tab(void *, int);}
static void release_QTextOption_Tab(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextOption::Tab *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextOption_Tab(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextOption_Tab(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextOption::Tab *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextOption::Tab *>(sipSrc);
}


extern "C" {static void *array_QTextOption_Tab(SIP_SSIZE_T);}
static void *array_QTextOption_Tab(SIP_SSIZE_T sipNrElem)
{
    return new QTextOption::Tab[sipNrElem];
}


extern "C" {static void *copy_QTextOption_Tab(const void *, SIP_SSIZE_T);}
static void *copy_QTextOption_Tab(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextOption::Tab(reinterpret_cast<const QTextOption::Tab *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextOption_Tab(sipSimpleWrapper *);}
static void dealloc_QTextOption_Tab(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextOption_Tab(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QTextOption_Tab(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTextOption_Tab(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextOption::Tab *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption::Tab();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        qreal a0;
        QTextOption::TabType a1;
        QChar a2def = QChar();
        QChar * a2 = &a2def;
        int a2State = 0;

        static const char *sipKwdList[] = {
            sipName_pos,
            sipName_tabType,
            sipName_delim,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "dE|J1", &a0, sipType_QTextOption_TabType, &a1, sipType_QChar,&a2, &a2State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption::Tab(a0,a1,*a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(a2,sipType_QChar,a2State);

            return sipCpp;
        }
    }

    {
        const QTextOption::Tab * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextOption_Tab, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption::Tab(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextOption_Tab[] = {
    {(void *)slot_QTextOption_Tab___ne__, ne_slot},
    {(void *)slot_QTextOption_Tab___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


extern "C" {static PyObject *varget_QTextOption_Tab_delimiter(void *, PyObject *);}
static PyObject *varget_QTextOption_Tab_delimiter(void *sipSelf, PyObject *)
{
    QChar *sipVal;
    QTextOption::Tab *sipCpp = reinterpret_cast<QTextOption::Tab *>(sipSelf);

    sipVal = &sipCpp->delimiter;

    return sipConvertFromType(sipVal,sipType_QChar, NULL);
}


extern "C" {static int varset_QTextOption_Tab_delimiter(void *, PyObject *, PyObject *);}
static int varset_QTextOption_Tab_delimiter(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QChar *sipVal;
    QTextOption::Tab *sipCpp = reinterpret_cast<QTextOption::Tab *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QChar *>(sipForceConvertToType(sipPy,sipType_QChar,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->delimiter = *sipVal;

    sipReleaseType(sipVal, sipType_QChar, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QTextOption_Tab_position(void *, PyObject *);}
static PyObject *varget_QTextOption_Tab_position(void *sipSelf, PyObject *)
{
    qreal sipVal;
    QTextOption::Tab *sipCpp = reinterpret_cast<QTextOption::Tab *>(sipSelf);

    sipVal = sipCpp->position;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QTextOption_Tab_position(void *, PyObject *, PyObject *);}
static int varset_QTextOption_Tab_position(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QTextOption::Tab *sipCpp = reinterpret_cast<QTextOption::Tab *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->position = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QTextOption_Tab_type(void *, PyObject *);}
static PyObject *varget_QTextOption_Tab_type(void *sipSelf, PyObject *)
{
    QTextOption::TabType sipVal;
    QTextOption::Tab *sipCpp = reinterpret_cast<QTextOption::Tab *>(sipSelf);

    sipVal = sipCpp->type;

    return sipConvertFromEnum(sipVal, sipType_QTextOption_TabType);
}


extern "C" {static int varset_QTextOption_Tab_type(void *, PyObject *, PyObject *);}
static int varset_QTextOption_Tab_type(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QTextOption::TabType sipVal;
    QTextOption::Tab *sipCpp = reinterpret_cast<QTextOption::Tab *>(sipSelf);

    sipVal = (QTextOption::TabType)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->type = sipVal;

    return 0;
}

sipVariableDef variables_QTextOption_Tab[] = {
    {sipName_delimiter, varget_QTextOption_Tab_delimiter, varset_QTextOption_Tab_delimiter, 0},
    {sipName_position, varget_QTextOption_Tab_position, varset_QTextOption_Tab_position, 0},
    {sipName_type, varget_QTextOption_Tab_type, varset_QTextOption_Tab_type, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextOption_Tab = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextOption__Tab,
        {0}
    },
    {
        sipNameNr_Tab,
        {692, 255, 0},
        0, 0,
        0, 0,
        3, variables_QTextOption_Tab,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextOption_Tab,
    init_QTextOption_Tab,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QTextOption_Tab,
    assign_QTextOption_Tab,
    array_QTextOption_Tab,
    copy_QTextOption_Tab,
    release_QTextOption_Tab,
    cast_QTextOption_Tab,
    0,
    0,
    0
},
    0,
    0,
    0
};
