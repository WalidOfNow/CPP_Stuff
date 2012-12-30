#pragma once

namespace Alg_repo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Rec_Drawing
	/// </summary>
	public ref class Rec_Drawing : public System::Windows::Forms::Form
	{
	public:
		Rec_Drawing(void)
		{
			InitializeComponent();
			BlackRadioButton->Checked=true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Rec_Drawing()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  ColorGroupBox;
	protected: 
	private: System::Windows::Forms::RadioButton^  BlueRadioButton;
	private: System::Windows::Forms::RadioButton^  WhiteRadioButton;
	private: System::Windows::Forms::RadioButton^  RedRadioButton;
	private: System::Windows::Forms::RadioButton^  BlackRadioButton;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			this->ColorGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->BlueRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->WhiteRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->RedRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->BlackRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->ColorGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// ColorGroupBox
			// 
			this->ColorGroupBox->Controls->Add(this->BlueRadioButton);
			this->ColorGroupBox->Controls->Add(this->WhiteRadioButton);
			this->ColorGroupBox->Controls->Add(this->RedRadioButton);
			this->ColorGroupBox->Controls->Add(this->BlackRadioButton);
			this->ColorGroupBox->Location = System::Drawing::Point(12, 12);
			this->ColorGroupBox->Name = L"ColorGroupBox";
			this->ColorGroupBox->Size = System::Drawing::Size(200, 133);
			this->ColorGroupBox->TabIndex = 10;
			this->ColorGroupBox->TabStop = false;
			this->ColorGroupBox->Text = L"Color Picker";
			// 
			// BlueRadioButton
			// 
			this->BlueRadioButton->AutoSize = true;
			this->BlueRadioButton->Location = System::Drawing::Point(28, 71);
			this->BlueRadioButton->Name = L"BlueRadioButton";
			this->BlueRadioButton->Size = System::Drawing::Size(45, 17);
			this->BlueRadioButton->TabIndex = 7;
			this->BlueRadioButton->TabStop = true;
			this->BlueRadioButton->Text = L"Blue";
			this->BlueRadioButton->UseVisualStyleBackColor = true;
			this->BlueRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Rec_Drawing::BlueRadioButton_CheckedChanged);
			// 
			// WhiteRadioButton
			// 
			this->WhiteRadioButton->AutoSize = true;
			this->WhiteRadioButton->Location = System::Drawing::Point(28, 95);
			this->WhiteRadioButton->Name = L"WhiteRadioButton";
			this->WhiteRadioButton->Size = System::Drawing::Size(53, 17);
			this->WhiteRadioButton->TabIndex = 8;
			this->WhiteRadioButton->TabStop = true;
			this->WhiteRadioButton->Text = L"White";
			this->WhiteRadioButton->UseVisualStyleBackColor = true;
			this->WhiteRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Rec_Drawing::WhiteRadioButton_CheckedChanged);
			// 
			// RedRadioButton
			// 
			this->RedRadioButton->AutoSize = true;
			this->RedRadioButton->Location = System::Drawing::Point(27, 25);
			this->RedRadioButton->Name = L"RedRadioButton";
			this->RedRadioButton->Size = System::Drawing::Size(44, 17);
			this->RedRadioButton->TabIndex = 5;
			this->RedRadioButton->TabStop = true;
			this->RedRadioButton->Text = L"Red";
			this->RedRadioButton->UseVisualStyleBackColor = true;
			this->RedRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Rec_Drawing::RedRadioButton_CheckedChanged);
			// 
			// BlackRadioButton
			// 
			this->BlackRadioButton->AutoSize = true;
			this->BlackRadioButton->Location = System::Drawing::Point(27, 48);
			this->BlackRadioButton->Name = L"BlackRadioButton";
			this->BlackRadioButton->Size = System::Drawing::Size(49, 17);
			this->BlackRadioButton->TabIndex = 6;
			this->BlackRadioButton->TabStop = true;
			this->BlackRadioButton->Text = L"Black";
			this->BlackRadioButton->UseVisualStyleBackColor = true;
			this->BlackRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Rec_Drawing::BlackRadioButton_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label1->Location = System::Drawing::Point(407, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Complexity Level";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label2->Location = System::Drawing::Point(407, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Length of  Line";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(539, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 20);
			this->textBox1->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(499, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 34);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Draw it !";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Rec_Drawing::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(45, 160);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(583, 368);
			this->panel1->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(539, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(84, 20);
			this->textBox2->TabIndex = 16;
			// 
			// Rec_Drawing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(676, 540);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ColorGroupBox);
			this->Name = L"Rec_Drawing";
			this->Text = L"Rec_Drawing";
			this->Load += gcnew System::EventHandler(this, &Rec_Drawing::Rec_Drawing_Load);
			this->ColorGroupBox->ResumeLayout(false);
			this->ColorGroupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:System::Drawing::Pen ^ MyPen;
	public:System::Drawing::PointF ^ P1;
	public:Drawing::Graphics ^MyGraphics ;
	public: Color c;
		
		
public: void Drawing(int n ,System::Drawing::PointF  ^P1,double D)
			{	
				System::Drawing::PointF^P2;
				System::Drawing::PointF^P3;
				System::Drawing::PointF^P4;
				System::Drawing::PointF^P5;
				System::Drawing::PointF^P6;
				System::Drawing::PointF^P7;
				P2=gcnew PointF;
				P5=gcnew PointF;
			    P4=gcnew PointF;
				P3=gcnew PointF; 
				P6=gcnew PointF;
				P7=gcnew PointF;
			
				if (n>0)
				{	
					P2->X=P1->X-Math::Round(D);
					P2->Y=P1->Y;
					P3->X=P1->X+Math::Round(D);
					P3->Y=P1->Y;
					P4->X=P3->X; 
					P4->Y=P1->Y-Math::Round(D/2);
					P5->X=P3->X;
					P5->Y=P3->Y+Math::Round(D/2);
					P6->X=P2->X; 
					P6->Y=P3->Y-Math::Round(D/2);
					P7->X=P2->X; 
					P7->Y=P3->Y+Math::Round(D/2);

					MyGraphics->DrawLine(MyPen,*P1,*P2);
					MyGraphics->DrawLine(MyPen,*P1,*P3);
					MyGraphics->DrawLine(MyPen,*P2,*P6);
					MyGraphics->DrawLine(MyPen,*P2,*P7);
					MyGraphics->DrawLine(MyPen,*P3,*P4);
					MyGraphics->DrawLine(MyPen,*P3,*P5);
					Drawing(n-1,P4,D/2);
					Drawing(n-1,P5,D/2);
					Drawing(n-1,P6,D/2);
					Drawing(n-1,P7,D/2);
				}
			}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				MyPen = gcnew Pen(c) ;
				MyGraphics=panel1->CreateGraphics();
			    panel1->Refresh();
			    int n;
			    double D;
				n= System::Convert::ToInt32(textBox1->Text);
				if(n<=0 || n>25){
					MessageBox::Show("Wrong Level ! Retype the Complexity Level");
					textBox1->Text="";
				}else{
				P1=gcnew PointF;
				P1->X=(panel1->Location.X + ((panel1->Width)/2))-38;
				P1->Y=(panel1->Location.Y )+20;
				D=120;
				
				Drawing(n,P1,D);
				}
			 }
private: System::Void RedRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if(  RedRadioButton->Checked==true  )
			 {
				 c=Color::Red;
				 button1->PerformClick();
			 }
				 

		 }
private: System::Void BlackRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if(  BlackRadioButton->Checked==true  )
			 {
				 c=Color::Black;
				  button1->PerformClick();
			 }
		 }
private: System::Void BlueRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  if(  BlueRadioButton->Checked==true  )
			  {
				  c=Color::Blue;
				   button1->PerformClick();
			  }
		 }
private: System::Void WhiteRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  if(  WhiteRadioButton->Checked==true  )
			  {
				  c=Color::White;
				   button1->PerformClick();
			  }
		 }
private: System::Void Rec_Drawing_Load(System::Object^  sender, System::EventArgs^  e) {
			 
		 }


};
}
