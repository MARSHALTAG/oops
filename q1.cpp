//q1


//#include<iostream>
//using namespace std;
//
//
//inline int cubeof(int);
//
//int  main(){
//	int n;
//	cout<<"enter n:";
//	cin>>n;
//	int res=cubeof(n);
//	cout<<res;
//	
//}
//
//inline int cubeof(int n){
//	if(n==0)
//		return 1;
//	return n*n*n;
//}

//#include<iostream>
//using namespace std;
//void palin(int n);
//
//int main(){
//	 int n;
//	 cout<<"enter no:";
//	 cin >>n;
//	 palin(n);
//}
//
// void palin(int n){
//	int rev=0,digit;
//	int original=n;
//	if(n==0)
//		return ;
//	while (n>0){
//	
//		digit=n%10;
//		rev=rev*10+digit;
//		n=n/10;
//	}
//	    if(rev==original)
//	    	cout<<"palindrome";
//	    else
//	    	cout<<"not palindrome";
//}
//


//q2
//#include <iostream>
//using namespace std;
//
//void swap(int &, int &);
//void swap(float &, float &);
//void swap(char &, char &);
//
//int main() {
//    int a, b;
//    float x, y;
//    char c, d;
//
//    cout << "Enter two integers: ";
//    cin >> a >> b;
//
//    swap(a, b);
//
//    cout << "After swapping integers: " << a << " " << b << endl;
//
//
//    cout << "Enter two floats: ";
//    cin >> x >> y;
//
//    swap(x, y);
//
//    cout << "After swapping floats: " << x << " " << y << endl;
//
//
//    cout << "Enter two characters: ";
//    cin >> c >> d;
//
//    swap(c, d);
//
//    cout << "After swapping characters: " << c << " " << d << endl;
//
//    return 0;
//}
//
//void swap(int &a, int &b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//void swap(float &a, float &b) {
//    float temp = a;
//    a = b;
//    b = temp;
//}
//
//void swap(char &a, char &b) {
//    char temp = a;
//    a = b;
//    b = temp;
//}



