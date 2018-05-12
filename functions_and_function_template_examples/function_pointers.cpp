struct X {};

void foo(X, X);

template<typename T>
void bar(T, T);

int main()
{
  auto foo_ptr = &foo; // Ok
  void (*barX_ptr)(X, X) = &bar;

//  auto bar_ptr = &bar; // Error
}
