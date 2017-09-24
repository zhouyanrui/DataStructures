#ifndef CLINEAR_LIST
#define CLINEAR_LIST

#include <iostream>

template<class T>
class CLinearList
{
    public:
        virtual ~CLinearList() {};

        virtual bool empty() const = 0;

        virtual int size() const = 0;

        virtual T& get(int iIndex) const = 0;

        virtual int indexOf(const T&  tElement) const = 0;

        virtual void erase(int iIndex, const T& tElement) = 0;

        virtual void output(std::ostream& out) const = 0;

};

#endif // !CLINEAR_LIST
