template<class T>
auto f(const T&) {
  struct A {};
  return A{};
}

void g(short s) {
  auto a=f(s);
  a=f(s+1);      // error -- type mismatch
}
