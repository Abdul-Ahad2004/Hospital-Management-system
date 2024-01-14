#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Header1.h"
using namespace std;
class doc:public User {
public:
	string  qualification, salary;
public:
	doc() {
		name = "";
		ID = "";
		qualification = "";
		age = 0;
		phone_no = "";
		salary = "";
		password = "";
		address = "";
	}
	doc(string n,string id,string q,int a,string c,string s,string p,string ad) {
		name = n;
		id = id;
		qualification = q;
		age = a;
		phone_no = c;
		salary = s;
		password = p;
		address = ad;

	}
	bool load_data(doc*& arr,int size,string a) {
		ifstream obj; string b;
		obj.open("DoctorsInformation.txt");
			for (int i = 0; i < size; i++)
			{
				getline(obj, arr[i].ID, ',');

				getline(obj, arr[i].password, ',');
				getline(obj, arr[i].name, ',');
				getline(obj, b, ',');
				if (b != "") {
					arr[i].age = stoi(b);
				}
				getline(obj, arr[i].address, ',');
				getline(obj, arr[i].phone_no, ',');
				getline(obj, arr[i].qualification, ',');
				getline(obj, arr[i].salary, '\n');
			}
			for (int i = 0; i < size; i++)
			{
				if (a == arr[i].ID) {
					return false;
				}
			}
			return true;
		

	}
	void load(doc*&arr) {
		ifstream obj; string b,a;
		int counter=0;
		obj.open("DoctorsInformation.txt");
		while (getline(obj, a)) {
			counter++;
		}
		obj.close();
		arr = new doc[counter];
		obj.open("DoctorsInformation.txt");
		for (int i = 0; i < counter; i++)
		{
			getline(obj, arr[i].ID, ',');

			getline(obj, arr[i].password, ',');
			getline(obj, arr[i].name, ',');
			getline(obj, b, ',');
			if (b != "") {
				arr[i].age = stoi(b);
			}
			getline(obj, arr[i].address, ',');
			getline(obj, arr[i].phone_no, ',');
			getline(obj, arr[i].qualification, ',');
			getline(obj, arr[i].salary, '\n');
		}
		obj.close();
	}
	int getsize() {
		ifstream obj; string a;
		int counter = 0;
		obj.open("DoctorsInformation.txt");
		while (getline(obj, a)) {
			counter++;
		}
		obj.close();
		return counter;
	}
	void saveintofile(doc*& arr,int size) {
		ofstream obj;
		obj.open("DoctorsInformation.txt");
		for (int i = 0; i < size; i++)
		{
			obj<<arr[i].ID <<",";
			obj << arr[i].password << ",";
			obj << arr[i].name << ",";
			obj << arr[i].age << ",";
			obj << arr[i].address << ",";
			obj << arr[i].phone_no << ",";
			obj << arr[i].qualification << ",";
			obj << arr[i].salary << "\n";
		}
		obj.close();
		

	}
	void save(doc*&temp,string id,string p,string n,string age,string addr,string c,string q,string sa) {
		doc* arr;
		ifstream obj; string a;
		int counter = 0;
		obj.open("DoctorsInformation.txt");
		while (getline(obj, a)) {
			counter++;
		}
		obj.close();
		arr = new doc[counter];
		for (int i = 0; i < counter; i++)
		{
			if (id == temp[i].ID) {
				arr[i].ID = id;
				arr[i].password = p;
				arr[i].name = n;
				arr[i].age = stoi(age);
				arr[i].address = addr;
				arr[i].phone_no = c;
				arr[i].qualification = q;
				arr[i].salary = sa;
			}
			else {
				
				arr[i].ID = temp[i].ID;
					
				arr[i].password = temp[i].password;
				arr[i].name = temp[i].name;
					arr[i].age = temp[i].age;
					arr[i].address = temp[i].address;
					arr[i].phone_no = temp[i].phone_no;
					arr[i].qualification = temp[i].	qualification;
					arr[i].salary = temp[i].salary;		
				
			}

		}
		delete[]temp;
		temp = nullptr;
		temp = arr;
		obj.close();
		saveintofile(temp,counter);
	}
	int search(doc*&arr,int size,string id) {
		for (int i = 0; i < size; i++)
		{
			if (id == arr[i].ID) {
				return true;
			}
		}
		return false;
	}
	void deletedata(doc*&temp,string id) {
		doc* arr;
		ifstream obj; string a;
		int counter = 0,r=0;
		obj.open("DoctorsInformation.txt");
		while (getline(obj, a)) {
			counter++;
		}
		obj.close();
		arr = new doc[counter-1];
		for (int i = 0; i < counter; i++)
		{
			if (id == temp[i].ID) {
				continue;
			}
			else {

				arr[r].ID = temp[i].ID;

				arr[r].password = temp[i].password;
				arr[r].name = temp[i].name;
				arr[r].age = temp[i].age;
				arr[r].address = temp[i].address;
				arr[r].phone_no = temp[i].phone_no;
				arr[r].qualification = temp[i].qualification;
				arr[r].salary = temp[i].salary;
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
};