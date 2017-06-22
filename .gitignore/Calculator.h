//class to control the buttons and an user keyboard choices
#pragma once
#include"Operations.h"

namespace Project1
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		Char operation;
		Double number1;
		Double number2;
		String^ value;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  b1;
	private: System::Windows::Forms::Button^  b2;
	private: System::Windows::Forms::Button^  b3;
	private: System::Windows::Forms::Button^  b7;

	private: System::Windows::Forms::Button^  b6;

	private: System::Windows::Forms::Button^  b5;
	private: System::Windows::Forms::Button^  b9;


	private: System::Windows::Forms::Button^  b8;

	private: System::Windows::Forms::Button^  b4;
	private: System::Windows::Forms::Button^  b_a;


	private: System::Windows::Forms::Button^  b_s;

	private: System::Windows::Forms::Button^  b_m;


	private: System::Windows::Forms::Button^  b_p;


	private: System::Windows::Forms::Button^  b_f;


	private: System::Windows::Forms::TextBox^  Value;


	private: System::Windows::Forms::Button^  bC;
	private: System::Windows::Forms::Button^  b0;
	private: System::Windows::Forms::Button^  b_dot;
	private: System::Windows::Forms::Button^  b_v;

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
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b_a = (gcnew System::Windows::Forms::Button());
			this->b_s = (gcnew System::Windows::Forms::Button());
			this->b_m = (gcnew System::Windows::Forms::Button());
			this->b_p = (gcnew System::Windows::Forms::Button());
			this->b_f = (gcnew System::Windows::Forms::Button());
			this->Value = (gcnew System::Windows::Forms::TextBox());
			this->bC = (gcnew System::Windows::Forms::Button());
			this->b0 = (gcnew System::Windows::Forms::Button());
			this->b_dot = (gcnew System::Windows::Forms::Button());
			this->b_v = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// b1
			// 
			this->b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->b1->Location = System::Drawing::Point(14, 131);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(58, 39);
			this->b1->TabIndex = 1;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = true;
			this->b1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b1_MouseClick);
			// 
			// b2
			// 
			this->b2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b2->Location = System::Drawing::Point(78, 131);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(55, 39);
			this->b2->TabIndex = 2;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b1_MouseClick);
			// 
			// b3
			// 
			this->b3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b3->Location = System::Drawing::Point(138, 131);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(59, 39);
			this->b3->TabIndex = 3;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = true;
			this->b3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b1_MouseClick);
			// 
			// b7
			// 
			this->b7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b7->Location = System::Drawing::Point(13, 219);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(57, 41);
			this->b7->TabIndex = 4;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = true;
			this->b7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b1_MouseClick);
			// 
			// b6
			// 
			this->b6->Cursor = System::Windows::Forms::Cursors::Default;
			this->b6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b6->Location = System::Drawing::Point(138, 176);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(59, 38);
			this->b6->TabIndex = 5;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = true;
			this->b6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b1_MouseClick);
			// 
			// b5
			// 
			this->b5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b5->Location = System::Drawing::Point(78, 176);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(56, 38);
			this->b5->TabIndex = 6;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = true;
			this->b5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b1_MouseClick);
			// 
			// b9
			// 
			this->b9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b9->Location = System::Drawing::Point(138, 219);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(59, 41);
			this->b9->TabIndex = 7;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = true;
			this->b9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b1_MouseClick);
			// 
			// b8
			// 
			this->b8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b8->Location = System::Drawing::Point(77, 219);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(55, 41);
			this->b8->TabIndex = 8;
			this->b8->Text = L"8";
			this->b8->UseVisualStyleBackColor = true;
			this->b8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b1_MouseClick);
			// 
			// b4
			// 
			this->b4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b4->Location = System::Drawing::Point(14, 175);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(57, 38);
			this->b4->TabIndex = 9;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = true;
			this->b4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b1_MouseClick);
			// 
			// b_a
			// 
			this->b_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b_a->Location = System::Drawing::Point(225, 102);
			this->b_a->Name = L"b_a";
			this->b_a->Size = System::Drawing::Size(75, 23);
			this->b_a->TabIndex = 10;
			this->b_a->Text = L"+";
			this->b_a->UseVisualStyleBackColor = true;
			this->b_a->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b_a_MouseClick);
			// 
			// b_s
			// 
			this->b_s->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b_s->Location = System::Drawing::Point(225, 131);
			this->b_s->Name = L"b_s";
			this->b_s->Size = System::Drawing::Size(75, 23);
			this->b_s->TabIndex = 11;
			this->b_s->Text = L"-";
			this->b_s->UseVisualStyleBackColor = true;
			this->b_s->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b_a_MouseClick);
			// 
			// b_m
			// 
			this->b_m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b_m->Location = System::Drawing::Point(225, 162);
			this->b_m->Name = L"b_m";
			this->b_m->Size = System::Drawing::Size(75, 23);
			this->b_m->TabIndex = 12;
			this->b_m->Text = L"*";
			this->b_m->UseVisualStyleBackColor = true;
			this->b_m->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b_a_MouseClick);
			// 
			// b_p
			// 
			this->b_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b_p->Location = System::Drawing::Point(225, 191);
			this->b_p->Name = L"b_p";
			this->b_p->Size = System::Drawing::Size(75, 23);
			this->b_p->TabIndex = 13;
			this->b_p->Text = L"/";
			this->b_p->UseVisualStyleBackColor = true;
			this->b_p->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b_a_MouseClick);
			// 
			// b_f
			// 
			this->b_f->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b_f->Location = System::Drawing::Point(225, 220);
			this->b_f->Name = L"b_f";
			this->b_f->Size = System::Drawing::Size(75, 23);
			this->b_f->TabIndex = 14;
			this->b_f->Text = L"!";
			this->b_f->UseVisualStyleBackColor = true;
			this->b_f->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b_f_MouseClick);
			// 
			// Value
			// 
			this->Value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->Value->Location = System::Drawing::Point(29, 26);
			this->Value->Name = L"Value";
			this->Value->Size = System::Drawing::Size(271, 26);
			this->Value->TabIndex = 16;
			this->Value->Text = L"0";
			this->Value->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Value->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::Clear);
			this->Value->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Calculator::Value_KeyDown);
			// 
			// bC
			// 
			this->bC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->bC->Location = System::Drawing::Point(141, 79);
			this->bC->Name = L"bC";
			this->bC->Size = System::Drawing::Size(56, 38);
			this->bC->TabIndex = 17;
			this->bC->Text = L"C";
			this->bC->UseVisualStyleBackColor = true;
			this->bC->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::bC_MouseClick);
			// 
			// b0
			// 
			this->b0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b0->Location = System::Drawing::Point(13, 78);
			this->b0->Name = L"b0";
			this->b0->Size = System::Drawing::Size(58, 39);
			this->b0->TabIndex = 18;
			this->b0->Text = L"0";
			this->b0->UseVisualStyleBackColor = true;
			this->b0->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b1_MouseClick);
			// 
			// b_dot
			// 
			this->b_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b_dot->Location = System::Drawing::Point(77, 79);
			this->b_dot->Name = L"b_dot";
			this->b_dot->Size = System::Drawing::Size(55, 38);
			this->b_dot->TabIndex = 19;
			this->b_dot->Text = L",";
			this->b_dot->UseVisualStyleBackColor = true;
			this->b_dot->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b1_MouseClick);
			// 
			// b_v
			// 
			this->b_v->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->b_v->Location = System::Drawing::Point(225, 267);
			this->b_v->Name = L"b_v";
			this->b_v->Size = System::Drawing::Size(75, 23);
			this->b_v->TabIndex = 20;
			this->b_v->Text = L"=";
			this->b_v->UseVisualStyleBackColor = true;
			this->b_v->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::b_v_MouseClick);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 302);
			this->Controls->Add(this->b_v);
			this->Controls->Add(this->b_dot);
			this->Controls->Add(this->b0);
			this->Controls->Add(this->bC);
			this->Controls->Add(this->Value);
			this->Controls->Add(this->b_f);
			this->Controls->Add(this->b_p);
			this->Controls->Add(this->b_m);
			this->Controls->Add(this->b_s);
			this->Controls->Add(this->b_a);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			/*this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);*/
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//method to clear the Value text box by pressing the 'C' button
private: System::Void bC_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		 {
			 Value->Text="0";
		 }

