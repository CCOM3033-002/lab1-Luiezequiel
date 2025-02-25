/*
Lab 1: Box Office
Nombre: Luiezequiel Benitez Medero
Núm. Est: 801-24-7261
Colaboraciones: 
- tutor X,
- página web: [link]
*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


int main(){
// Proposito del programa
cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theather." << endl;

//variables
string movie = "Wheels of Fury";
double adult = 382, child = 127;

//Empezamos con el cout
/*cout << "\nEnter the name of the movie: ";
cin >> movie;

cout << "Enter the amount of adult tickets sold: ";
cin >> adult;

cout << "Enter the amount of child tickets sold";
cin >> child;*/

// Formulas y sus Calculos


double total_01 = adult * 10.0;
double total_02 = child * 6.0;

double gross;
gross = total_01 + total_02;

double net;
net = gross * 0.2;

double amount_paid;
amount_paid = gross - net;


// Respuesta
cout << "\nMovie Name:" << setw(18) << "\""<< movie << "\""<< endl;

cout << "Adult Tickets Sold:" << setw(14) << adult << endl;

cout << "Child Tickets Sold:" << setw(14) << child << endl;

cout << "Gross Box Office Profit:" << setw(5)<< "$" << setw(9) << setprecision(6) << showpoint << gross <<  endl;

cout << "Net Box Office Profit:" << setw(7)<< "$" << setw(9) << setprecision(5) << showpoint << net << endl;

cout << "Amount Paid to Distributor:" << setw(2) << "$" << setw(9) << setprecision(6) << showpoint << amount_paid << endl;








return 0;
}
