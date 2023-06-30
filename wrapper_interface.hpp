#ifndef WRAPPEP_INTERFACE_HPP_
#define WRAPPEP_INTERFACE_HPP_

class WrapperInterface {
public:
  virtual int Combine(const int &a, const int &b) = 0;

  // virtual void Print() = 0;
};

#endif