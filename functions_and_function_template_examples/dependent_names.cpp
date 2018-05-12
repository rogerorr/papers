#include <cstddef>

struct X {
  template<std::size_t> X* alloc();
  template<std::size_t> static X* adjust();
};

template<class T> void f(T* p) {
  T* p1 = p->alloc<200>(); // ill-formed: < means less than
  T* p2 = p->template alloc<200>(); // OK: < starts template argument list
}