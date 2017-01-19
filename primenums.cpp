//Prime number finder
#include "iostream"
#include <math.h>
#define SIZE 102400000
int main() {
 int breakflag =0;
 int *known = new int[int(ceil(SIZE/log(SIZE)))];
 unsigned numknownprimes = 0;
 char *arry = new char[SIZE];
 for (int i = 0; i < SIZE; ++i)
 {
   arry[i] = 0;
 }
 unsigned int othercounter = 0;
 int counter = 2;
 int flag = 0;
 while (breakflag == 0)
 {
  std::cout << "Enter the prime number you want: " << std::endl;
  int i;
  std::cin >> i; 
  if ((std::cin.fail()))
  {
   breakflag = 1;
   std::cout << "by" << std::endl;
   return 0;
  }
  else
  {   
   //Check if in known already
   if(i<=numknownprimes)
   {
    std::cout << known[i-1] << std::endl;
   }
   else
   {
    while(flag != i)
    {
     if(arry[counter] == 0){
      known[othercounter] = counter;
      numknownprimes+=1;
      for (int x = 0; x < SIZE;x+=counter)
      {
       arry[x] = 1;
      }
      flag += 1;
      othercounter+=1;
      std::cout << counter << std::endl; 
     }
     counter+=1;
    }
   }  
   /*for(int j=0;j < numknownprimes;j++)
   {
    if (known[j] != 0)
     std::cout << known[j] << "  :" << j << std::endl; 
   }*/
   std::cout << "FINISHED... Enter another prime?" << std::endl;
  }
 }
}