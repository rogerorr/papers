void foo(int);

template<typename T>
void foo(T);

int main()
{
  foo(1); // Selects function
  foo<>(1); // Selects function template
}
