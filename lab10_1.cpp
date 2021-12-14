#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan,rate,payment;
	cout << "Enter initial loan: ";
    cin >> loan;
	cout << "Enter interest rate per year (%): ";
    cin >> rate ;
	cout << "Enter amount you can pay per year: ";
    cin >> payment ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
    double Interest,Total,NewBalance;
    int i=1;
    do{
    Interest= (loan/100.0)*rate;
    Total=loan+Interest;
    NewBalance=Total-payment;
    cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
    if(payment > Total){
    payment=Total;
    cout << setw(13) << left << payment;
    NewBalance=Total-payment;
	cout << setw(13) << left << NewBalance;
    }
    else{
	cout << setw(13) << left << payment;
	cout << setw(13) << left << NewBalance;
    }
	cout << "\n";
    loan=NewBalance;
    if(loan <= 0){
        break;
    }
    i++;	
    }while(i);
	
	return 0;
}
