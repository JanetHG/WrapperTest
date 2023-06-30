#include "mock.hpp"
#include "real.hpp"
#include "wrapper.hpp"
#include "wrapper_interface.hpp"

#include <iostream>

int main(int argc, char *argv[]) {

  int a = 5;
  int b = 6;

  Wrapper<Real> wrapperReal;
  int result = wrapperReal.Combine(a, b);
  std::cout << "Real Wrapper Result: " << result << std::endl;

  Wrapper<Mock> wrapperMock;
  result = wrapperMock.Combine(a, b);
  std::cout << "Mock Wrapper Result: " << result << std::endl;

  return 0;
}
