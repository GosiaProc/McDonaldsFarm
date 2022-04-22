#include <iostream>

int main() {
  int x = 0 ;
  int area = 0;
  int areaMax = 0;
  int aMax = 0;
  int bMax = 0;
  std::string start;
  do{
    std::cout << "Enter RUN to start\n ";
    std::cin >> start;
  }while(start!="RUN");
  std::cout<<"HELP FOR UNCLE McDONALD\n";
  std::cout<<"Enter the number of fence segments\n";
  std::cin >> x;
  if (x>0)
  {
    std::cout<<"Length of fence: ";
    std::cout << x;
    int a = 1;
    while(a<=(x-2))
      {
        int b = x-(2*a);
        int area=a*b;
        if (area > areaMax)
        {
          areaMax=area;
          aMax=a;
          bMax=b;
        } 
        a++;
      }
   
        std::cout<<"\nThe optimal area of McDonalds farm\n";
        std::cout<< areaMax;
        std::cout<<"\nThe optimal a lenght\n";
        std::cout<< aMax;
        std::cout<<"\nThe optimal b lenght\n";
        std::cout<< bMax;
    }
  else
  {
    std::cout<<"Fence length must be positive integer\n";
  }
 
}