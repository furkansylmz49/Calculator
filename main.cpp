#include <iostream>
#include "calculator.h"
using namespace std;

int main(){
  double x,y;
  char sign,ctrl;

  cout << "Hesap makinesine hoş geldiniz."<<endl;
  calculator cal1;

  do{
    cout<<"Lütfen yapmak istediğiniz işlemi giriniz.";
    cin >> x >> sign >> y;
    cout << x << " " << sign << " " << y << " = " << cal1.calculate(x, sign, y)<<endl;

    cout << "Yapmak istediğiniz başka işlem varsa lütfen herhangi bir tuşa basınız."<<endl;
    cout << "Çıkış yapmak için (Q) tuşuna basınız"<<endl;
    cin >> ctrl;
    ctrl = toupper(ctrl);
    
  }while(ctrl != 'Q');    

  cout << "İşleminiz sonlamıştır teşekkürler.";
  
  return 0;
}