//method to write numbers and dots in Value text box by pressing the buttons
private: System::Void b1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		 {
			 Button^ but = (Button^)sender;
			 String^ number=but->Text;
			  if(Value->Text=="0"&&number!=",")
				 Value->Text=number;
			 else
				 Value->Text+=number;
		 }

//method to choose the operation by pressing right buttons
private: System::Void b_a_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
		 {
			Button^ but = (Button^)sender;

			 number1 = Convert::ToDouble(Value->Text);
			 operation=but->Text[0];

			 Value->Text="";

		 }

//method to choose the factorial by pressing the button '!'
private: System::Void b_f_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		 {
			 
		     Button^ but = (Button^)sender;
			 
			 Double temp_number = Convert::ToDouble(Value->Text);
			 int number = temp_number;
			 operation=but->Text[0];
			 if(number!=temp_number)
			 {
				 MessageBox::Show("You can calculate factorial only from integer!");
				 Value->Text="0";
			 }
			 else
			 {
			 
			 Value->Text=Operations::factorial(number).ToString();
			 }

		 }

//method to calculate chosen operation by pressing the '=' button
private: System::Void b_v_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
		{
			double v;
			String^ text=Value->Text;
			 number2 = Convert::ToDouble(text);

			 switch(operation)
			 {
			 case '+':
				 v = Operations::adding(number1, number2);
				 break;
			 case '-':
				 v=Operations::subtraction(number1, number2);
				 break;
			 case '*':
				 v=Operations::multiplication(number1, number2);
				 break;
			 case '/':
				 v=Operations::partition(number1, number2);
				 break;
			 }

	
				 Value->Text = Convert::ToString(v);
		 }

//method that allows an user to write his own numbers on keyboard
private: System::Void Value_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{ 

	}

//method that clears the Value text box
private: System::Void Clear(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
    {
		Value->Text = "";
    }

}; 

}
