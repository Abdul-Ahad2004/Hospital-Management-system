#pragma once
#include<msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <string>
#include"Header2.h"

using namespace std;

namespace Windoform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for patient_update_box
	/// </summary>
	public ref class patient_update_box : public System::Windows::Forms::Form
	{
		String^ iid, ^ passs, ^ nname, ^ gender, ^ aaage, ^ disease, ^ medicine, ^ addr, ^ pho;
	private: System::Windows::Forms::Button^ button1;
	public:
		patient_update_box(string id, string pass, string name, string g, string age, string d, string m, string address, string phone)
		{
			InitializeComponent();

			iid = msclr::interop::marshal_as<System::String^>(id);
			passs = msclr::interop::marshal_as<System::String^>(pass);
			nname = msclr::interop::marshal_as<System::String^>(name);
			aaage = msclr::interop::marshal_as<System::String^>(age);
			addr = msclr::interop::marshal_as<System::String^>(address);
			pho = msclr::interop::marshal_as<System::String^>(phone);
			disease = msclr::interop::marshal_as<System::String^>(d);
			medicine = msclr::interop::marshal_as<System::String^>(m);
			gender = msclr::interop::marshal_as<System::String^>(g);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~patient_update_box()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ med;
	private: System::Windows::Forms::TextBox^ num;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ dis;
	private: System::Windows::Forms::TextBox^ add;
	private: System::Windows::Forms::TextBox^ pass;



	private: System::Windows::Forms::TextBox^ na;

	private: System::Windows::Forms::TextBox^ agee;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ Disease;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::TextBox^ gen;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->med = (gcnew System::Windows::Forms::TextBox());
			this->num = (gcnew System::Windows::Forms::TextBox());
			this->dis = (gcnew System::Windows::Forms::TextBox());
			this->add = (gcnew System::Windows::Forms::TextBox());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->na = (gcnew System::Windows::Forms::TextBox());
			this->agee = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Disease = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->gen = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// med
			// 
			this->med->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->med->Location = System::Drawing::Point(279, 422);
			this->med->Name = L"med";
			this->med->Size = System::Drawing::Size(249, 30);
			this->med->TabIndex = 37;
			this->med->TextChanged += gcnew System::EventHandler(this, &patient_update_box::med_TextChanged);
			// 
			// num
			// 
			this->num->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num->Location = System::Drawing::Point(279, 284);
			this->num->Name = L"num";
			this->num->Size = System::Drawing::Size(249, 30);
			this->num->TabIndex = 36;
			this->num->TextChanged += gcnew System::EventHandler(this, &patient_update_box::num_TextChanged);
			// 
			// dis
			// 
			this->dis->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dis->Location = System::Drawing::Point(279, 353);
			this->dis->Name = L"dis";
			this->dis->Size = System::Drawing::Size(249, 30);
			this->dis->TabIndex = 35;
			this->dis->TextChanged += gcnew System::EventHandler(this, &patient_update_box::dis_TextChanged);
			// 
			// add
			// 
			this->add->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->Location = System::Drawing::Point(279, 211);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(249, 30);
			this->add->TabIndex = 34;
			this->add->TextChanged += gcnew System::EventHandler(this, &patient_update_box::addd_TextChanged);
			// 
			// pass
			// 
			this->pass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->Location = System::Drawing::Point(279, 22);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(249, 30);
			this->pass->TabIndex = 33;
			this->pass->TextChanged += gcnew System::EventHandler(this, &patient_update_box::pass_TextChanged);
			// 
			// na
			// 
			this->na->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->na->Location = System::Drawing::Point(279, 80);
			this->na->Name = L"na";
			this->na->Size = System::Drawing::Size(249, 30);
			this->na->TabIndex = 32;
			this->na->TextChanged += gcnew System::EventHandler(this, &patient_update_box::na_TextChanged);
			// 
			// agee
			// 
			this->agee->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agee->Location = System::Drawing::Point(279, 144);
			this->agee->Name = L"agee";
			this->agee->Size = System::Drawing::Size(249, 30);
			this->agee->TabIndex = 31;
			this->agee->TextChanged += gcnew System::EventHandler(this, &patient_update_box::agee_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(80, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 38);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Name:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(80, 204);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 38);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Address:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(80, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 38);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Age:";
			// 
			// Disease
			// 
			this->Disease->AutoSize = true;
			this->Disease->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Disease->Location = System::Drawing::Point(80, 344);
			this->Disease->Name = L"Disease";
			this->Disease->Size = System::Drawing::Size(123, 38);
			this->Disease->TabIndex = 27;
			this->Disease->Text = L"Disease:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(80, 414);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 38);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Medicine:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(80, 275);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 38);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Contact No.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(80, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 38);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Password:";
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(80, 477);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(121, 38);
			this->label->TabIndex = 38;
			this->label->Text = L"Gender:";
			// 
			// gen
			// 
			this->gen->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gen->Location = System::Drawing::Point(279, 485);
			this->gen->Name = L"gen";
			this->gen->Size = System::Drawing::Size(249, 30);
			this->gen->TabIndex = 39;
			this->gen->TextChanged += gcnew System::EventHandler(this, &patient_update_box::gen_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(232, 541);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 45);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &patient_update_box::button1_Click);
			// 
			// patient_update_box
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(637, 634);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->gen);
			this->Controls->Add(this->label);
			this->Controls->Add(this->med);
			this->Controls->Add(this->num);
			this->Controls->Add(this->dis);
			this->Controls->Add(this->add);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->na);
			this->Controls->Add(this->agee);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Disease);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"patient_update_box";
			this->Text = L"patient_update_box";
			this->Load += gcnew System::EventHandler(this, &patient_update_box::Patient_UpdateBox_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void pass_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Patient_UpdateBox_Load(System::Object^ sender, System::EventArgs^ e)
	{


		pass->Text = passs;
		na->Text = nname;
		gen->Text = gender;
		agee->Text = aaage;

		dis->Text = disease;
		med->Text = medicine;
		add->Text = addr;
		num->Text = pho;
	}

	private: System::Void na_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void agee_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void addd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void num_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dis_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void med_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int count = 0, check2 = 0;
		bool flag = false;
		bool  flag2 = false;

		String^ v = gen->Text;
		string v1;
		v1 = msclr::interop::marshal_as<string>(v);


		String^ c6 = num->Text;
		string c1;
		c1 = msclr::interop::marshal_as<string>(c6);


		String^ c3 = agee->Text;
		string c4;
		c4 = msclr::interop::marshal_as<string>(c3);

		//number check
		for (int i = 0; c1[i] != '\0'; i++)
		{
			count++;
			if (int(c1[i]) < 48 || int(c1[i]) > 57) {
				flag = true;
			}

		}
		//age check

		for (int i = 0; c4[i] != '\0'; i++)
		{
			if (int(c4[i]) < 48 || int(c4[i]) > 57)
			{
				check2 = 1;
			}

		}

		//gen
		for (int i = 0; v1[i] != '\0'; i++)
		{
			if (v1 != "Male" && v1 != "male" && v1 != "female" && v1 != "Female")
			{
				flag2 = true;
			}

		}

		if (count < 11 || flag == true) {
			MessageBox::Show("Invalid Phone number (it must contain 11 digits and should be numeric only)! ");
			flag = false;
		}
		else if (check2 == 1) {
			MessageBox::Show("Invalid Age ! ");
		}
		else if (flag2) {
			MessageBox::Show("Invalid Gender ! ");
		}
		else {

			String^ id = iid;
			passs = pass->Text;
			String^ pass = passs;
			nname = na->Text;
			String^ name = nname;
			aaage = agee->Text;
			String^ agee = aaage;
			addr = add->Text;
			String^ add1 = addr;
			pho = num->Text;
			String^ phoo = pho;
			disease = dis->Text;
			String^ Dis = disease;
			medicine = med->Text;
			String^ medi = medicine;
			gender = gen->Text;
			String^ ge = gender;

			string a, b, c, d, e1, f, g, h, i;
			a = msclr::interop::marshal_as<string>(id);
			b = msclr::interop::marshal_as<string>(pass);
			c = msclr::interop::marshal_as<string>(name);
			d = msclr::interop::marshal_as<string>(ge);
			e1 = msclr::interop::marshal_as<string>(agee);
			f = msclr::interop::marshal_as<string>(Dis);
			g = msclr::interop::marshal_as<string>(medi);
			h = msclr::interop::marshal_as<string>(add1);
			i = msclr::interop::marshal_as<string>(phoo);

			Patient load;
			Patient* arr;
			load.load(arr);
			load.save(arr, a, b, c, d, e1, f, g, h, i);
			MessageBox::Show("Data Updated Successfully! ");
			this->Close();
		}
	}

	};
}
