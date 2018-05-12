void f(char);
enum E { e };

void g(E t) {
  f(1); // f(char)
  f(t); // Error
}

void f(E);

void h() {
  g(e); // will cause <b>two</b> calls of f(char)
}
