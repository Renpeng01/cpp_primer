#include <bitset>
#include <iostream>

int main0() {
  int a = -1;

  // 负数的二进制表示方法
  std::cout << sizeof(a) << std::endl;
  std::cout << std::bitset<sizeof(a) * 8>(a) << std::endl;

  int c = 3;
  std::cout << sizeof(c) << std::endl;
  std::cout << std::bitset<sizeof(c) * 8>(c) << std::endl;

  uint b = a;

  std::cout << b << std::endl;
  std::cout << std::bitset<sizeof(b) * 8>(b) << std::endl;

  unsigned char m = 1;
  std::cout << sizeof(m) << std::endl;
  std::cout << std::bitset<sizeof(m) * 8>(m) << std::endl;

  // 赋予无符号类型一个超出他表示范围的值时，结果是初始值对无符号类型表示总数取模后的余数
  int k = -1;
  m = k;
  std::cout << sizeof(m) << std::endl;
  std::cout << std::bitset<sizeof(m) * 8>(m) << std::endl;

  int result = 4294967295 % 256;
  std::cout << result << std::endl;

  return 0;
}

// 习题 2.3
int main1() {
  unsigned u = 10, u2 = 42;

  std::cout << u2 - u << std::endl; // 猜测值 32
  std::cout << u - u2 << std::endl; // 猜测值 32

  int a = -32;
  std::cout << std::bitset<sizeof(a) * 8>(a)
            << std::endl; // 11111111111111111111111111100000 对应的二进制为
                          // 4294967264

  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl;
  std::cout << i - i2 << std::endl;
  std::cout << i - u << std::endl;
  std::cout << u - i << std::endl;
  return 0;
}

// 变量初始化
int main2() {
  // int a = 1;
  // int b = {1};
  // int c{1};
  // int d(1);

  // std::cout << a << std::endl;
  // std::cout << b << std::endl;
  // std::cout << c << std::endl;
  // std::cout << d << std::endl;

  long double ld = 3.11111111;
  int e{ld}, b{ld}; // 错误 转换执行失败，因为存在丢失信息的风险
  int f(ld), g = ld; // 正确 执行转换，且信息丢失
}

// 习题2.9
int main() {
  long double ld = 3.11111111;
  int i{1.1111};
  return 0;
}