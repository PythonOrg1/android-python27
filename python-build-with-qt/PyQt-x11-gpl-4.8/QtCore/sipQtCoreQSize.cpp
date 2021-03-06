/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
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

#include "sipAPIQtCore.h"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 39 "sipQtCoreQSize.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtCoreQSize.cpp"


extern "C" {static PyObject *meth_QSize_transpose(PyObject *, PyObject *);}
static PyObject *meth_QSize_transpose(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->transpose();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_transpose, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_scale(PyObject *, PyObject *);}
static PyObject *meth_QSize_scale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        Qt::AspectRatioMode a1;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9E", &sipSelf, sipType_QSize, &sipCpp, sipType_QSize, &a0, sipType_Qt_AspectRatioMode, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->scale(*a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        int a1;
        Qt::AspectRatioMode a2;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiiE", &sipSelf, sipType_QSize, &sipCpp, &a0, &a1, sipType_Qt_AspectRatioMode, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->scale(a0,a1,a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_scale, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSize_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_isNull, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QSize_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_isEmpty, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_isValid(PyObject *, PyObject *);}
static PyObject *meth_QSize_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_width(PyObject *, PyObject *);}
static PyObject *meth_QSize_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_width, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_height(PyObject *, PyObject *);}
static PyObject *meth_QSize_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->height();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_height, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_setWidth(PyObject *, PyObject *);}
static PyObject *meth_QSize_setWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSize, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWidth(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_setWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_setHeight(PyObject *, PyObject *);}
static PyObject *meth_QSize_setHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSize, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHeight(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_setHeight, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_expandedTo(PyObject *, PyObject *);}
static PyObject *meth_QSize_expandedTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSize, &sipCpp, sipType_QSize, &a0))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->expandedTo(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_expandedTo, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_boundedTo(PyObject *, PyObject *);}
static PyObject *meth_QSize_boundedTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSize, &sipCpp, sipType_QSize, &a0))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->boundedTo(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_boundedTo, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QSize___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSize___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSize, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator==((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QSize,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSize___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSize___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSize, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator!=((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QSize,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSize___add__(PyObject *,PyObject *);}
static PyObject *slot_QSize___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        const QSize * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QSize, &a0, sipType_QSize, &a1))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize((*a0 + *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSize___sub__(PyObject *,PyObject *);}
static PyObject *slot_QSize___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        const QSize * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QSize, &a0, sipType_QSize, &a1))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize((*a0 - *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSize___mul__(PyObject *,PyObject *);}
static PyObject *slot_QSize___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QSize, &a0, &a1))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize((*a0 * a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    {
        qreal a0;
        const QSize * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "dJ9", &a0, sipType_QSize, &a1))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize((a0 * *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSize___div__(PyObject *,PyObject *);}
static PyObject *slot_QSize___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QSize, &a0, &a1))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize((*a0 / a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSize___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QSize___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSize)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSize::operator/=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QSize___imul__(PyObject *,PyObject *);}
static PyObject *slot_QSize___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSize)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSize::operator*=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QSize___isub__(PyObject *,PyObject *);}
static PyObject *slot_QSize___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSize)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSize, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSize::operator-=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QSize___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QSize___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSize)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSize, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSize::operator+=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static int slot_QSize___bool__(PyObject *);}
static int slot_QSize___bool__(PyObject *sipSelf)
{
    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 69 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
        sipRes = sipCpp->isValid();
#line 749 "sipQtCoreQSize.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QSize___repr__(PyObject *);}
static PyObject *slot_QSize___repr__(PyObject *sipSelf)
{
    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 54 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
        sipRes =
        #if PY_MAJOR_VERSION >= 3
            PyUnicode_FromFormat
        #else
            PyString_FromFormat
        #endif
                ("PyQt4.QtCore.QSize(%i, %i)", sipCpp->width(),
                 sipCpp->height());
#line 779 "sipQtCoreQSize.cpp"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSize(void *, const sipTypeDef *);}
static void *cast_QSize(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSize)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSize(void *, int);}
static void release_QSize(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSize *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QSize(void *);}
static PyObject *pickle_QSize(void *sipCppV)
{
    QSize *sipCpp = reinterpret_cast<QSize *>(sipCppV);
    PyObject *sipRes;

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
    sipRes = Py_BuildValue((char *)"ii", sipCpp->width(), sipCpp->height());
#line 818 "sipQtCoreQSize.cpp"

    return sipRes;
}


extern "C" {static void assign_QSize(void *, SIP_SSIZE_T, const void *);}
static void assign_QSize(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSize *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSize *>(sipSrc);
}


extern "C" {static void *array_QSize(SIP_SSIZE_T);}
static void *array_QSize(SIP_SSIZE_T sipNrElem)
{
    return new QSize[sipNrElem];
}


extern "C" {static void *copy_QSize(const void *, SIP_SSIZE_T);}
static void *copy_QSize(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSize(reinterpret_cast<const QSize *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSize(sipSimpleWrapper *);}
static void dealloc_QSize(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSize(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QSize(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QSize(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSize *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSize();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ii", &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSize(a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QSize * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSize, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSize(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSize[] = {
    {(void *)slot_QSize___eq__, eq_slot},
    {(void *)slot_QSize___ne__, ne_slot},
    {(void *)slot_QSize___add__, add_slot},
    {(void *)slot_QSize___sub__, sub_slot},
    {(void *)slot_QSize___mul__, mul_slot},
    {(void *)slot_QSize___div__, div_slot},
    {(void *)slot_QSize___idiv__, idiv_slot},
    {(void *)slot_QSize___imul__, imul_slot},
    {(void *)slot_QSize___isub__, isub_slot},
    {(void *)slot_QSize___iadd__, iadd_slot},
    {(void *)slot_QSize___bool__, bool_slot},
    {(void *)slot_QSize___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSize[] = {
    {SIP_MLNAME_CAST(sipName_boundedTo), meth_QSize_boundedTo, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_expandedTo), meth_QSize_expandedTo, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_height), meth_QSize_height, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QSize_isEmpty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSize_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QSize_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_scale), meth_QSize_scale, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setHeight), meth_QSize_setHeight, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setWidth), meth_QSize_setWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_transpose), meth_QSize_transpose, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_width), meth_QSize_width, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QSize = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSize,
        {0}
    },
    {
        sipNameNr_QSize,
        {0, 0, 1},
        11, methods_QSize,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSize,
    init_QSize,
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
    dealloc_QSize,
    assign_QSize,
    array_QSize,
    copy_QSize,
    release_QSize,
    cast_QSize,
    0,
    0,
    pickle_QSize
},
    0,
    0,
    0
};
