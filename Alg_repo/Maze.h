#include "Maze_Structure.h"
#pragma once

namespace Alg_repo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Maze
	/// </summary>
	public ref class Maze : public System::Windows::Forms::Form
	{
	public:
		Maze(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Maze()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Random_Generator_Button;
	protected: 

	private: System::Windows::Forms::Panel^  Draw_Panel;
	private: System::Windows::Forms::Button^  Frrom_File;
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
			this->Random_Generator_Button = (gcnew System::Windows::Forms::Button());
			this->Draw_Panel = (gcnew System::Windows::Forms::Panel());
			this->Frrom_File = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Random_Generator_Button
			// 
			this->Random_Generator_Button->Location = System::Drawing::Point(670, 19);
			this->Random_Generator_Button->Name = L"Random_Generator_Button";
			this->Random_Generator_Button->Size = System::Drawing::Size(106, 33);
			this->Random_Generator_Button->TabIndex = 0;
			this->Random_Generator_Button->Text = L"Random Generate";
			this->Random_Generator_Button->UseVisualStyleBackColor = true;
			this->Random_Generator_Button->Click += gcnew System::EventHandler(this, &Maze::Random_Generator_Button_Click);
			// 
			// Draw_Panel
			// 
			this->Draw_Panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Draw_Panel->Location = System::Drawing::Point(14, 19);
			this->Draw_Panel->Name = L"Draw_Panel";
			this->Draw_Panel->Size = System::Drawing::Size(636, 322);
			this->Draw_Panel->TabIndex = 1;
			// 
			// Frrom_File
			// 
			this->Frrom_File->Location = System::Drawing::Point(670, 58);
			this->Frrom_File->Name = L"Frrom_File";
			this->Frrom_File->Size = System::Drawing::Size(106, 33);
			this->Frrom_File->TabIndex = 2;
			this->Frrom_File->Text = L"From File Generate";
			this->Frrom_File->UseVisualStyleBackColor = true;
			this->Frrom_File->Click += gcnew System::EventHandler(this, &Maze::Frrom_File_Click);
			// 
			// Maze
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 372);
			this->Controls->Add(this->Frrom_File);
			this->Controls->Add(this->Draw_Panel);
			this->Controls->Add(this->Random_Generator_Button);
			this->Name = L"Maze";
			this->Text = L"Maze";
			this->ResumeLayout(false);

		}
#pragma endregion
		public:System::Drawing::Pen ^ MyPen;
		public:System::Drawing::PointF ^ P0;
	    public:System::Drawing::PointF ^ P1;
		public:Drawing::Graphics ^MyGraphics ;
				
		//public:System::Windows::Forms::OpenFileDialog ^openFileDialog1;
	   // public:System::IO::Stream ^myStream;
	
	public: void Random_Generate(Maze_Structure ^& maze,int n){
			  Maze_Structure ^ temp(maze);
			  for (int i = 0; i < n; i++)
			  {
				
			  }
		};
	private: System::Void Random_Generator_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 MyPen = gcnew Pen(Color::Blue) ;
				 P0 = gcnew PointF;
				 P1 = gcnew PointF;
				 P0->X = Draw_Panel->Location.X;
				 P0->Y = Draw_Panel->Location.Y;
				 P1->X = Math::Round( P0->X + 50);
				 P1->Y = Math::Round( P0->Y + 50);
				 MyGraphics=Draw_Panel->CreateGraphics();
			     Draw_Panel->Refresh();
				 MyGraphics->DrawLine(MyPen,*P0,*P1);
			 }
	private: System::Void Frrom_File_Click(System::Object^  sender, System::EventArgs^  e) {

		System::IO::Stream ^myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		 if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
			{
				  if ( (myStream = openFileDialog1->OpenFile()) != nullptr )
					 {
							  // Insert code to read the stream here.
	
							 myStream->Close();
					 }
			}
	 }
};
}
