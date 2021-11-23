#include <iostream>
using namespace std;

int main(){
	cout<<"Wirda Diana Nesywa"<<endl;
	cout<<"2117051050"<<endl;
	cout<<"---------------------------"<<endl;
	
	double S;
	int V, t, a;
	
	cout<< "masukkan kecepatan    : "; cin>>V;
	cout<< "masukkan waktu tempuh : "; cin>>t;
	cout<< "masukkan percepatan   : "; cin>>a;
	
	cout<< t << endl;
	t = t*60;
	cout<< t << endl;
	S = V*t + 0.5*a*t*t;
	
	cout<<"jarak tempuh : " << S << endl;
}
