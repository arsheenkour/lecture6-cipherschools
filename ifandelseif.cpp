//using if-statement
#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"give 2 floating point numbers as input";
	cin>>a>>b

	if(a>0.01 && b>a)// 1 and 0 // the first statement is true and second statement is false
	{
		cout<<"the condition in if statement is correct";
	}
}

//using else statement
#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"give 2 floating point numbers as input";
	cin>>a>>b

	if(a>0.01 || b>a)// 1 and 0 // the first statement is true and second statement is false
	{
		cout<<"the condition in if statement is correct";
	}
	else
	{
		cout<<"the condition is false";
	}
}