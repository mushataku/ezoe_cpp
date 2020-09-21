#include "all.h"

struct point{
  int x = 0;
  int y = 0;
};

int main(){

  // std::vector<point> ps;
  // int x,y;
  // while(std::cin >> x >> y){
  //   ps.push_back(point{x,y});
  // }

  // for(int i = 0; i < (int)ps.size(); i++) {
  //   std::cout << ps[i].x << ps[i].y << "\n";
  // }

  point s1{2,0};
  printf("%d %d\n", s1.x, s1.y);

  point s2 = s1;
  printf("%d %d\n", s2.x, s2.y);
}
