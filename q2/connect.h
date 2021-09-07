#ifndef Connector
#define Connector
#include<iostream>
using namespace std;
struct account {
	int accno = -1; double balance;
	int pin;
	account* next = NULL;
};
void printall(vector<account*>& vec);
void interest(vector<account*>& vec, int rate);
void close(vector<account*>& vec, int accno);
void open(vector<account*>& vec, int balance, int pin);
#endif
