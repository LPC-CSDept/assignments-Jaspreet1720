#ifndef NUMBERS_H_INCLUDED
#define NUMBERS_H_INCLUDED

class Numbers
{
  private:
  int size;
  int *numbers;

  public:
  Numbers();
  Numbers(int s);
  Numbers(const Numbers &);
  ~Numbers();

  int getMax() const;
  friend void printNumbers(Numbers n);
};

#endif