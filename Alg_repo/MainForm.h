#include "Maze.h"
#include "MScholership.h"
#include "MScholer_FirstInfo.h"
#include "Rec_Drawing.h"
#include "About.h"
#pragma once

namespace Alg_repo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Maze_Button;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->Maze_Button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Maze_Button
			// 
			this->Maze_Button->Location = System::Drawing::Point(59, 33);
			this->Maze_Button->Name = L"Maze_Button";
			this->Maze_Button->Size = System::Drawing::Size(123, 35);
			this->Maze_Button->TabIndex = 0;
			this->Maze_Button->Text = L"Maze Problem";
			this->Maze_Button->UseVisualStyleBackColor = true;
			this->Maze_Button->Click += gcnew System::EventHandler(this, &MainForm::Maze_Button_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(512, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Masters Scholership";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(512, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 33);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Recursive Drawing";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(615, 310);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 26);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 310);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 26);
			this->button4->TabIndex = 4;
			this->button4->Text = L"About";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(59, 152);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 32);
			this->button5->TabIndex = 5;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(711, 348);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Maze_Button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(300, 300);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion

	public : Maze ^F_Maze;
	public : Rec_Drawing ^F_RecDraw ;
	public : About ^ F_About;
	public : MScholer_FirstInfo ^ F_Mscholer_FirstInfo;
	private: System::Void Maze_Button_Click(System::Object^  sender, System::EventArgs^  e) {

					F_Maze = gcnew Maze();
					 F_Maze->Show();
				 
			 };
			 
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			
					 F_Mscholer_FirstInfo = gcnew MScholer_FirstInfo;
					 F_Mscholer_FirstInfo->Show();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
					F_RecDraw = gcnew Rec_Drawing;
					F_RecDraw->Show();
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				F_About = gcnew About;
				F_About->Show();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process ^l;
			 l = gcnew System::Diagnostics::Process;
			 l->Start("Project1.exe");
		 }
};
}
