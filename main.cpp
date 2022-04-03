#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
using namespace std;
int x;
int y;
long wynik;
char wybor;
int main()
{while(true){

    cout << "podaj pierwsza liczba" << endl;
    cin >>x;
cout << " podaj druga liczba "<<endl;
cout <<"menu glowne" <<endl ;
cout << "************************" <<endl;
cout << "1. dodawanie" <<endl;
cout <<"2. odejmowanie" <<endl;
cout << "3. mnozenie" <<endl;
cout <<"4. dzielenie" <<endl;
cout <<"5. wyjdz" <<endl;
cout << "************************" <<endl;
cout << "wybierz opcje " << endl;
wynik=getch();
cout <<endl;
switch (wybor){
    case '1':{
        cout <<"suma= " << x + y;
    }
    break;
case '2':{
cout <<"suma = " << x-y;
}
break;
case '3':{
long wynik = x * y;
cout << "wynik to : "<< wynik <<endl;
}
case '4':{
    cout << x/y;
break;
case '5':{
    exit(0);
}
default :
    {

}
break;
}
}
getchar();
}
}
