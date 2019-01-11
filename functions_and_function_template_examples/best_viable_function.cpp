template<class T>
void f(T*);         // #1
template<class T>
void f(T**);        // #2

void g(int*);       // g ~ f<int>
void g(int**);      // and yet...

void h() {
  f<int>(nullptr);  // OK: calls #2
  g(nullptr);       // error: ambiguous
}

int main()
{}
