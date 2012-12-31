#include "Mscholer_Student_Structs.h"
#pragma once

namespace Alg_repo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MScholer_Finle
	/// </summary>
	public ref class MScholer_Finle : public System::Windows::Forms::Form
	{
	public: MScholer_Finle(array< Student^,1 > ^ SL,array< DersiresList^,1> ^ LS)
		{

			InitializeComponent();
			dataGridView1->RowCount = SL->Length;
			SLCount = SL->Length;
			bool inn;
			int accepted=0;
			int naccepted=0;
			array< int^,1 > ^ acceptedDesires = gcnew  array< int^,1 >(8);
			for (int i = 0; i < 8; i++)
			{
				acceptedDesires[i]=0;
			}


			for (int i = 0; i < SL->Length; i++)
			{
				inn = false;
				for (int j = 0; j < LS->Length; j++)
				{
					if (in(i,LS[j]))
					{
						dataGridView1[0,i]->Value = i+1;
						dataGridView1[1,i]->Value = SL[i]->Name;
						dataGridView1[2,i]->Value = SL[i]->FinalMark;
						dataGridView1[3,i]->Value = desireIndex(j);
						inn = true;
						accepted++;
						acceptedDesires[j]= *acceptedDesires[j]+1;
						break;
					}
					
				}
				if (!inn)
				{
										
						dataGridView1[0,i]->Value = i+1;
						dataGridView1[1,i]->Value = SL[i]->Name;
						dataGridView1[2,i]->Value = SL[i]->FinalMark;
						dataGridView1[3,i]->Value = "Faild";
						naccepted++;
				}
			}
			label3->Text = Convert::ToString((accepted*100)/SL->Length) + " %";
			label4->Text = Convert::ToString((naccepted*100)/SL->Length) + " %";

				label13->Text =Convert::ToString( ((*acceptedDesires[0])*100)/SL->Length) + " %";
				label14->Text =Convert::ToString( ((*acceptedDesires[1])*100)/SL->Length) + " %";
				label15->Text =Convert::ToString( ((*acceptedDesires[2])*100)/SL->Length) + " %";
				label16->Text =Convert::ToString( ((*acceptedDesires[3])*100)/SL->Length) + " %";
				label17->Text =Convert::ToString( (*acceptedDesires[4]*100)/SL->Length) + " %";
				label18->Text =Convert::ToString( (*acceptedDesires[5]*100)/SL->Length) + " %";
				label19->Text =Convert::ToString( (*acceptedDesires[6]*100)/SL->Length) + " %";
				label20->Text =Convert::ToString( (*acceptedDesires[7]*100)/SL->Length) + " %";
			

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MScholer_Finle()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 




	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;





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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->ColumnHeadersHeight = 25;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Column1, 
				this->Column2, this->Column3, this->Column4});
			this->dataGridView1->Location = System::Drawing::Point(214, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(427, 370);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Final Mark";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Final Result";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 150;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MScholer_Finle::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Accepted Students : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Not Accepted Students :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label3->ForeColor = System::Drawing::Color::ForestGreen;
			this->label3->Location = System::Drawing::Point(151, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 17);
			this->label3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(151, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(23, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 31);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Export to File";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MScholer_Finle::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Software Engineering";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Information Systems";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 134);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Multimedia";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 157);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Computer Networks";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 180);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Web Applications";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(25, 202);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(124, 13);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Knowledge Management";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(26, 225);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 13);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Cloud Computing";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 248);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 13);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Semantic Web";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(151, 86);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 16;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(151, 110);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 17;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(151, 134);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 18;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(151, 157);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 19;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(151, 180);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 20;
			this->label17->Text = L"label17";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(151, 202);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 21;
			this->label18->Text = L"label18";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(151, 225);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 22;
			this->label19->Text = L"label19";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(151, 248);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 23;
			this->label20->Text = L"label20";
			// 
			// MScholer_Finle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 414);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MScholer_Finle";
			this->Text = L"Final Result";
			this->Load += gcnew System::EventHandler(this, &MScholer_Finle::MScholer_Finle_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public : int SLCount;
		 private : String ^ desireIndex(int SL){
			   if (SL == 0)
			   {
				   return  Convert::ToString( "Software Engineering") ;
			   }else if (SL==1)
			   {
				   return Convert::ToString("Information Systems");
			   }else if(SL==2)
			   {
				   return Convert::ToString("Multimedia");
			   }else if(SL==3)
			   {
					return Convert::ToString("Computer Networks");
			   }else if(SL==4)
			   {
					return Convert::ToString("Web Applications");
			   }else if(SL==5)
			   {
				   return Convert::ToString("Knowledge Management");
			   }else if(SL==6)
			   {
				   return Convert::ToString("Cloud Computing");
			   }else if(SL==7)
			   {
				   return Convert::ToString("Semantic Web");
			   }   
				   }
		 private : bool in(int S,DersiresList ^LS){
					 DersiresList ^ temp = LS;
					 while (temp != nullptr)
					 {
							 if (temp->StudentID == S)
									 {
								 return true;
								}
							 
								temp = temp->Next;
							 }
					  return false;
					  }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			StreamWriter^ pwriter = gcnew StreamWriter("FinalResult.txt");
			for (int i = 0; i < SLCount; i++)
			{
				pwriter->Write(dataGridView1[0,i]->Value);
				pwriter->Write(" ");
				pwriter->Write(dataGridView1[1,i]->Value);
				pwriter->Write(" ");
				pwriter->Write(dataGridView1[2,i]->Value);
				pwriter->Write(" ");
				pwriter->WriteLine(dataGridView1[3,i]->Value);
				
			}
			pwriter->Close();
			MessageBox::Show("Data has been exported !");
		 }
private: System::Void MScholer_Finle_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
