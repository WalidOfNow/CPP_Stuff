#include "MScholership.h"
#pragma once

namespace Alg_repo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MScholer_FirstInfo
	/// </summary>
	public ref class MScholer_FirstInfo : public System::Windows::Forms::Form
	{
	public:
		MScholer_FirstInfo(void)
		{
			InitializeComponent();
		    branches = gcnew array< int^ >(8);
			all = false;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MScholer_FirstInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Continue_Button;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;


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
			this->Continue_Button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Continue_Button
			// 
			this->Continue_Button->Enabled = false;
			this->Continue_Button->Location = System::Drawing::Point(124, 275);
			this->Continue_Button->Name = L"Continue_Button";
			this->Continue_Button->Size = System::Drawing::Size(100, 35);
			this->Continue_Button->TabIndex = 0;
			this->Continue_Button->Text = L"Continue";
			this->Continue_Button->UseVisualStyleBackColor = true;
			this->Continue_Button->Click += gcnew System::EventHandler(this, &MScholer_FirstInfo::Continue_Button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label1->ForeColor = System::Drawing::Color::LimeGreen;
			this->label1->Location = System::Drawing::Point(68, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Please Fill The Informations";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"Software Engineering", L"Information Systems", 
				L"Multimedia", L"Computer Networks", L"Web Applications", L"Knowledge Management", L"Cloud Computing", L"Semantic Web"});
			this->comboBox1->Location = System::Drawing::Point(220, 100);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(125, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MScholer_FirstInfo::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->label2->Location = System::Drawing::Point(1, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 14);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Choose Maximmum Student for :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(117, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(107, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MScholer_FirstInfo::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(12, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 14);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Maximmum Number of Students\r\n";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->label4->Location = System::Drawing::Point(69, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 14);
			this->label4->TabIndex = 7;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Crimson;
			this->label5->Location = System::Drawing::Point(1, 314);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(297, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Note : Continue Button won\'t be eanabled till all desires fiiled\r\n";
			// 
			// MScholer_FirstInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 336);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Continue_Button);
			this->Name = L"MScholer_FirstInfo";
			this->Text = L"Primary Informations";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public :  array< int^,1 >  ^branches;
	public :bool all;
	public : int  count;
	public : MScholership ^ F_MScholership;


			 
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				
				 label4->Text = "Max Number For " + System::Convert::ToString( this->comboBox1->SelectedItem);
				 textBox1->Visible = true;
				 textBox1->Text = "";

			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text  != ""){
							
			 branches[ this->comboBox1->SelectedIndex] = System::Convert::ToInt32(this->textBox1->Text);
				 
			 }
			 for (int i = 0; i < 8; i++)
				 {
					 if (!branches[i])
					 {
						all = false;
						break;
					 }
					 else
					 {
						all =true;
					 }
				 }
				 if (all)
				 {		 
					 for (int i = 0; i < 8; i++)
					 {
						count = count +  *branches[i];
					 }
					 label3->Visible = true;
					 label3->Text = "Maximmum Number of Students is :  " + System::Convert::ToString (count);
					 Continue_Button->Enabled = true;
					 
				 }
		 }
private: System::Void Continue_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 		F_MScholership = gcnew MScholership(branches,count);
					F_MScholership->Show();
					this->Close();
				
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
};
}
