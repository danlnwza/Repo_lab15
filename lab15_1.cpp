#include <iostream>
using namespace std;

int main(){

	int a = 5;

	char b ='A';

	char &c = b; // ref c

	int *x = &a; //ptr x ชี้ไป a

	char *y = &b; //ptr y ชี้ไป b

	int **z = &x; //ptr z ชี้ไป ptr x ชี้ไป a

	// value
	cout << a << " " << b << " " << c << " "<< x << " " << (char **)y << " " << z ;
	cout <<endl;

	// address
	cout << &a << " " << (char **)&b << " " << (char **)&c << " " << &x << " " << &y << " " << &z ;
	cout <<endl;

	//เปลี่ยนค่า ref c ที่ชี้ไป b จาก A ไปเป็น F  
	c = 'F';
	cout << a << " " << b << " " << c << " "<< x << " " << (char **)y << " " << z ;
	cout <<endl;

	//เปลี่ยนค่า ptr y ที่ชี้ไป b จาก A ไปเป็น W
	*y = 'W';
	cout << a << " " << b << " " << c << " "<< x << " " << (char **)y << " " << z ;
	cout <<endl;

	//เปลี่ยนค่า ptr x ที่ชี้ไป a จาก 5 ไป 6
	*x = 6;
	cout << a << " " << b << " " << c << " "<< x << " " << (char **)y << " " << z ;
	cout <<endl;

	//เปลี่ยนค่า ptr z ที่ชี้ไป ptr x ที่ชี้ไป a จาก 5 ไป 7 
	**z = 7;
	cout << a << " " << b << " " << c << " "<< x << " " << (char **)y << " " << z ;
	cout <<endl;

	return 0;
	

}
