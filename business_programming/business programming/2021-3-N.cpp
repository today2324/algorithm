#include<iostream>
int main()
{
  int a;
  std::cin >> a;
  if(0>a || a>20){std::cout <<"오류";}
  std::cout << a-1;
}
