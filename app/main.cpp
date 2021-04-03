#include <iostream>
#include <math.h>
using namespace std;


float dist3(float ux,float uy , float uz,float vx,float vy , float vz);


int main()
{

  cout << dist3(1,2,3,7,-4,5) << endl;
  cout << dist3(1,2,3,1,2,3) << endl;
  cout << dist3(1,2,3,3,-8,5);


}


float dist3(float ux,float uy , float uz,float vx,float vy , float vz )
{
  float x,y,z,result1,result2,result3,result_main;
  float list1[3] = {ux,uy,uz};
  float list2[3] = {vx,vy,vz};

  x = list1[0]-list2[0];
  y = list1[1] - list2[1];
  z = list1[2] - list2[2];
  result1 = pow(x,2);
  result2 = pow(y,2);
  result3 = pow(z,2);
  result_main = sqrt(result1+result2+result3);
  return result_main;

}
