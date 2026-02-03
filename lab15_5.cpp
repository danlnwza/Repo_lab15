#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *a,int *b,int *c,int *d){ //ptr. argu
	//กําหนด arr
	int arr[4] = {*a,*b,*c,*d};
	for(int i = 3;i > 0;i--){
		//สุ่มค่าตัวแปร
		int j =rand() % (i+1);
		//สลับค่าไปเรื่อยๆ
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	//เอาตัวแปรกลับใส่ ผ่าน ptr
	*a = arr[0];
	*b = arr[1];
	*c = arr[2];
	*d = arr[3];
}



