#include<iostream>
#include <map>
#include<vector>
using namespace std;

int main() {
	int n = 15;

	for (int i = 0; i <= n/2; i++)
	{
		for (int j = 0; j < (n / 2) - i; j++)
		{
			cout << ' ';
		}
		for (int k = 0; k < i; k++)
		{
			cout << '*';
		}
		for (int k = 0; k < i-1; k++)
		{
			cout << '*';
		}
		for (int j = 0; j < (n / 2) - i; j++)
		{
			cout << ' ';
		}
		cout << endl;
	}
	for (int i = n / 2-1; i>0;--i)
	{
		for (int j = 0; j < (n / 2) - i; j++)
		{
			cout << ' ';
		}
		for (int k = 0; k < i; k++)
		{
			cout << '*';
		}
		
		for (int k = 0; k < i-1; k++)
		{
			cout << '*';
		}
		for (int j = 0; j < (n / 2) - i; j++)
		{
			cout << ' ';
		}
		cout << endl;
	}

	
	return 0;
}