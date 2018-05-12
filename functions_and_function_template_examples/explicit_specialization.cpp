template<typename T>
void bar(T);

template<>
void bar(double) {}

int main()
{
  bar(1.0);
}
