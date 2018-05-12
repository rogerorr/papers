struct X{};
struct Y : X {};

void foo(X, X);

template<typename T>
void bar(T, T);

int main()
{
  X x;
  Y y;
  foo(x, y); // Ok
  bar(x, y); // Error
}
