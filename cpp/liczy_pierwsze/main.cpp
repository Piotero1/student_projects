#include <iostream>

using namespace std;

int main(){
    int liczba(int n) {
	int wynik=1;
    if(n<2)
	wynik=0;
for(int i = 2; i * i <=n; i++; {
    if (n % i ==  0) {
	wynik = 0;
    break;
}
}

	return wynik;

}
