#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <cstdlib>
#include <vector>
#include <tuple>
#include <cmath>


using namespace msclr::interop;
using namespace std;

std::vector <int> strtovec(string str);
std::string vectostr(vector <int> vec);
std::vector <int> strtovecws(string str);
std::string vectostrws(vector <int> vec);
std::vector <int> exp(string a);
std::string pis(string a);
std::vector <int> shifr(vector <int> a, vector <int> b);
std::vector <int> shifrws(vector <int> a, vector <int> b);
std::vector <int> dis(vector <int> vec);

std::string pas1, pas2, pas3;

namespace encrypt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::ComponentModel::IContainer^ components;



	private:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(11, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(352, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(289, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 25);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Solve";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 34);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(351, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanget);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(351, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanget);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label1->Location = System::Drawing::Point(12, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 15);
			this->label1->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(208, 130);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 25);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Copy";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(12, 130);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(99, 17);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"without symbols";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(117, 130);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(84, 17);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"with symbols";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Enabled = false;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(21, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"ONLY numbers minimum 2, but preferably more";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->Enabled = false;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(21, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(295, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"ONLY letters (maybe symbols) minimum 3, but preferably more";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Window;
			this->label4->Enabled = false;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(21, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"any english letters or numbers (maybe symbols)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(384, 161);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Pass maker";
			this->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanget);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ pus1;
		String^ pus2;
		String^ pus3;
	private: System::Void textBox3_TextChanget(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "")
			this->label3->Text = L"ONLY letters (maybe symbols) minimum 3, but preferably more";
		else
			this->label3->Text = L"";
	}
	private: System::Void textBox2_TextChanget(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "")
			this->label2->Text = L"ONLY numbers minimum 2, but preferably more";
		else
			this->label2->Text = L"";
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")
			this->label4->Text = L"any english letters or numbers (maybe symbols)";
		else 
			this->label4->Text = L"";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		pus1 = textBox1->Text;
		pus2 = textBox2->Text;
		pus3 = textBox3->Text;
		msclr::interop::marshal_context context;
		pas1 = context.marshal_as<std::string>(pus1);
		pas2 = context.marshal_as<std::string>(pus2);
		pas3 = context.marshal_as<std::string>(pus3);
		if (radioButton1->Checked)
			label1->Text = (gcnew System::String(vectostr(shifr((shifr(strtovec(pas1), exp(pas2))), dis(strtovec(pis(pas3))))).c_str()));
		if (radioButton2->Checked)
			label1->Text = (gcnew System::String(vectostrws(shifrws((shifrws(strtovecws(pas1), exp(pas2))), dis(strtovecws(pis(pas3))))).c_str()));
		this->button2->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked)
			Clipboard::SetText((gcnew System::String(vectostr(shifr((shifr(strtovec(pas1), exp(pas2))), dis(strtovec(pis(pas3))))).c_str())), TextDataFormat::UnicodeText);
		if (radioButton2->Checked)
			Clipboard::SetText((gcnew System::String(vectostrws(shifrws((shifrws(strtovecws(pas1), exp(pas2))), dis(strtovecws(pis(pas3))))).c_str())), TextDataFormat::UnicodeText);
	}
};
}