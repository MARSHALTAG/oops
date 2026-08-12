//q1
/*#include<iostream>;
using namespace std;


int main(){
	float a,b;
	cout <<"enter a";
	cin >>a;
	cout <<"enter b:";
	cin >>b;
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"a is:"<<a<<endl;
	cout<<"b  is:"<<b<<endl;

return 0;
}*/

//q2
/*#include<iostream>;
using namespace std;

int main(){
	float a,b,c;
	cout<<"enter a:";
	cin >>a;
	cout <<"enter b";
	cin >>b;
	cout <<"enter c:";
	cin >>c;
	
	if(a<=b && a<=c){
		cout << "a is smallest";
		
	}else if(b<=c && b<=a){
		cout <<"b is smallest";
	}else{
		cout <<"c is smallest";
	}
return 0;
}*/

//q3
/*#include<iostream>;
using namespace std;


int main(){
	float area1,area2,b,h,r;
	int choice;
	while (choice!=3){
	cout<< "enter u r choice";
	cin >>choice;


	switch(choice){
		case 1:
			cout <<"triangle";
			cout <<"enter b:";
			cin >>b;
			cout <<"enter h";
			cin >>h;
			area1=(0.5)*b*h;
			cout <<"area is";cout <<area1;
			break;
		case 2:
			cout <<"circle";
			cout <<"enter r:";
			cin >>r;
			area2=3.14*r*r;
			cout<<"area is";cout <<area2;
			break;
		
		default:
			cout <<"please enter valid input";
			exit;
	    }
	}
return 0;
}*/




//q4
/*#include <iostream>;
using namespace std;

int main(){
	int sec,min,hour;
	cout <<"enter time in sec:";
	cin >>sec;
	hour=sec/3600;
	sec=sec%3600;
	
	min=sec/60;
	sec=sec%60;
	
	cout <<"hour";cout<<hour<<endl;
	cout <<"min";cout<<min<<endl;
	cout <<"sec";cout <<sec<<endl;

return 0;
}*/


//q5

/*
#include <iostream>;
using namespace std;

int main(){
	int feet,inch,cm,mm;
	cout <<"enter mm:";
	cin >>mm;
	cm=mm/10;
	inch=cm/2.5;
	feet=inch/12;

	
	cout <<"feet:";cout <<feet;
	cout <<"inches:";cout<<inch;
	cout  <<"cm";cout <<cm;
	
return 0;
	
}*/


//q6
/*#include <iostream>
using namespace std;

int main() {
    float f, c;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;

    c = (f - 32) * 5 / 9;

    cout << "Celsius: " << c << endl;

    cout << "Enter temperature in Celsius: ";
    cin >> c;

    f = (c * 9 / 5) + 32;

    cout << "Fahrenheit: " << f << endl;

    return 0;
}
}
*/


//q7	
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float P, r, n, t, A, CI;

    cout << "Enter principal amount: ";
    cin >> P;

    cout << "Enter annual interest rate: ";
    cin >> r;

    cout << "Enter number of times interest is compounded: ";
    cin >> n;

    cout << "Enter time: ";
    cin >> t;

    r = r / 100;

    A = P * pow((1 + r / n), (n * t));

    CI = A - P;

    cout << "Amount: " << A << endl;
    cout << "Compound Interest: " << CI << endl;

    return 0;
}*/


//q8


#include <iostream>;
using namespace std;

int main(){
	string name;
	int regno,yoj,sem,m1,m2,m3,m4,m5,total;
	float avg;
	
	cout <<"\n enter name:\t";cin>>name;

	
	cout <<"\n enter regno:\t";cin>>regno;

	
	cout <<"\n enter yoj\t:";cin >>yoj;

	
	cout <<"\n enter sem\t:";cin >>sem;

	
	cout <<"\n enter m1\t:";cin >>m1;

	
	cout <<"\n enter m2\t:";cin >>m2;

	cout <<"\n enter m3\t:";cin >>m3;


	cout <<"\n enter m4\t:";cin >>m4;	


	cout <<"\n enter m5\t:";cin >>m5;

	
	total=m1+m2+m3+m4+m5;cout <<"\n";
	
	avg=total/5;
		cout<<name;cout <<"\n";
		cout<<regno;cout <<"\n";
		cout <<yoj;cout <<"\n";
		cout <<sem;cout <<"\n";
		
	if(avg>=90){
		cout <<"A"<<endl;
		
	}else if(avg>=80 && avg<=89){
		cout <<"B"<<endl;
		
	}else if(avg>=61 and avg<=79){
		cout <<"C"<<endl;
		
	}else if(avg>=51 and avg <=58){
		cout <<"D"<<endl;
		
	}else if (avg>=41 and avg<=49){
		cout <<"E"<<endl;
		
	}else {
		cout <<"fail"<<endl;
	}
}


