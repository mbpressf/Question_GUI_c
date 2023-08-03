#pragma once

#include <iostream>
#include "MyForm2.h"

namespace Practick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	
	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(118, 235);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(109, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"YES";
			this->button1->UseMnemonic = false;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(124, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(448, 55);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ARE YOU SMART\?";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button2
			// 
			this->button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(451, 235);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(109, 100);
			this->button2->TabIndex = 2;
			this->button2->Text = L"NO";
			this->button2->UseMnemonic = false;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(692, 446);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Практика";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		unsigned short num1 = 40 + rand() % 11;
		unsigned short num2 = 40 + rand() % 11;

		unsigned short x = 1 + rand() % 7;
		x *= num1;
		unsigned short y = 3 + rand() % 5;
		y *= num2;

		cout << "Num1= " << num1 << " " << "Nun2= " << num2 << endl;
		cout << x << " " << y << endl;
		
		this->button1->Location = System::Drawing::Point(x, y);
		
		/*string x_chr = x;
		this->label1->Text = x_chr;*/
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2 obj;
		obj.ShowDialog();
	}
};
}
