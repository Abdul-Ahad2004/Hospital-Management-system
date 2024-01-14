#include<iostream>
#include<string>
#include<fstream>
#include"Header1.h"
#include"Header2.h"
using namespace std;
class result:public User {
public:
	string testname, result1;
	void loaddata1(result*& arr)
	{
		ifstream f1;
		f1.open("Report.txt");
		string s;
		int lines = 0;
		while (getline(f1, s))
			lines++;
		f1.close();
		arr = new result[lines];
		f1.open("Report.txt");
		for (int i = 0; i < lines; i++)
		{
			getline(f1, arr[i].ID, ',');

			getline(f1, arr[i].testname, ',');
			getline(f1, arr[i].result1, '\n');
		}
		f1.close();
	}
	void loaddata2(result*& arr)
	{
		ifstream f1;
		f1.open("prescription.txt");
		string s;
		int lines = 0;
		while (getline(f1, s))
			lines++;
		f1.close();
		arr = new result[lines];
		f1.open("prescription.txt");
		for (int i = 0; i < lines; i++)
		{
			getline(f1, arr[i].ID, ',');
			getline(f1, arr[i].result1, '\n');
		}
		f1.close();
	}
	int searchdata2(result*& arr, string ID)
	{
		int a = getsize2();
		for (int i = 0; i < a; i++)
		{
			if (arr[i].ID == ID)
				return 1;
		}
		return 0;
	}
	int getsize2() {
		ifstream obj; string a;
		int counter = 0;
		obj.open("prescription.txt");
		while (getline(obj, a)) {
			counter++;
		}
		obj.close();
		return counter;
	}
	int getsize() {
		ifstream obj; string a;
		int counter = 0;
		obj.open("Report.txt");
		while (getline(obj, a)) {
			counter++;
		}
		obj.close();
		return counter;
	}
	int searchdata1(result*& arr, string ID)
	{
		int a = getsize();
		for (int i = 0; i < a; i++)
		{
			if (arr[i].ID == ID)
				return 1;
		}
		return 0;
	}
};
