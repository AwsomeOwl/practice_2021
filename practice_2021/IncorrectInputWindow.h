#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace practice_2021 {

	/// <summary>
	/// Summary for IncorrectInputWindow
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class IncorrectInputWindow : public System::Windows::Forms::Form
	{
	public:
		IncorrectInputWindow(void)
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
		~IncorrectInputWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;

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
			System::Windows::Forms::TextBox^  textBox1;
			this->button1 = (gcnew System::Windows::Forms::Button());
			textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			textBox1->BackColor = System::Drawing::SystemColors::Menu;
			textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			textBox1->Location = System::Drawing::Point(12, 12);
			textBox1->Name = L"textBox1";
			textBox1->Size = System::Drawing::Size(260, 13);
			textBox1->TabIndex = 4;
			textBox1->Text = L"Укажите корректную сумму";
			textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			textBox1->TextChanged += gcnew System::EventHandler(this, &IncorrectInputWindow::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(104, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"ОК";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// IncorrectInputWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 68);
			this->Controls->Add(textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"IncorrectInputWindow";
			this->Text = L"Операция отклонена";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
