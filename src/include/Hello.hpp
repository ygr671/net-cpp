#ifndef HELLO_HPP
#define HELLO_HPP

class Hello 
{
private:
  // Ctor
  Hello();
  // Dtor
  virtual ~Hello() = default;
public:
  static void salute();
};

#endif // HELLO_HPP
