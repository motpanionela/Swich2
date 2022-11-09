#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std; 
int main() {
	srand(time(0));
float num1,num2;
char operatie;
int sum,dif,pro,cat;

cout <<"***** Calculator  ***** "<< endl;

cin >> num1 >> operatie >> num2;

switch(operatie) {
 
	case 45: cout << num1 << operatie << num2<<" = "<<num1-num2 ; break;
	case 43: cout << num1 << operatie << num2<<" = "<<num1+num2 ; break;
	case 42: cout << num1 << operatie << num2<<" = "<< num1*num2; break;
	case 47: cout << num1 << operatie << num2<<" = "<<num1/num2 ; break;
	case '%':
		bool isnum1,isnum2;
	isnum1==((int ) num1 == num1);
	isnum2==((int ) num2 == num2);

if (isnum1 && isnum2){

cout << num1<< operatie << num2<< " = "<<(int)num1%(int)num2;
}

else {
	cout <<" NOT VALID";
	
} 
break;
}

	return 0;
}
