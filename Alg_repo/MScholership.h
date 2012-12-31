#include "Mscholer_Student_Structs.h"
#include "MScholer_Finle.h"
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
	/// Summary for MScholership
	/// </summary>
	public ref class MScholership : public System::Windows::Forms::Form
	{
	public:
		MScholership(array< int^,1 > ^b,int count)
		{
			InitializeComponent();
			Main_Title->Text = "You can add " + System::Convert::ToString(count) + "  Students";
			dataGridView1[0,0]->Value = 1;
			Desires = b;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MScholership()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Exit_Button;
	private: System::Windows::Forms::Label^  Main_Title;
	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;






	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column6;





















	protected: 

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
			this->Exit_Button = (gcnew System::Windows::Forms::Button());
			this->Main_Title = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Exit_Button
			// 
			this->Exit_Button->Location = System::Drawing::Point(704, 329);
			this->Exit_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Exit_Button->Name = L"Exit_Button";
			this->Exit_Button->Size = System::Drawing::Size(68, 26);
			this->Exit_Button->TabIndex = 0;
			this->Exit_Button->Text = L"Exit";
			this->Exit_Button->UseVisualStyleBackColor = true;
			this->Exit_Button->Click += gcnew System::EventHandler(this, &MScholership::Exit_Button_Click);
			// 
			// Main_Title
			// 
			this->Main_Title->AutoSize = true;
			this->Main_Title->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->Main_Title->ForeColor = System::Drawing::Color::Green;
			this->Main_Title->Location = System::Drawing::Point(12, 22);
			this->Main_Title->Name = L"Main_Title";
			this->Main_Title->Size = System::Drawing::Size(37, 19);
			this->Main_Title->TabIndex = 1;
			this->Main_Title->Text = L"Max";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->Column7, 
				this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6});
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(17, 131);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(667, 191);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MScholership::dataGridView1_CellContentClick);
			this->dataGridView1->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MScholership::dataGridView1_RowAdded);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(17, 64);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(342, 35);
			this->panel1->TabIndex = 5;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->radioButton2->Location = System::Drawing::Point(181, 9);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(154, 18);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Read Students from file";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MScholership::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->radioButton1->Location = System::Drawing::Point(14, 10);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(157, 18);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Enter Students manualy";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MScholership::radioButton1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(262, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Continue";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MScholership::button1_Click);
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"ID";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 40;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Name";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Average Marks";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 70;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Entrance Marks";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 70;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"1st desire";
			this->Column4->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"Software Engineering", L"Information Systems", 
				L"Multimedia", L"Computer Networks", L"Web Applications", L"Knowledge Management", L"Cloud Computing", L"Semantic Web"});
			this->Column4->Name = L"Column4";
			this->Column4->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column4->Width = 120;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"2nd desire";
			this->Column5->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"Software Engineering", L"Information Systems", 
				L"Multimedia", L"Computer Networks", L"Web Applications", L"Knowledge Management", L"Cloud Computing", L"Semantic Web"});
			this->Column5->Name = L"Column5";
			this->Column5->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column5->Width = 120;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"3rd desire";
			this->Column6->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"Software Engineering", L"Information Systems", 
				L"Multimedia", L"Computer Networks", L"Web Applications", L"Knowledge Management", L"Cloud Computing", L"Semantic Web"});
			this->Column6->Name = L"Column6";
			this->Column6->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column6->Width = 120;
			// 
			// MScholership
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 373);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Main_Title);
			this->Controls->Add(this->Exit_Button);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MScholership";
			this->Text = L"Masters Scholership";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public : bool HB;
	public:  array< bool^,1 >  ^ HelpingCompletingOfDesires;
	public :  array< DersiresList^,1 >  ^ FinalWatchlist;
	public :  array< Student^,1 >  ^ StudentsList;
	public :	int B;
	public : MScholer_Finle ^F_Mscholer_final;
	public :array< int^,1 > ^Desires;
private : double finalmark(int a, int b){
				return (a+b)/2.0;		
			}
private :bool CompletingOfDesire( DersiresList ^ LS,int ^ Desire)
	{
	int i = 0;
	DersiresList ^ Temp = LS;

	while ( Temp != nullptr ) {
		i++;
		Temp = Temp -> Next;
	}

	if ( i < *Desire )
		return false;
	else
		return true;
	}
