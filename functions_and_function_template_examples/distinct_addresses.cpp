#include <cassert>

template<class T>
void f(T&) { }// int i; T t = i; };

template<class T>
void g(T&) { int i; T t{i}; };

int main()
{
  assert(&f<int>!=&f<int&>);
  assert(&g<int>!=&g<int&>);
}