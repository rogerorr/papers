#include <initializer_list>

void f(std::initializer_list<int> i) {}

template <typename T>
void ft(T t) {}

int main()
{   
    f({1, 3, 5});

    // won't compile; can't deduce initializer_lists
    ft({1, 3, 5});
}