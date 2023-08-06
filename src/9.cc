#include <iostream>
#include <string>

int main() {
  std::string numbers("0123456789"), name("r2d2");
  std::string dept("03714p3");
  auto index0 = numbers.find_first_of(name);
  auto index1 = name.find_first_of(numbers);

  auto index2 = dept.find_first_not_of(numbers);
  std::cout << index0 << std::endl;
  std::cout << index1 << std::endl;
  std::cout << index2 << std::endl;
  return 0;
}