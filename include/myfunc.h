#pragma once
#include <ostream>

class MyClass {
  int a;
  int b;

public:
  MyClass(int a = 0, int b = 0):a(a),b(b){}
  int& getA();
  int& getB();
  
  int getA() const;
  int getB() const;
  
  friend std::ostream& operator << (std::ostream& str, const MyClass& my);
};