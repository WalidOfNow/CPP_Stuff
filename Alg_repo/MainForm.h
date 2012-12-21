#include "Maze.h"
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
			FirstTimeEntry_Maze = true;
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
			this->Maze_Button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Maze_Button
			// 
			this->Maze_Button->Location = System::Drawing::Point(90, 50);
			this->Maze_Button->Name = L"Maze_Button";
			this->Maze_Button->Size = System::Drawing::Size(92, 35);
			this->Maze_Button->TabIndex = 0;
			this->Maze_Button->Text = L"Maze Problem";
			this->Maze_Button->UseVisualStyleBackColor = true;
			this->Maze_Button->Click += gcnew System::EventHandler(this, &MainForm::Maze_Button_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(90, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Maze_Button);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private : bool FirstTimeEntry_Maze;
	public : Maze ^F_Maze;
	private: System::Void Maze_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (FirstTimeEntry_Maze)
				 {
					F_Maze = gcnew Maze();
					FirstTimeEntry_Maze=false;
				 }
				 F_Maze->Show();
				 
 
			 }
	};
}
