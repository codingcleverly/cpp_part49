#include <iostream>
using namespace std;
int main()
{
	//declaration and initialization (single line)                 
	int Grade[4][2][4];
	
	
	
	//inputting values
	
	for(int i = 0; i<4; i++)
	{
		cin>>Grade[i];
	}
	
	
	//output
	cout<<endl;
	for(int i = 0; i<4; i++)
	{
		cout<<Grade[i]<<endl;
	}
	
	
	
	char Letter1 = 'A';
	char Letter2 = 'B';
	
	return 0;
}
