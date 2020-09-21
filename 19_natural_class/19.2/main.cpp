#include "all.h"

struct fractional{
  int num;
  int denom;
  // コンストラクタ
  fractional(int num, int denom = 1) : num(num), denom(denom) {}
  void print(){
    printf("%d %d\n", num, denom);
  }
};
fractional operator +(fractional &l, fractional &r){
  if(l.denom == r.denom){
    return fractional{l.num + r.num, l.denom};
  }
  else{
    return fractional{l.num*r.denom + r.num*l.denom, l.denom*r.denom};
  }
}

fractional operator -(fractional &l, fractional &r){
  if(l.denom == r.denom){
    return fractional{l.num - r.num, l.denom};
  }
  else{
    return fractional{l.num*r.denom - r.num*l.denom, l.denom*r.denom};
  }
}
// 単項演算子
fractional operator -(fractional const &a){
  return fractional(-a.num, -a.denom);
}

int main(){
  fractional a{1,2};
  fractional b{1,3};

  auto c = a + b;
  c.print();

  auto d = -c;
  d.print();
  (-d).print(); // こんな書き方も可能
}
