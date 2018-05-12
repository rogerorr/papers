struct X {};

void foo(X arg = 42); // Error, even if default never used

template<typename T>
void bar(T arg = 42); // Ok

int main()
{
  X x;
  foo(x);
  bar(x);
  bar<X>(); // Error only if default used
}
