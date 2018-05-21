template<typename T>
struct X { X(T); };

template<class T>
bool operator==(X<T>, X<T>);  // non-member allows conversions, right?

bool zero(X<int> x) {return x==0;}  // error: deduction failed

struct Y{Y(int);};

bool operator==(Y, Y);

bool zero(Y y) {return y==0;}  // Ok
