#include <iostream>
# include "MyTime.h"
using namespace std;

int main(){
MyTime t1, t2;
 int sclr;

cout << "[INPUT TWO TIMES AND A SCALAR]";

cout << ">>>";
  cin >> t1;

cout << ">>>";
  cin >> t2;

cout << ">>>";
  cin >> sclr;

cout<<"t1+t2="<< t1+t2 <<endl;
cout<<"t1-t2="<< t1-t2 <<endl;
cout<<"t1/scalar="<< t1/sclr <<endl;
cout<<"t1*scalar="<< t1*sclr<<endl;
if (t1 == t2){
     cout<< "t1 and t2 are the same"<<endl;
}
else {
     cout<< "t1 and t2 arent the same" <<endl;
}
if (t1 < t2){
     cout << "t1 is less than t2" << endl;
}
else {
     cout << "t2 is less than t1" << endl;
}
return (0);
}
