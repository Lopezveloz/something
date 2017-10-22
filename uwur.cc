#include<iostream>
using namespacestd;
void main(){
int escala=1;
double k=1, c=1, f=1, temperatura=1;
cout<<"Pon tu Escala, 1 para Kelvin 2 Para Celsius o 3 Para Farenheit: ";
cin>>escala;
if (escala<=3){
if (escala>=1){
cout<<"\nOk porfavor pon la temperatura: ";
cin>>temperatura;
if (escala==1){
double k=temperatura, c=temperatura-273.15, f=c*1.8+32;
}
else if (escala==2){
double k=temperatura+273.15, c=temperatura, f=c*1.8+32;
}
else if (escala==3){
double c=temperatura*0.5555-32, f=temperatura, k=c+273.15;
}
cout<<"\nLas temperaturas son: ";
cout<<k;
cout<<"K, ";
cout<<c;
cout<<"°C, ";
cout<<f;
cout<<"°F.";
}
}
else {
cout<<"\nEl numero introducido no se pudo registrar, reinicie el programa.";
}
}
