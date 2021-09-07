#include<iostream>
#include<vector>
#include"connect.h"
using namespace std;
void open(vector<account*>& vec, int balance, int pin)
{
	for (int i = 0; i < 100; i++)
	{
		if (vec[i]->accno == -1)
		{
			vec[i]->accno = 1000 + i + 1;
			cout << "You have been assigned the following account number: " << 1000 + i + 1 << endl;
			vec[i]->balance = balance; vec[i]->pin = pin;
			break;
		}
	}
}
