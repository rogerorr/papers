struct T{};

void foo(T&& t); // rvalue reference

template <typename T>
void bar(T&& t); // forwarding reference

int main()
{
   T t{};
   foo(t); // Error, cannot bind rvalue ref to t
   bar(t); // Ok, reference collapse to T&
}
