#include <iostream>
#include "exampleClass.hpp"

int main(int argc, char const *argv[]) {
  std::cout << "Hello, World!" << std::endl;

  auto exampleObj = Example();
  exampleObj.printMember();

  auto examplObjCopy(exampleObj);
  examplObjCopy.increaseMember();
  examplObjCopy.printMember();

  return 0;
}
