#pragma once

#include "Logic.h"
#include <msclr\marshal_cppstd.h>
#include <sstream>
using namespace std;

namespace SmarCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button_C;
	private: System::Windows::Forms::Button^ button_dyn;
	private: System::Windows::Forms::Button^ button_dia;
	private: System::Windows::Forms::Button^ button_epi;
	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_6;
	private: System::Windows::Forms::Button^ button_mion;
	private: System::Windows::Forms::Button^ button_3;
	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_riz;
	private: System::Windows::Forms::Button^ button_0;
	private: System::Windows::Forms::Button^ button_komma;
	private: System::Windows::Forms::Button^ button_ison;
	private: System::Windows::Forms::Button^ button_log;
	private: System::Windows::Forms::Button^ button_sin;
	private: System::Windows::Forms::Button^ button_cos;
	private: System::Windows::Forms::Button^ button_tan;
	private: System::Windows::Forms::Button^ button_cot;



	protected:


	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_C = (gcnew System::Windows::Forms::Button());
			this->button_dyn = (gcnew System::Windows::Forms::Button());
			this->button_dia = (gcnew System::Windows::Forms::Button());
			this->button_epi = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_mion = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_riz = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_komma = (gcnew System::Windows::Forms::Button());
			this->button_ison = (gcnew System::Windows::Forms::Button());
			this->button_log = (gcnew System::Windows::Forms::Button());
			this->button_sin = (gcnew System::Windows::Forms::Button());
			this->button_cos = (gcnew System::Windows::Forms::Button());
			this->button_tan = (gcnew System::Windows::Forms::Button());
			this->button_cot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(350, 47);
			this->textBox1->TabIndex = 0;
			// 
			// button_C
			// 
			this->button_C->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_C->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_C->Location = System::Drawing::Point(0, 45);
			this->button_C->Name = L"button_C";
			this->button_C->Size = System::Drawing::Size(85, 50);
			this->button_C->TabIndex = 1;
			this->button_C->Text = L"C";
			this->button_C->UseVisualStyleBackColor = false;
			this->button_C->Click += gcnew System::EventHandler(this, &MyForm::button_C_Click);
			// 
			// button_dyn
			// 
			this->button_dyn->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_dyn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_dyn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_dyn->Location = System::Drawing::Point(83, 45);
			this->button_dyn->Name = L"button_dyn";
			this->button_dyn->Size = System::Drawing::Size(86, 50);
			this->button_dyn->TabIndex = 2;
			this->button_dyn->Text = L"^";
			this->button_dyn->UseVisualStyleBackColor = false;
			this->button_dyn->Click += gcnew System::EventHandler(this, &MyForm::button_dyn_Click);
			// 
			// button_dia
			// 
			this->button_dia->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_dia->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_dia->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_dia->Location = System::Drawing::Point(168, 45);
			this->button_dia->Name = L"button_dia";
			this->button_dia->Size = System::Drawing::Size(91, 50);
			this->button_dia->TabIndex = 3;
			this->button_dia->Text = L"/";
			this->button_dia->UseVisualStyleBackColor = false;
			this->button_dia->Click += gcnew System::EventHandler(this, &MyForm::button_dia_Click);
			// 
			// button_epi
			// 
			this->button_epi->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_epi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_epi->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_epi->Location = System::Drawing::Point(257, 45);
			this->button_epi->Name = L"button_epi";
			this->button_epi->Size = System::Drawing::Size(93, 50);
			this->button_epi->TabIndex = 4;
			this->button_epi->Text = L"*";
			this->button_epi->UseVisualStyleBackColor = false;
			this->button_epi->Click += gcnew System::EventHandler(this, &MyForm::button_epi_Click);
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_7->Location = System::Drawing::Point(0, 94);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(85, 50);
			this->button_7->TabIndex = 5;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::button_7_Click);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_8->Location = System::Drawing::Point(83, 94);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(86, 50);
			this->button_8->TabIndex = 6;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MyForm::button_8_Click);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_9->Location = System::Drawing::Point(168, 94);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(91, 50);
			this->button_9->TabIndex = 7;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MyForm::button_9_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_plus->Location = System::Drawing::Point(257, 94);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(93, 50);
			this->button_plus->TabIndex = 8;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_4->Location = System::Drawing::Point(0, 143);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(85, 51);
			this->button_4->TabIndex = 9;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::button_4_Click);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_5->Location = System::Drawing::Point(83, 143);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(86, 51);
			this->button_5->TabIndex = 10;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::button_5_Click);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_6->Location = System::Drawing::Point(168, 143);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(91, 51);
			this->button_6->TabIndex = 11;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MyForm::button_6_Click);
			// 
			// button_mion
			// 
			this->button_mion->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_mion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_mion->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_mion->Location = System::Drawing::Point(257, 143);
			this->button_mion->Name = L"button_mion";
			this->button_mion->Size = System::Drawing::Size(93, 51);
			this->button_mion->TabIndex = 12;
			this->button_mion->Text = L"-";
			this->button_mion->UseVisualStyleBackColor = false;
			this->button_mion->Click += gcnew System::EventHandler(this, &MyForm::button_mion_Click);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_3->Location = System::Drawing::Point(0, 193);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(85, 55);
			this->button_3->TabIndex = 13;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MyForm::button_3_Click);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_2->Location = System::Drawing::Point(83, 193);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(86, 55);
			this->button_2->TabIndex = 14;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MyForm::button_2_Click);
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_1->Location = System::Drawing::Point(168, 193);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(91, 55);
			this->button_1->TabIndex = 15;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MyForm::button_1_Click);
			// 
			// button_riz
			// 
			this->button_riz->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_riz->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_riz->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_riz->Location = System::Drawing::Point(257, 193);
			this->button_riz->Name = L"button_riz";
			this->button_riz->Size = System::Drawing::Size(93, 55);
			this->button_riz->TabIndex = 16;
			this->button_riz->Text = L"sq";
			this->button_riz->UseVisualStyleBackColor = false;
			this->button_riz->Click += gcnew System::EventHandler(this, &MyForm::button_riz_Click);
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_0->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_0->Location = System::Drawing::Point(0, 246);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(85, 52);
			this->button_0->TabIndex = 17;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MyForm::button_0_Click);
			// 
			// button_komma
			// 
			this->button_komma->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_komma->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_komma->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_komma->Location = System::Drawing::Point(83, 246);
			this->button_komma->Name = L"button_komma";
			this->button_komma->Size = System::Drawing::Size(86, 52);
			this->button_komma->TabIndex = 18;
			this->button_komma->Text = L",";
			this->button_komma->UseVisualStyleBackColor = false;
			this->button_komma->Click += gcnew System::EventHandler(this, &MyForm::button_komma_Click);
			// 
			// button_ison
			// 
			this->button_ison->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_ison->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_ison->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ison->Location = System::Drawing::Point(168, 246);
			this->button_ison->Name = L"button_ison";
			this->button_ison->Size = System::Drawing::Size(91, 52);
			this->button_ison->TabIndex = 19;
			this->button_ison->Text = L"=";
			this->button_ison->UseVisualStyleBackColor = false;
			this->button_ison->Click += gcnew System::EventHandler(this, &MyForm::button_ison_Click);
			// 
			// button_log
			// 
			this->button_log->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_log->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_log->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_log->Location = System::Drawing::Point(257, 246);
			this->button_log->Name = L"button_log";
			this->button_log->Size = System::Drawing::Size(93, 52);
			this->button_log->TabIndex = 20;
			this->button_log->Text = L"log";
			this->button_log->UseVisualStyleBackColor = false;
			this->button_log->Click += gcnew System::EventHandler(this, &MyForm::button_log_Click);
			// 
			// button_sin
			// 
			this->button_sin->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_sin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_sin->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_sin->Location = System::Drawing::Point(0, 296);
			this->button_sin->Name = L"button_sin";
			this->button_sin->Size = System::Drawing::Size(85, 53);
			this->button_sin->TabIndex = 21;
			this->button_sin->Text = L"sin";
			this->button_sin->UseVisualStyleBackColor = false;
			this->button_sin->Click += gcnew System::EventHandler(this, &MyForm::button_sin_Click);
			// 
			// button_cos
			// 
			this->button_cos->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_cos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_cos->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cos->Location = System::Drawing::Point(83, 296);
			this->button_cos->Name = L"button_cos";
			this->button_cos->Size = System::Drawing::Size(86, 53);
			this->button_cos->TabIndex = 22;
			this->button_cos->Text = L"cos";
			this->button_cos->UseVisualStyleBackColor = false;
			this->button_cos->Click += gcnew System::EventHandler(this, &MyForm::button_cos_Click);
			// 
			// button_tan
			// 
			this->button_tan->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_tan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_tan->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_tan->Location = System::Drawing::Point(168, 296);
			this->button_tan->Name = L"button_tan";
			this->button_tan->Size = System::Drawing::Size(91, 53);
			this->button_tan->TabIndex = 23;
			this->button_tan->Text = L"tan";
			this->button_tan->UseVisualStyleBackColor = false;
			this->button_tan->Click += gcnew System::EventHandler(this, &MyForm::button_tan_Click);
			// 
			// button_cot
			// 
			this->button_cot->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_cot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_cot->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cot->Location = System::Drawing::Point(257, 296);
			this->button_cot->Name = L"button_cot";
			this->button_cot->Size = System::Drawing::Size(93, 53);
			this->button_cot->TabIndex = 24;
			this->button_cot->Text = L"cot";
			this->button_cot->UseVisualStyleBackColor = false;
			this->button_cot->Click += gcnew System::EventHandler(this, &MyForm::button_cot_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(349, 350);
			this->Controls->Add(this->button_cot);
			this->Controls->Add(this->button_tan);
			this->Controls->Add(this->button_cos);
			this->Controls->Add(this->button_sin);
			this->Controls->Add(this->button_log);
			this->Controls->Add(this->button_ison);
			this->Controls->Add(this->button_komma);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_riz);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_mion);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->button_epi);
			this->Controls->Add(this->button_dia);
			this->Controls->Add(this->button_dyn);
			this->Controls->Add(this->button_C);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "7";
}
/*       */
/*       */
/*       */
private: System::Void button_8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "8";
}
/*       */
/*       */
/*       */
private: System::Void button_9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "9";
}
/*       */
/*       */
/*       */
private: System::Void button_4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "4";
}
/*       */
/*       */
/*       */
private: System::Void button_5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "5";
}
/*       */
/*       */
/*       */
private: System::Void button_6_Click(System::Object^ sender, System::EventArgs^ e) {
		   textBox1->Text += "6";
	 }
