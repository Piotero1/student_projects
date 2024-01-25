#include <iostream>

using namespace std;

int main(){

float trasa;
float spalanieA;
float spalanie;
float cena_litr;
float koszt;
float osoby;
float cena_osoby;
cout<<"podaj trase"<<endl;
cin>>trasa;
cout<<"podaj średnie spalanie: "<<endl;
cin>>spalanie;
cout<<"podaj cene za litr paliwa: "<<endl;
cin>>cena_litr;
cout<<"podaj ile osob jedzie w samochodzie: "<<endl;
cin>>osoby;

spalanieA = trasa*spalanie/100;
koszt = spalanieA*cena_litr;
cena_osoby = koszt/osoby;

cout<<"koszt za osobe to"<<cena_osoby<<endl;



	return 0;
}
