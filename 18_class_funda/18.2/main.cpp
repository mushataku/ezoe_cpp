#include "all.h"

struct fractional{
  int num;
  int denom;

  void set(int num){
    // 名前が衝突しているので、この場合外の num は参照されず、変更されない
    // num = num;
    fractional::num = num;// どのスコープの num なのかを明示的に教える
    denom = 1;
  }

  void set(int num, int denom){
    fractional::num = num;
    fractional::denom = denom;
  }

  double value(){
    return static_cast<double>(num) / static_cast<double>(denom);
  }
};

int main(){
  fractional x;
  x.set(5);
  printf("%d %d\n", x.num, x.denom);
  x.set(9,8);
  printf("%d %d\n", x.num, x.denom);
}
