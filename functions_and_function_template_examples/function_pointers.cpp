struct X {};

void foo(X, X);
X make_foo();

template<typename T>
void bar(T, T);

template<typename T>
T make_bar();

int main()
{
  auto foo_ptr = &foo; // Ok
  auto make_foo_ptr = &make_foo; // Ok

//  auto bar_ptr = &bar; // Error
//  auto make_bar_ptr = &make_bar; // Error

  auto bar_ptr1 = &bar<X>;
  auto make_bar_ptr1 = &make_bar<X>;
  
  void (*bar_ptr2)(X, X) = &bar; // OK, template arguments deduced
}
