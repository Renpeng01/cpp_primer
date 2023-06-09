#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main0() {
  std::string s;

  // 在执行读取操作时，string对象会自动忽略开头的空白（空格、制表符。换行符）
  // 并从第一个真正的字符开始读起，直到遇到限一次空白
  std::cin >> s;
  std::cout << "renpeng" << s << std::endl;
  return 0;
}

int main1() {
  std::string s;

  // while (std::cin >> s) { //
  // 如果流有效，也就是没有遇到文件结束标记或者非法输入
  //   std::cout << "renpeng " << s << std::endl;
  // }

  while (getline(
      std::cin,
      s)) { // getline 直到遇到换行符为止 （换行符也会被读进来 但是s不存换行符）
    std::cout << "renpeng " << s << std::endl;
  }
  return 0;
}

int main2() {
  std::string s("Hello World!!!!");
  decltype(s.size()) punct_cnt = 0;

  for (auto c : s) {
    if (std::ispunct(c)) {
      ++punct_cnt;
    }
  }

  std::cout << punct_cnt << std::endl;
  return 0;
}

int main3() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto &a : v) {
    std::cout << a << std::endl;
  }

  std::cout << "-----------" << std::endl;

  for (auto &a : v) {
    a *= a;
  }

  for (auto &a : v) {
    std::cout << a << std::endl;
  }

  return 0;
}

int main4() {
  int iap[] = {0, 2, 4, 6, 8};
  int i = *(iap + 2); // iap[2] = (ia + 2)
  std::cout << i << std::endl;
  return 0;
}

int main() {
  constexpr size_t row_cnt = 3, col_cnt = 4;
  int ia[row_cnt][col_cnt];

  size_t cnt = 0;
  for (auto &row : ia) {
    for (auto &col : row) {
      col = cnt;
      ++cnt;
    }
  }

  for (auto row : ia) {
    for (auto col : row) {
      std::cout << col << std::endl;
    }
  }
  return 0;
}