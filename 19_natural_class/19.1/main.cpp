#include "all.h"

struct fractional{
  int num;
  int denom;

  // 初期化のためにコンストラクタを書く
  fractional(int num, int denom = 1) : num(num), denom(denom){}


  ~fractional(){
    // std::cout << "destructed: "s << num << "\n"s ;
  }
  void print(){
    printf("num:%d denom:%d\n", num, denom);
  }
  // 以下のように書くのと同じ
  // fractional(int num){
  //   fractional::num = num;
  //   denom = 1;
  // }
};

int main(){
  // fractional a = 1;
  // {
  //   fractional b = 2;
  // }
  // fractional c = 3;

  fractional a = 1;
  fractional b(1,2);
  fractional c{1,4};
  a.print();
  b.print();
  c.print();

  // 以下のように分数の足し算を自然に書きたい
  // fractional a = 3;
  // fractional b = a + a;
  // fractional a = a + b;
  // printf("%d %d\n", a.num, a.denom);
}
