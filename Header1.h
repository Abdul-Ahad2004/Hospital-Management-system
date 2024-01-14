#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Patient;
int index;
class User
{
public:
	string ID;
	string name;
	string password;
	string phone_no;
	int age;
	string address;
	string prescription;

	User(string n = "", string p = "", string no = "", string ag = "", string id = "", string a = "")
	{
		name = n;
		password = p;
		phone_no = no;
		ID = id;
		if (ag == "")
			age = 0;
		else
			age = stoi(ag);
		address = a;
	}
	int loaddata(User*& arr, string n)
	{
		ifstream f1;
		f1.open(n + "\\login.txt");
		string s;
		int lines = 0;
		while (getline(f1, s))
			lines++;
		f1.close();
		arr = new User[lines];
		f1.open(n + "\\login.txt");
		for (int i = 0; i < lines; i++)
		{
			getline(f1, arr[i].ID, ',');

			getline(f1, arr[i].password, ',');
			getline(f1, s, '\n');
		}
		f1.close();
		return lines;
	}
	int loaddata1(User*& arr, string n)
	{
		ifstream f1;
		f1.open(n + "\\login.txt");
		string s;
		int lines = 0;
		while (getline(f1, s))
			lines++;
		f1.close();
		arr = new User[lines];
		f1.open(n + "\\login.txt");
		for (int i = 0; i < lines; i++)
		{
			getline(f1, arr[i].ID, ',');

			getline(f1, arr[i].password, ',');
			getline(f1, arr[i].name, ',');
			getline(f1, s, '\n');
		}
		f1.close();
		return lines;
	}
	int loaddata(User*& arr)
	{
		ifstream f1;
		f1.open("DoctorsInformation.txt");
		string s;
		int lines = 0;
		while (getline(f1, s))
			lines++;
		f1.close();
		arr = new User[lines];
		f1.open("DoctorsInformation.txt");
		for (int i = 0; i < lines; i++)
		{
			getline(f1, arr[i].ID, ',');

			getline(f1, arr[i].password, ',');
			getline(f1, s, '\n');
		}
		f1.close();
		return lines;
	}
	int searchdata(User*& arr, string ID, int l)
	{

		for (int i = 0; i < l; i++)
		{
			if (arr[i].ID == ID)
				return 1;
		}
		return 0;
	}
	int searchdata(User*& arr, string ID, string password, int l)
	{

		for (int i = 0; i < l; i++)
		{
			if (arr[i].ID == ID)
				if (arr[i].password == password)
					return 1;
		}
		return 0;
	}
	int searchdata1(User*& arr, string ID, string name, int l)
	{

		for (int i = 0; i < l; i++)
		{
			if (arr[i].ID == ID)
				if (arr[i].name == name)
					return 1;
		}
		return 0;
	}


};

class Appointment :public User
{
public:
	int date;
	int month;
	int year;
	string time;
	Appointment() :User()
	{
		date = 0;
		month = 0;
		year = 0;
		time = "";
	}
	virtual int loaddata(Appointment*& arr)
	{
		ifstream f1;
		f1.open("Appointment.txt");
		string s;
		int lines = 0;
		while (getline(f1, s))
			lines++;
		f1.close();
		arr = new Appointment[lines];
		f1.open("Appointment.txt");
		for (int i = 0; i < lines; i++)
		{
			getline(f1, arr[i].ID, ',');

			getline(f1, arr[i].name, ',');
			getline(f1, s, '-');
			arr[i].date = stoi(s);
			getline(f1, s, '-');
			arr[i].month = stoi(s);
			getline(f1, s, ',');
			arr[i].year = stoi(s);
			getline(f1, arr[i].time, '\n');

		}
		f1.close();
		return lines;
	}
	virtual int searchdata(Appointment*& arr, string ID, string name, string d, string m, string y, string t, int l)
	{

		for (int i = 0; i < l; i++)
		{
			if (arr[i].ID == ID && arr[i].name == name && arr[i].date == stoi(d) && arr[i].month == stoi(m) && arr[i].year == stoi(y) && arr[i].time == t)
				return 1;
		}
		return 0;
	}
	virtual int searchdata1(Appointment*& arr, string ID, string name, string d, string m, string y, string t, int l)
	{

		for (int i = 0; i < l; i++)
		{
			if (arr[i].ID == ID && arr[i].name == name && arr[i].date == stoi(d) && arr[i].month == stoi(m) && arr[i].year == stoi(y) && arr[i].time == t)
				return i;
		}
		return 0;
	}
	virtual int searchdata(Appointment*& arr, string ID, int l)
	{
		int count = 0;
		for (int i = 0; i < l; i++)
		{
			if (arr[i].ID == ID)
				count++;
		}
		return count;
	}
	virtual void returndata(Appointment*& arr, int l)
	{
		ofstream f2;
		f2.open("Appointment.txt");
		for (int i = 0; i < l; i++)
		{

			f2 << arr[i].ID << ",";

			f2 << arr[i].name << ",";

			f2 << arr[i].date << "-";

			f2 << arr[i].month << "-";

			f2 << arr[i].year << ",";

			f2 << arr[i].time << endl;
		}
	}
	virtual void deletedata(Appointment*& arr, int index, int& l)
	{
		for (int i = index; i < l - 1; i++)
		{
			arr[i].ID = arr[i + 1].ID;
			arr[i].name = arr[i + 1].name;
			arr[i].date = arr[i + 1].date;
			arr[i].month = arr[i + 1].month;
			arr[i].year = arr[i + 1].year;
			arr[i].time = arr[i + 1].time;
		}
		Appointment* arr1 = new Appointment[l - 1];
		for (int i = 0; i < l - 1; i++)
		{
			arr1[i].ID = arr[i].ID;
			arr1[i].name = arr[i].name;
			arr1[i].date = arr[i].date;
			arr1[i].month = arr[i].month;
			arr1[i].year = arr[i].year;
			arr1[i].time = arr[i].time;
		}
		l--;
		delete[]arr;
		arr = arr1;

	}

};
void setindex(int i)
{
	index = i;
}
int getindex()
{
	return index;
}
