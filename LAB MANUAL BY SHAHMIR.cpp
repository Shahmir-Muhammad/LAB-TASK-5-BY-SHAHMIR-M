// TASK 1
//CONVERSION OF WHILE LOOP TO DO WHILE LOOP


/*
int x=1
do
{
	cout<<"enter number";
	cin>>x;

}
while(x>0);
*/




//TASK 2
//CALCULATOR

//MAKING CALCULATOR BY USING DO WHILE PROGRAM
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double x=0,y=0;
	char operation,again;
	do
	{
		cout<<"enter number:"<<endl;
		cin>>x;
		cout<<"enter operation"<<endl;
		cin>>operation;
		cout<<"enter number "<<endl;
		cin>>y;
		if ( operation == '+')
		cout<<"adding"<<x+y;
		else if (operation == '-')
		cout<<"substracting "<<x-y;
		else if (operation == '*')
		cout<<"multiplying "<<x*y;
		else if (operation == '/')
		cout<<"dividing "<<x/y;
		else if (operation =='^' )
		cout<<"x raise to power y "<<pow(x,y);
		else
		cout<<"invalid operation";
		cout << " Do you want to run it again :"<<endl;
		cin >> again;
				}
				while (again == 'y');
				return 0;
				}*/



//TASK 3 PART A
//SUM OF ALL EVEN NUMBERS BETWEEN 2 AND 100
				
/*

#include<iostream>
using namespace std;
int main(){
	int i = 2,sum=0;
	while(i<=100){
		if (i%2==0){
			sum = sum + i;
		}
	i++;}
	cout << "The sum of even numbers from 2 to 100 is : "<<sum<<endl;
return 0;}*/
/*


//TASK 3 PART B
// SUM OF ALL SQAURES BETWEEN 1 AND 100

#include<iostream>
using namespace std;
int main (){
	int i = 1;
	double power=1,sum=0;
	while(i<=100){
		power = i*i;
		sum = sum + power;
		i++;
	}
	cout << "The sum of squares from 1 to 100 is : "<<sum;
return 0;}




//TASK 4 PART A
// POWERS FROM 2^O TO 2^20


*/
/*#include<iostream>
using namespace std;
int main()
{
	int i=1;
	double sum = 1,power=1;
	while(i<=20){
		power = power*2;
		sum = sum + power;
		i++;
	}
	cout << "The sum of powers is : "<<sum ;
return 0;}*/




// TASK 4 PART B
//SUM OF ALL ODD NUMBERS BETWEEN A AND B



/*
#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0, sum = 0;
	cout<<"enter a :"<<endl;
	cin>>a;
	int c = a;
	cout<<"enter b :";
	cin>>b;
	while(a<=b){
		if(a%2!=0){
			sum = sum + a;
		}
		a++;
	}
cout << "The sum of all odd numbers between "<<c<<" and "<<b<<" is "<<sum<<endl;	
	
}*/
