#include "myfunc.h"

int MyClass::getA() const {
  return a;
}

int MyClass::getB() const {
  return b;
}

int& MyClass::getA() {
  return a;
}

int& MyClass::getB() {
  return b;
}

std::ostream& operator << (std::ostream& str, const MyClass& my) {
  str << "this class: (" << my.a << "); (" << my.b << ").";
  return str;
}