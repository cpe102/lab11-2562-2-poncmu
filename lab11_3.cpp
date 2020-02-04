#include<iostream>

using namespace std;

void mySwap (int &,int &); //Pass variables by references

int main(){
	int x = 6, y = 9;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	return 0;
}

void mySwap(int &x,int &y)
{
	int x1=x;
	int y1=y;
	x=y1;
	y=x1;
}
//Write function definition here
/*
??? mySwap (???){

}
*/