private :void DeleteElem ( DersiresList ^LS, int Elem )
{
	DersiresList ^ P, ^ Q;

	if ( LS != nullptr ) {

		P = LS;
		Q = LS;

		while ( P != nullptr && P -> StudentID != Elem ) {

			Q = P;
			P = P -> Next;
		}

		if ( P == LS ) {

			LS = P -> Next;
		}
		else
			if ( P != nullptr && P -> StudentID == Elem ) {

				Q -> Next = P -> Next;
				P = nullptr;
			}
	}
}
private :bool FindLowerElem(array< Student^,1 > ^ SL,DersiresList ^ LS, int Elem, int & NewElem )
{
	DersiresList ^ Temp = LS;

	while ( Temp != nullptr ) {

		if ( SL[Temp -> StudentID]->FinalMark < SL[Elem]->FinalMark ) {
			NewElem = Temp -> StudentID;
			return true;
		}

		Temp = Temp -> Next; 
	}

	NewElem = -1;
	return false;
}
private :bool FindEqualElem( array< Student^,1 >  ^ SL, DersiresList ^ LS, int Elem, int & NewElem )
{
	DersiresList ^ Temp = LS;

	while ( Temp != nullptr ) {

		if ( SL[Temp -> StudentID]->FinalMark == SL[Elem]->FinalMark ) {
			NewElem = Temp -> StudentID;
			return true;
		}

		Temp = Temp -> Next; 
	}

	NewElem = -1;
	return false;
}
private :void InsertElem(int I, int D )
{
	DersiresList ^ Temp = FinalWatchlist[D];

	if ( FinalWatchlist[D] == nullptr ) {
		FinalWatchlist[D] = gcnew DersiresList();
		FinalWatchlist[D] -> StudentID = I;
		FinalWatchlist[D] -> Next = nullptr;
	}
	else {

		while ( Temp -> Next != nullptr )
			Temp = Temp -> Next; 

		Temp -> Next = gcnew DersiresList();
		Temp -> Next -> StudentID  = I;
		Temp -> Next -> Next = nullptr;
	}
}
private :void Trying( int I, array< Student^,1 >  ^ SL, int N )
{
	int H;
	HB = false;
	B = I;

	if ( I < N ) {

		if ( !SL[I]->IsCompleted ) {

			for ( int i = 0 ; i < 3 ; i++ ) {

				if ( ( !CompletingOfDesire( FinalWatchlist[* SL[I]->Watchlist[i] ],Desires[* SL[I]->Watchlist[i]] ) ) && ( !*HelpingCompletingOfDesires[* SL[I]->Watchlist[i] ]) ) {

					InsertElem(I, *SL[I]->Watchlist[i] );
					SL[I]->IsCompleted = true;
					break;
				}

				else if ( ( !*HelpingCompletingOfDesires[* SL[I]->Watchlist[i] ] ) && ( ( FindLowerElem( SL, FinalWatchlist[* SL[I]->Watchlist[i] ], I, H ) ) || ( FindEqualElem( SL, FinalWatchlist[* SL[I]->Watchlist[i] ], I, H ) ) ) ) {

						

						if (  FindLowerElem( SL, FinalWatchlist[ *SL[I]->Watchlist[i] ], I, H ) ) {
							DeleteElem( FinalWatchlist[ *SL[I]->Watchlist[i] ], H );
							SL[H]->IsCompleted = false;
							InsertElem( I, *SL[I]->Watchlist[i] );
							SL[I]->IsCompleted = true;
							B = H;
							HB = true;
							break;
						}
						while ( FindEqualElem( SL, FinalWatchlist[ *SL[I]->Watchlist[i] ], I, H ) )  {

							DeleteElem( FinalWatchlist[* SL[I]->Watchlist[i] ], H );
							SL[H]->IsCompleted = false;
							HelpingCompletingOfDesires[* SL[I]->Watchlist[i] ] = true;

							if ( H < B )
								B = H;

							HB = true;
						}
					}

					if ( HB )
						break;
			}
		}

		if ( !HB )
			B++;

		Trying( B, SL, N);
	}
}
private : int desireIndex(String ^ SL){
			   if (SL == "Software Engineering")
			   {
				   return 0;
			   }else if (SL=="Information Systems")
			   {
				   return 1;
			   }else if(SL=="Multimedia")
			   {
				   return 2;
			   }else if(SL=="Computer Networks")
			   {
					return 3;
			   }else if(SL=="Web Applications")
			   {
					return 4;
			   }else if(SL=="Knowledge Management")
			   {
				   return 5;
			   }else if(SL=="Cloud Computing")
			   {
				   return 6;
			   }else if(SL=="Semantic Web")
			   {
				   return 7;
			   }else
			   {
				   return -1;
			   }
			  
			   
				   }


