#include<iostream>

using namespace std;

int main(){

int a,b,c;

cout<<"Masukkan 3 Angka! (dipisah dengan sepasi)";
cin>>a>>b>>c;

int terbesar;

if(a>=b && a>=c) {
terbesar=a;
}

else if (b>=a && b>=c)
{ terbesar=b;
}

else {
terbesar=c;
}

cout<<"Angka terbesar adalah: "<< terbesar << endl;

return 0;

}
