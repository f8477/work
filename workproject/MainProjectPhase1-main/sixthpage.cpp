#include "sixthpage.h"

class sixthpageData : public QSharedData
{
public:

};

sixthpage::sixthpage() : data(new sixthpageData)
{

}

sixthpage::sixthpage(const sixthpage &rhs) : data(rhs.data)
{

}

sixthpage &sixthpage::operator=(const sixthpage &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

sixthpage::~sixthpage()
{

}