private: System::Void Exit_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
			 }


private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			//label1->Show();
			//->Show();
			 dataGridView1->Enabled = true;
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		 if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
			{
			    String^ str = openFileDialog1->FileName; //get the path of the selected file
				 StreamReader ^myStream = gcnew StreamReader(str);
				 int count =0;
				 while(!myStream->EndOfStream){
					   String^ line = myStream->ReadLine();
					   dataGridView1[0,count]->Value = Convert::ToInt32(line);
					    line = myStream->ReadLine();
					   dataGridView1[1,count]->Value = line;
					    line = myStream->ReadLine();
					   dataGridView1[2,count]->Value = Convert::ToInt32(line);
					    line = myStream->ReadLine();
					   dataGridView1[3,count]->Value = Convert::ToInt32(line);
					   line = myStream->ReadLine();
					   dataGridView1[4,count]->Value = line;
					    line = myStream->ReadLine();
					   dataGridView1[5,count]->Value = line;
					    line = myStream->ReadLine();
					   dataGridView1[6,count]->Value = line;
					   count++;
						 }
					 myStream->Close();
			}
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		HelpingCompletingOfDesires = gcnew array< bool^,1 >(8); 
		FinalWatchlist = gcnew array< DersiresList^,1 >(8);
		for ( int i = 0 ; i < 8 ; i++ ){
			HelpingCompletingOfDesires[i] = false;
		}

		for ( int i = 0 ; i < 8 ; i++ ){
			FinalWatchlist[i] = nullptr;
		}
		StudentsList = gcnew array< Student^,1 >(dataGridView1->RowCount-1);
		for (int i = 0; i < StudentsList->Length; i++)
		{
			StudentsList[i]= gcnew Student();
		}
		 
		 for (int i = 0; i <dataGridView1->RowCount-1; i++)
		 {
			 StudentsList[i]->FinalMark = finalmark(Convert::ToInt32(dataGridView1[2,i]->Value),Convert::ToInt32(dataGridView1[3,i]->Value));
			 StudentsList[i]->StudentID = i;
			 StudentsList[i]->Name = Convert::ToString( dataGridView1[1,i]->FormattedValue);
			 StudentsList[i]->Watchlist[0] = desireIndex(Convert::ToString( dataGridView1[4,i]->FormattedValue));
			 StudentsList[i]->Watchlist[1] = desireIndex(Convert::ToString( dataGridView1[5,i]->FormattedValue));
			 StudentsList[i]->Watchlist[2] = desireIndex(Convert::ToString( dataGridView1[6,i]->FormattedValue));
		 }

		 Trying( 0, StudentsList, dataGridView1->RowCount-1 );
		 F_Mscholer_final = gcnew MScholer_Finle(StudentsList,FinalWatchlist);
		 F_Mscholer_final->Show();

		//Console::WriteLine(desireIndex(Convert::ToString( dataGridView1[4,0]->FormattedValue)));
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private  : System::Void dataGridView1_RowAdded(System::Object^ sender,DataGridViewRowsAddedEventArgs ^ e){
			dataGridView1[0,this->dataGridView1->RowCount-1]->Value = System::Convert::ToInt32( dataGridView1[0,this->dataGridView1->RowCount-2]->Value) + 1; 			
		}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 HelpingCompletingOfDesires = gcnew array< bool^,1 >(8); 
			 HelpingCompletingOfDesires[0]=false;
			 Console::WriteLine(HelpingCompletingOfDesires);
		 }
};
}
