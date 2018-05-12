void f(char);
enum E { e };

template<class T> void g(T t) {
  f(1); // f(char)
  f(t); // dependent
}

void f(E);

void h() {
  g(e); // will cause one call of f(char) followed by one call of f(E)
}
