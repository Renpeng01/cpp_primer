#include <iostream>
#include <string>

int main1() {
  std::string s;
  std::cin >> s;

  std::cout << s << std::endl;
  return 0;
}

int main2() {
  std::string s1, s2;
  std::cin >> s1 >> s2;

  std::cout << s1 << s2 << std::endl;
  return 0;
}

int main3() {
  std::string s1 = "hello";
  std::string s2 = s1 + "world";
  // std::string s3 = "hello" + "";

  std::string s4 = s1 + "," + "world";
  // std::string s5 = "hello" + "" + s1;

  // 数组
  unsigned cnt = 42;
  constexpr unsigned sz = 42;
  int arr[10];
  int *parr[10];

  std::string bad[cnt];
}

int main4() {
  int a[] = {0, 1, 2};
  // int a2 = a; // 错误
  // a2 = a; // 错误
}

int main5() {
  int arr[10];
  int *ptrs[10]; // ptrs 是含有10个整型指针的数组
  // int &ref[10];            // 错误 不存在引用的数组
  int(*Parray)[10] = &arr; // Parry 指向一个含有10个整数的数组
  int(&arrRef)[10] = arr;  // arrRef 引用一个含有10个整数的数组
}

int main6() {
  char ca[] = {'C', '+', '+'};
  std::cout << strlen(ca) << std::endl;
}

int main() {
  int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7};
  for (auto row : ia) {
    for (auto col : row) { // 无法编译，外层的for中
                           // row必须是引用，否则这里会被当做指针而无法编译
    }
  }
}

[map [range:map [lastActivity:map [gte:1696734334 lt:1699326334]]]]
    [map [range:map [lastActivity:map [gte:1696734334 lt:1699326334]]]]