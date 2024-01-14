#pragma once
#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Header1.h"
using namespace std;
class Patient;

class Patient :public User
{
public:
	string gender;
	string disease;
	string medicine;

public:
	Patient() :User()
	{
		gender = "";
		disease = "";
		medicine = "";


	}
	Patient(string n, string p, string no, string g, string age, string add, string id, string m, string d) :User(n, p, no, age, id, add)
	{
		gender = g;
		disease = d;
		medicine = m;

	}
	void load(Patient*& arr) {
		ifstream obj; string b, a;
		int counter = 0;
		obj.open("Patient\\login.txt");
		while (getline(obj, a)) {
			counter++;
		}
		obj.close();
		arr = new Patient[counter];
		obj.open("Patient\\login.txt");
		for (int i = 0; i < counter; i++)
		{
			getline(obj, arr[i].ID, ',');

			getline(obj, arr[i].password, ',');
			getline(obj, arr[i].name, ',');
			getline(obj, arr[i].gender, ',');
			getline(obj, b, ',');
			if (b != "") {
				arr[i].age = stoi(b);
			}
			getline(obj, arr[i].disease, ',');
			getline(obj, arr[i].medicine, ',');
			getline(obj, arr[i].address, ',');
			getline(obj, arr[i].phone_no, '\n');

		}
		obj.close();
	}
	void saveintofile(Patient*& arr, int size) {
		ofstream obj;
		obj.open("Patient\\login.txt");
		for (int i = 0; i < size; i++)
		{
			obj << arr[i].ID << ",";
			obj << arr[i].password << ",";
			obj << arr[i].name << ",";
			obj << arr[i].gender << ",";
			obj << arr[i].age << ",";
			obj << arr[i].disease << ",";
			obj << arr[i].medicine << ",";
			obj << arr[i].address << ",";
			obj << arr[i].phone_no << "\n";

		}
		obj.close();


	}
	void deletedata(Patient*& temp, string id) {
		Patient* arr;
		ifstream obj; string a;
		int counter = 0, r = 0;
		obj.open("Patient\\login.txt");
		while (getline(obj, a)) {
			counter++;
		}
		obj.close();
		arr = new Patient[counter - 1];
		for (int i = 0; i < counter; i++)
		{
			if (id == temp[i].ID) {
				continue;
			}
			else {

				arr[r].ID = temp[i].ID;
				arr[r].gender = temp[i].gender;
				arr[r].password = temp[i].password;
				arr[r].name = temp[i].name;
				arr[r].age = temp[i].age;
				arr[r].address = temp[i].address;
				arr[r].phone_no = temp[i].phone_no;
				arr[r].disease = temp[i].disease;
				arr[r].medicine = temp[i].medicine;
				r++;
			}

		}
		int k = counter - 1;
		delete[]temp;
		temp = nullptr;
		temp = arr;
		obj.close();
		saveintofile(temp, k);
	}
	void save(Patient*& temp, string id, string p, string n, string gen, string age, string dis, string med, string add, string con) {
		Patient* arr;
		ifstream obj; string a;
		int counter = 0;
		obj.open("Patient\\login.txt");
		while (getline(obj, a)) {
			counter++;
		}
		obj.close();
		arr = new Patient[counter];
		for (int i = 0; i < counter; i++)
		{
			if (id == temp[i].ID) {
				arr[i].ID = id;
				arr[i].password = p;
				arr[i].name = n;
				arr[i].age = stoi(age);
				arr[i].address = add;
				arr[i].phone_no = con;
				arr[i].gender = gen;
				arr[i].disease = dis;
				arr[i].medicine = med;
			}
			else {

				arr[i].ID = temp[i].ID;

				arr[i].password = temp[i].password;
				arr[i].name = temp[i].name;
				arr[i].age = temp[i].age;
				arr[i].address = temp[i].address;
				arr[i].phone_no = temp[i].phone_no;
				arr[i].disease = temp[i].disease;
				arr[i].medicine = temp[i].medicine;
				arr[i].gender = temp[i].gender;

			}

		}
		delete[]temp;
		temp = nullptr;
		temp = arr;
		obj.close();
		saveintofile(temp, counter);
	}
};
