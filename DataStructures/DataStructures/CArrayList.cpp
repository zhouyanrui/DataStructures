#include "stdafx.h"
#include "CArrayList.h"

template<class T>
CArrayList<T>::CArrayList(int initialCapacity)
{
    if (initialCapacity < 1)
    {
        ostringstream s;
        s << "Initial capacity = " << initialCapacity << "Must be > 0 ";
        throw s.str();
    }

    arrayLength = initialCapacity;
    element = new T[arrayLength];
    listSize = 0;
}

template<class T>
CArrayList<T>::CArrayList(const CArrayList<T>& theList)
{
    arrayLength = theList.arrayLength;
    listSize = theList.listSize;
    element = new T[arrayLength];
    std::copy(theList.element, theList.element + listSize, element);
}

template<class T>
T& CArrayList<T>::get(int iIndex) const
{

}

template<class T>
int CArrayList<T>::indexof(const T& tElement) const
{

}

template<class T>
void CArrayList<T>::erase(int iIndex)
{

}

template<class T>
void CArrayList<T>::insert(int iIndex, const T& tElement)
{

}

template<class T>
void CArrayList<T>::output(std::ostream& out) const
{

}

template<class T>
void CArrayList<T>::checkIndex(int iIndex) const
{

}