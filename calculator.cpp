#include "calculator.h"
#include <iostream>
using namespace std;

double calculator::calculate(double x, char sign, double y){
  switch(sign){
    
    case '+':
      return x+y;
    
    case '-':
      return x-y;
    
    case '*':
      return x*y;
    
    case '/':
      if(y == 0){
        cout <<"Hiçbir sayı sıfıra bölünmez!."<<endl;
        return 0;
      }else{
        return x/y;
      }

    default:
      cout<< "Lütfen geçerli bir işlem giriniz."<<endl;
      return 0;
      
    
  }
}