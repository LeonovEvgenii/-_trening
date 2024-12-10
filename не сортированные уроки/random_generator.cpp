#include <iostream>
#include <windows.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));

	while(1)
	{
		Sleep(1000);
		cout<<rand()%100-50<<endl;
	}

	cin.get();
}