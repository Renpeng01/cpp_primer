#include <iostream>

int main0() {
  std::cout << "11" << std::endl;

  // 在大多数系统中，main的返回值用来指示状态，0表示成功，非0表示失败
  return 0;
}

int main1() {
  std::cout << "Enter two numbers: " << std::endl;

  // 初始化一个变量，就是在变量创建的同时喂他赋予一个值
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;

  // std::endl 结束当前行，并将与设备关联的缓冲区中的内容刷到设备中
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2
            << std::endl;
  return 0;
}

int main2() {
  int sum = 0, val = 1;
  while (val <= 10) {
    sum += val;
    ++val;
  }
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  return 0;
}

int main3() {
  int sum = 0;
  for (int val = 1; val <= 10; ++val) {
    sum += val;
  }

  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  return 0;
}

int main() {
  int sum = 0, value = 0;

  // 当使用iostream作为条件时，其效果是检测流的状态，如果流是有效的，即为遇到错误，则检测成功。当遇到【文件结束符】，
  // 或遇到一个无效输入时，iostream对象的状态会变为无效
  // 从键盘输入文件描述符 unix(linux mac) ctrl + D
  while (std::cin >> value) {
    sum += value;
  }
  std::cout << "Sum is: " << sum << std::endl;
  return 0;
}