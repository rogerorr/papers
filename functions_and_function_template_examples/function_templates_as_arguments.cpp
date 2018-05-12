#include <iostream>

template<class T>
T f_template(const T& arg){
  return arg;
}
int f_int(const int& arg){
  return arg;
}
auto f_lambda = [](const int& arg){
  return arg;
};


template<class F, class T>
auto call_me(F f, const T& arg){
  return f(arg);
}

int main(int, char**){
  std::cout << call_me(f_int, 42) << "\n";            // works
  std::cout << call_me(f_lambda, 42) << "\n";     // works
  std::cout << call_me(f_template, 42) << "\n";   // doesn't work

}

// Writing a call_me function that accepts all three is beyond my ken.