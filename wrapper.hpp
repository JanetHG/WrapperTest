#ifndef WRAPPER_HPP_
#define WRAPPER_HPP_

#include "wrapper_interface.hpp"
template <typename WrapperType> class Wrapper : public WrapperInterface {
public:
  Wrapper() = default;

  ~Wrapper() = default;

  int Combine(const int &a, const int &b) override;

  // void Print() override;

private:
  WrapperType wrapperObject;
};

template <typename WrapperType>
int Wrapper<WrapperType>::Combine(const int &a, const int &b) {

  return wrapperObject.Combine(a, b);
}

#endif