/*       */
/*       */
/*       */
private: System::Void button_3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "3";
}
/*       */
/*       */
/*       */
private: System::Void button_2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "2";
}
/*       */
/*       */
/*       */
private: System::Void button_1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "1";
}
/*       */
/*       */
/*       */
private: System::Void button_0_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "0";
}
/*       */
/*       */
/*       */
private: System::Void button_C_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
}
/*       */
/*       */
/*       */
private: System::Void button_dyn_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += " ^ ";
}
/*       */
/*       */
/*       */
private: System::Void button_dia_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += " / ";
}
/*       */
/*       */
/*       */
private: System::Void button_epi_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += " * ";
}
/*       */
/*       */
/*       */
private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += " + ";
}
/*       */
/*       */
/*       */
private: System::Void button_mion_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += " - ";
}
/*       */
/*       */
/*       */
private: System::Void button_riz_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "sq ";
}
/*       */
/*       */
/*       */
private: System::Void button_log_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "log ";
}
/*       */
/*       */
/*       */
private: System::Void button_sin_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "sin ";
}
/*       */
/*       */
/*       */
private: System::Void button_cos_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "cos ";
}
/*       */
/*       */
/*       */
private: System::Void button_tan_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "tan ";
}
/*       */
/*       */
/*       */
private: System::Void button_cot_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "cot ";
}
/*       */
/*       */
/*       */
private: System::Void button_komma_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += ".";
}
/*       */
/*       */
/*       */
	private: System::Void button_ison_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(textBox1->Text)) return;

		std::string input = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::vector<std::string> v1;
		std::stringstream ss(input);
		std::string tokens;
		while (ss >> tokens) {
			v1.push_back(tokens);
		}

		vector<double> numbers;
		vector<string> op;

		for (int i = 0; i < v1.size(); i++) {
			if (isalpha(v1[i][0])) {
				if (i + 1 < v1.size()) {
					double temp = stod(v1[i + 1]);
					double result;

					if (v1[i] == "sin") {
						result = sin_num(temp * 3.14159265 / 180.0);
					}
					else if (v1[i] == "cos") {
						result = cos_num(temp * 3.14159265 / 180.0);
					}
					else if (v1[i] == "tan") {
						result = tan_num(temp * 3.14159265 / 180.0);
					}
					else if (v1[i] == "cot") {
						result = cot_num(temp * 3.14159265 / 180.0);
					}
					else if (v1[i] == "log") {
						result = log_num(temp);
					}
					else {
						result = sqrt_num(temp);
					}

					numbers.push_back(result);
					i++;
				}
			}
			else if (isdigit(v1[i][0]) || (v1[i].size() > 1 && isdigit(v1[i][0]))) {
				numbers.push_back(std::stod(v1[i]));
			}
			else {
				op.push_back(v1[i]);
			}
		}
			for (int k = 0; k < op.size(); k++) {
				if (op[k] == "^") {
					numbers[k] = dyn_num(numbers[k], numbers[k + 1]);
					numbers.erase(numbers.begin() + k + 1);
					op.erase(op.begin() + k);
					k--;
				}
			}

			for (int k = 0; k < op.size(); k++) {
				if (op[k] == "*") {
					numbers[k] = gin_num(numbers[k], numbers[k + 1]);
					numbers.erase(numbers.begin() + k + 1);
					op.erase(op.begin() + k);
					k--;
				}
				else if (op[k] == "/") {
					if (numbers[k + 1] != 0) {
						numbers[k] = div_num(numbers[k], numbers[k + 1]);
						numbers.erase(numbers.begin() + k + 1);
						op.erase(op.begin() + k);
						k--;
					}
				}
			}

			for (int k = 0; k < op.size(); k++) {
				if (op[k] == "+") {
					numbers[k] = sum_num(numbers[k], numbers[k + 1]);
					numbers.erase(numbers.begin() + k + 1);
					op.erase(op.begin() + k);
					k--;
				}
				else if (op[k] == "-") {
					numbers[k] = sub_num(numbers[k], numbers[k + 1]);
					numbers.erase(numbers.begin() + k + 1);
					op.erase(op.begin() + k);
					k--;
				}
			}
			if (!numbers.empty()) {
				double finalResult = numbers[0];
				textBox1->Text = System::Convert::ToString(finalResult);
			}
		}
};
}
