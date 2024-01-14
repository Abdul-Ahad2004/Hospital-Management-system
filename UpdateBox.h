#pragma once
#include<msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <string>
#include"AddDocRec.h"

using namespace std;
namespace Windoform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateBox
	/// </summary>
	///

	
	public ref class UpdateBox : public System::Windows::Forms::Form
	{
		String^ iid, ^ passs, ^nname, ^aaage, ^addr,^ pho,^ qualif, ^sal;
	public:
		UpdateBox(string id,string pass,string name,string age,string address,string phone,string qual,string sa)
		{
			InitializeComponent();
			
			iid = msclr::interop::marshal_as<System::String^>(id);
			passs = msclr::interop::marshal_as<System::String^>(pass);
			nname = msclr::interop::marshal_as<System::String^>(name);
			aaage = msclr::interop::marshal_as<System::String^>(age);
			addr = msclr::interop::marshal_as<System::String^>(address);
			pho = msclr::interop::marshal_as<System::String^>(phone);
			qualif = msclr::interop::marshal_as<System::String^>(qual);
			sal = msclr::interop::marshal_as<System::String^>(sa);
			
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateBox()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ s;

	private: System::Windows::Forms::TextBox^ c;

	private: System::Windows::Forms::TextBox^ q;

	private: System::Windows::Forms::TextBox^ ad;

	private: System::Windows::Forms::TextBox^ p;
	private: System::Windows::Forms::TextBox^ n;
	private: System::Windows::Forms::TextBox^ age;





	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->s = (gcnew System::Windows::Forms::TextBox());
			this->c = (gcnew System::Windows::Forms::TextBox());
			this->q = (gcnew System::Windows::Forms::TextBox());
			this->ad = (gcnew System::Windows::Forms::TextBox());
			this->p = (gcnew System::Windows::Forms::TextBox());
			this->n = (gcnew System::Windows::Forms::TextBox());
			this->age = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 130);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 38);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Name:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 38);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Address:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 194);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 38);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Age:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 401);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(194, 38);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Qualification:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 470);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 38);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Salary:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 332);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 38);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Contact No.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 38);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Password:";
			// 
			// s
			// 
			this->s->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s->Location = System::Drawing::Point(212, 482);
			this->s->Name = L"s";
			this->s->Size = System::Drawing::Size(182, 30);
			this->s->TabIndex = 23;
			// 
			// c
			// 
			this->c->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->c->Location = System::Drawing::Point(212, 341);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(249, 30);
			this->c->TabIndex = 22;
			this->c->TextChanged += gcnew System::EventHandler(this, &UpdateBox::c_TextChanged);
			// 
			// q
			// 
			this->q->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->q->Location = System::Drawing::Point(212, 410);
			this->q->Name = L"q";
			this->q->Size = System::Drawing::Size(230, 30);
			this->q->TabIndex = 21;
			// 
			// ad
			// 
			this->ad->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ad->Location = System::Drawing::Point(212, 268);
			this->ad->Name = L"ad";
			this->ad->Size = System::Drawing::Size(278, 30);
			this->ad->TabIndex = 20;
			this->ad->TextChanged += gcnew System::EventHandler(this, &UpdateBox::Address_TextChanged);
			// 
			// p
			// 
			this->p->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p->Location = System::Drawing::Point(212, 78);
			this->p->Name = L"p";
			this->p->Size = System::Drawing::Size(182, 30);
			this->p->TabIndex = 19;
			// 
			// n
			// 
			this->n->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n->Location = System::Drawing::Point(212, 137);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(249, 30);
			this->n->TabIndex = 18;
			this->n->TextChanged += gcnew System::EventHandler(this, &UpdateBox::Namedoc_TextChanged);
			// 
			// age
			// 
			this->age->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age->Location = System::Drawing::Point(212, 201);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(182, 30);
			this->age->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(185, 556);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 45);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateBox::button1_Click);
			// 
			// UpdateBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 644);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->s);
			this->Controls->Add(this->c);
			this->Controls->Add(this->q);
			this->Controls->Add(this->ad);
			this->Controls->Add(this->p);
			this->Controls->Add(this->n);
			this->Controls->Add(this->age);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"UpdateBox";
			this->Text = L"UpdateBox";
			this->Load += gcnew System::EventHandler(this, &UpdateBox::UpdateBox_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Namedoc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Address_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void UpdateBox_Load(System::Object^ sender, System::EventArgs^ e) {
	
	
		p->Text = passs;
		n->Text = nname;
		age->Text = aaage;
		ad->Text = addr;
		c->Text = pho;
		q->Text = qualif;
		s->Text = sal;
	

	
	
}
private: System::Void d_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void c_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int count = 0, c2 = 0;
	bool flag = false;
	bool  flag2 = false;
	String^ v = s->Text;
	string v1;
	v1 = msclr::interop::marshal_as<string>(v);
	String^ c6 = c->Text;
	string c1;
	c1 = msclr::interop::marshal_as<string>(c6);
	String^ c3 = age->Text;
	string c4;
	c4 = msclr::interop::marshal_as<string>(c3);
	for (int i = 0; c1[i] != '\0'; i++)
	{
		count++;
		if (int(c1[i]) < 48 || int(c1[i]) > 57) {
			flag = true;
		}

	}
	for (int i = 0; c4[i] != '\0'; i++)
	{
		if (int(c4[i]) < 48 || int(c4[i]) > 57) {
			c2 = 1;
		}

	}
	for (int i = 0; v1[i] != '\0'; i++)
	{
		if (int(v1[i]) < 48 || int(v1[i]) > 57) {
			flag2=true;
		}

	}

	if (count < 11 || flag == true) {
		MessageBox::Show("Invalid Phone number (it must contain 11 digits and should be numeric only)! ");
		flag = false;
	}
	else if (c2 == 1) {
		MessageBox::Show("Invalid Age ! ");
	}
	else if (flag2) {
		MessageBox::Show("Invalid Salary ! ");
	}
	else {
		String^ id = iid;
		passs = p->Text;
		String^ pass = passs;
		nname = n->Text;
		String^ name = nname;
		aaage = age->Text;
		String^ agee = aaage;
		addr = ad->Text;
		String^ add1 = addr;
		pho = c->Text;
		String^ phoo = pho;
		qualif = q->Text;
		String^ qul = qualif;
		sal = s->Text;
		String^ sall = sal;
		string a, b, c, d, e1, f, g, h;
		a = msclr::interop::marshal_as<string>(id);
		b = msclr::interop::marshal_as<string>(pass);
		c = msclr::interop::marshal_as<string>(name);
		d = msclr::interop::marshal_as<string>(agee);
		e1 = msclr::interop::marshal_as<string>(add1);
		f = msclr::interop::marshal_as<string>(phoo);
		g = msclr::interop::marshal_as<string>(qul);
		h = msclr::interop::marshal_as<string>(sall);

		doc load;
		doc* arr;
		load.load(arr);
		load.save(arr, a, b, c, d, e1, f, g, h);
		MessageBox::Show("Data Updated Successfully! ");
		this->Close();
	}
}
};
}
