#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,peryear,Payment,total,NewBalance;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> peryear;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

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
	int i=1;
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while (true)
	{
		total=(loan*peryear*0.01)+loan;
		NewBalance=total-Payment;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << loan*peryear*0.01;
		cout << setw(13) << left << total;
		if (total<Payment)
		{
			cout << setw(13) << left << total;
			NewBalance=0;
		}else
		{
			cout << setw(13) << left << Payment;
		}
		cout << setw(13) << left << NewBalance;
		cout << "\n";
		loan=NewBalance;
		i++;
		if (NewBalance==0)
		{
			break;
		}	
	}
	
	
	
	return 0;
}
