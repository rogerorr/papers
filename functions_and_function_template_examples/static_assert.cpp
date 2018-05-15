void foo(int i)
{
  static_assert(sizeof(i) == 0); // Error
}

template<typename T>
void bar(T t)
{
  static_assert(sizeof(T) == 0); // Error *when instantiated*
}
