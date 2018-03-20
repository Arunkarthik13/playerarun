#include <iostream>
using namespace std;
int main() {
	string a;
	int i;
	cout<<"Enter the string:"<<endl;
	cin>>a;
	for(i=0;a[i]!='\0';i++)
	{
	    cout<<a[i];
	}
	cout<<".";
	return 0;
}
