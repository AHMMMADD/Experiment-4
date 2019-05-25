#include<iostream>
#include<cmath>


using namespace std;


int option1(int x, int y)
{
	int a;
	 a= x + y;
	return a;
	
}

int option2(int x, int y)
{
	int b;
	 b= x - y;
	return b;
	
}
int option3(int x, int y)
{
	int c;
	 c= x * y;
	return c;
	
}
int option4(int x, int y)
{
	int d;
	 d= x / y;
	return d;
	
}
int option5(int x, int y)
{
	int e;
	e= x%y;
	return e;
}

int main()
{
	int choice, x , y,sum,diff,pro,quo, mod;
    char con;
    cout<< "MENU:" << endl;
    cout << "1. Add" << endl;
    cout <<"2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulus "<< endl;
	
do 
 {
 
	cout << " \nFrom 1-5, Please Enter Your Choice: " ;
	cin >>  choice ;
	
	if (choice==1)
	{
	cout<< "Enter your two numbers: " ;
	cin >>x >> y;
	sum = option1(x,y) ;
	cout << "The Sum of these two numbers is " << sum;
    }    
    else if (choice==2)
	{
	cout<< "Enter your two numbers: " ;
	cin >>x >> y;
	diff = option2(x,y) ;
	cout << "The difference of these two numbers is " << diff;
    }    
    else if (choice==3)
	{
	cout<< "Enter your two numbers: " ;
	cin >>x >> y;
	pro = option3(x,y) ;
	cout << "The product of these two numbers is " << pro;
    }    
    else if (choice==4)
	{
	cout<< "Enter your two numbers: " ;
	cin >>x >> y;
	quo = option4(x,y) ;
	cout << "The Quotient of these two numbers is " << quo;
    }    
    else if (choice ==5)
    {
    
	cout<< "Enter your two numbers: " ;
	cin >>x >> y;
	mod = option5(x,y) ;
	cout << "The remainder is " << mod;
	}
    else 
    {
	cout << "Ooops! You entered an invalid choice" ;
    }
    
   cout << endl;
   cout << "Do you want to continue? press 'y' if YES, press 'any key' if NO: ";
   cin >>  con;
   
}
 while (con== 'y' || con== 'Y');
    
    
	return 0;
	
}
