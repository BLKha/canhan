#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"nhap so n: ";
	cin>> n;
	cout<< "so chan"<< n <<"la:";
	for (int i = 1;i<= n;i++){
		if (i % 2 == 0){
			cout<<" "<< i;
		}
	}
	return 0;
}
