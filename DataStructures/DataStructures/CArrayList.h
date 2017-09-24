#ifndef CARRAY_LIST
#define CARRAY_LIST

#include "CLinearList.h"

template<class T>
class CArrayList : public CLinearList<T>
{
public:
    CArrayList(int initialCapacity = 10);
    CArrayList(const CArrayList<T>& theList);
    ~CArrayList() {delete [] element};

    bool empty() { return listSize == 0 };
    int size() const { return listSize };
    T& get(int iIndex) const;
    int indexof(const T& tElement) const;
    void erase(int iIndex);
    void insert(int iIndex, const T& tElement);
    void output(std::ostream& out) const;

    int capacity() const { return arrayLength };

protected:
    void checkIndex(int iIndex) const;
    T* element;
    int arrayLength;
    int listSize;
};


#endif // !CARRAY_LIST


