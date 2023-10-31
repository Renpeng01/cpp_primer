#include <iostream>

// 当一个算数表达式中既有无符号又有int值是，那个int值就会转换成无符号数
int main1() {
  unsigned u = 10;
  int i = -42;
  std::cout << i + i << std::endl;
  std::cout << u + i << std::endl; // 相加前现将i转换成无符号数
}

int main2() {
  unsigned u = 10;
  unsigned i = 42;
  std::cout << u - i << std::endl;
  std::cout << i - u << std::endl; // 相加前现将i转换成无符号数
}

// 列表初始化
// int main3() {
//   long double ld = 1.111111111111;
//   int a{ld};
//   int b = {ld};
//   int c(ld);
//   int d = ld;
// }

int main3() {
  int a = 1;
  int &ref = a;
  std::cout << a << " " << ref << std::endl;
  int b = 2;
  ref = b;
  std::cout << a << " " << ref << std::endl;
}

int main() {
  double dval = 1.1111111;
  const int &ri = dval;
  std::cout << dval << " " << ri << std::endl;
  int &r = dval;
}
