#include <cstdio>


class X
{
public:
    int data_ = 2;

    void *foo() const
    {
        printf("data =  %d", data_);
        return nullptr;
    }
};

static X *getPtr()
{
    return nullptr;
}

int main()
{
    X *ptr = getPtr();

    if (ptr != nullptr)
    {
        printf("ptr is not null");
    }
    else
    {
        printf("Invalid Call (%d %d)\n",
               ptr != nullptr,
               ptr->foo() != nullptr); // Null dereference not flagged
    }
}
