/*#include<iostream>;
using namespace std;

int main(){
	int  n,i,j;
	cout <<"enter n:";
	cin >>n;
	
	for (int i=n;i>=j;i--){             //outer loop to control how much input
		for (int j=1;j<=i;j++){         //innner loop to control print more in star acc to inout
			cout <<"*";
		}
		cout<<endl;
	}
	
}*/

/*

#include <iostream>;
using namespace std;

int main(){
	int n,i,j;
	cout <<"enter n:";
	cin >>n;
	
	
	for (int i=n;i>=j;i--){
		for  (int j=1;j<=i;j++){
			cout << char('A' + j - 1) << " ";   /// char stores A as 65 and when loop continues it balnces with j-1
			
		}
		cout <<endl;
	}
	
}
*/
/*

#include <iostream>;
using namespace std;

int main(){
	int num=1,n;
	cout <<"enter number:";
	cin >>n;
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			cout <<num<<" ";
				num++	;		
		}
    cout<<endl;
	}
}
*/


/*
#include <iostream>;
using namespace std;

int main(){
	int n;
	bool found=false;
	cout <<"enter num:";
	cin >>n;
	
	for(int i=1;i*i*i<=n;i++){
		if(i*i*i==n){
			found=true;
		}
	}
	if (found){
		cout <<n;cout<<"is perfect cube";
		
	}else{
		cout <<n;cout <<"is not a perfect cube";
		
	}	
}
*/


//not done 

/*#include <iostream>
using namespace std;

int main()
{
    int n, rem, binary = 0, place = 1;

    cin >> n;

    while(n > 0)
    {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    cout << binary;

    return 0;
}
*/

/*#include <iostream>
using namespace std;

int main()
{
    int n;
    int f0 = 0, f1 = 1, f2;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << f0 << " " << f1 << " ";

    for(int i = 3; i <= n; i++)
    {
        f2 = f0 + f1;
        cout << f2 << " ";

        f0 = f1;
        f1 = f2;
    }

    return 0;
}*/



//count number of one in bits


/*
#include <iostream>;
using namespace std;

int main(){
	int bit,n,rem,count=0;
	cout <<"enter n:";
	cin >>n;
	
	while(n>0){
		rem=n%10;
		if (rem==1){
			count ++;
		}
		n=n/10;
	}
	cout <<count;
return 0;
}

*/


#include <iostream>;
using namespace std;

int main(){
	int a,b;
	cout <<"enter a";
	cin>>a;
	cout <<"enter b";
	cin>>b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout <<"a is:";
	cout<<a<<endl;
	cout <<"b is:";
	cout<<b<<endl;
return 0;
}



