#pragma once
#include "practice_2021.cpp"
#include "Client.cpp"
#include <vector>
using namespace std;
vector <Client> ClientVector = setClientVector("InputFile.txt");
namespace practice_2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  FindNumber;
	protected: 




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::HelpProvider^  helpProvider1;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  FindDocument;


	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  CategoryOfClient;
	private: System::Windows::Forms::TextBox^  CurrentSum;
	private: System::Windows::Forms::TextBox^  DateOfLastAction;
	private: System::Windows::Forms::TextBox^  DateOfRegistration;
	private: System::Windows::Forms::TextBox^  AddedSum;






	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Amount;
	private: System::Windows::Forms::Button^  AddSum;
	private: System::Windows::Forms::Button^  DebitSum;



	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;


	private: System::Windows::Forms::ToolStripMenuItem^  ïîìîùüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âûéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îòêðûòüToolStripMenuItem1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  RateOfClient;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::MaskedTextBox^  NumberOfClient;
	private: System::Windows::Forms::MaskedTextBox^  DocumentOfClient;


	private: System::Windows::Forms::Label^  label6;



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
			this->FindNumber = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->FindDocument = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->CategoryOfClient = (gcnew System::Windows::Forms::TextBox());
			this->CurrentSum = (gcnew System::Windows::Forms::TextBox());
			this->DateOfLastAction = (gcnew System::Windows::Forms::TextBox());
			this->DateOfRegistration = (gcnew System::Windows::Forms::TextBox());
			this->AddedSum = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Amount = (gcnew System::Windows::Forms::TextBox());
			this->AddSum = (gcnew System::Windows::Forms::Button());
			this->DebitSum = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêðûòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîìîùüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->RateOfClient = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NumberOfClient = (gcnew System::Windows::Forms::MaskedTextBox());
			this->DocumentOfClient = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// FindNumber
			// 
			this->FindNumber->Location = System::Drawing::Point(197, 42);
			this->FindNumber->Name = L"FindNumber";
			this->FindNumber->Size = System::Drawing::Size(75, 23);
			this->FindNumber->TabIndex = 1;
			this->FindNumber->Text = L"Ïîèñê";
			this->FindNumber->UseVisualStyleBackColor = true;
			this->FindNumber->Click += gcnew System::EventHandler(this, &Form1::FindNumberClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Êàòåãîðèÿ âêëàä÷èêà";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(7, 236);
			this->label11->Name = L"label11";
			this->helpProvider1->SetShowHelp(this->label11, false);
			this->label11->Size = System::Drawing::Size(237, 13);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Íà÷èñëåíî ïðîöåíòîâ ñ äàòû îòêðûòèÿ ñ÷åòà";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Íîìåð ïàñïîðòà";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Òåêóùàÿ ñóììà âêëàäà";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// FindDocument
			// 
			this->FindDocument->Location = System::Drawing::Point(197, 104);
			this->FindDocument->Name = L"FindDocument";
			this->FindDocument->Size = System::Drawing::Size(75, 23);
			this->FindDocument->TabIndex = 9;
			this->FindDocument->Text = L"Ïîèñê";
			this->FindDocument->UseVisualStyleBackColor = true;
			this->FindDocument->Click += gcnew System::EventHandler(this, &Form1::FindDocumentClick);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Äàòà ïîñëåäíåé îïåðàöèè";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 187);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Äàòà îòêðûòèÿ ñ÷åòà";
			// 
			// CategoryOfClient
			// 
			this->CategoryOfClient->Location = System::Drawing::Point(172, 73);
			this->CategoryOfClient->Name = L"CategoryOfClient";
			this->CategoryOfClient->Size = System::Drawing::Size(100, 20);
			this->CategoryOfClient->TabIndex = 15;
			// 
			// CurrentSum
			// 
			this->CurrentSum->Location = System::Drawing::Point(172, 135);
			this->CurrentSum->Name = L"CurrentSum";
			this->CurrentSum->Size = System::Drawing::Size(100, 20);
			this->CurrentSum->TabIndex = 17;
			// 
			// DateOfLastAction
			// 
			this->DateOfLastAction->Location = System::Drawing::Point(172, 158);
			this->DateOfLastAction->Name = L"DateOfLastAction";
			this->DateOfLastAction->Size = System::Drawing::Size(100, 20);
			this->DateOfLastAction->TabIndex = 18;
			this->DateOfLastAction->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// DateOfRegistration
			// 
			this->DateOfRegistration->Location = System::Drawing::Point(172, 180);
			this->DateOfRegistration->Name = L"DateOfRegistration";
			this->DateOfRegistration->Size = System::Drawing::Size(100, 20);
			this->DateOfRegistration->TabIndex = 19;
			// 
			// AddedSum
			// 
			this->AddedSum->Location = System::Drawing::Point(10, 252);
			this->AddedSum->Name = L"AddedSum";
			this->AddedSum->Size = System::Drawing::Size(100, 20);
			this->AddedSum->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 279);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Ïðèåì/âûäà÷à ñðåäñòâ";
			// 
			// Amount
			// 
			this->Amount->Location = System::Drawing::Point(10, 295);
			this->Amount->Name = L"Amount";
			this->Amount->Size = System::Drawing::Size(100, 20);
			this->Amount->TabIndex = 22;
			this->Amount->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// AddSum
			// 
			this->AddSum->Location = System::Drawing::Point(116, 295);
			this->AddSum->Name = L"AddSum";
			this->AddSum->Size = System::Drawing::Size(75, 23);
			this->AddSum->TabIndex = 23;
			this->AddSum->Text = L"Ïðèíÿòü";
			this->AddSum->UseVisualStyleBackColor = true;
			this->AddSum->Click += gcnew System::EventHandler(this, &Form1::AddClick);
			// 
			// DebitSum
			// 
			this->DebitSum->Location = System::Drawing::Point(197, 295);
			this->DebitSum->Name = L"DebitSum";
			this->DebitSum->Size = System::Drawing::Size(75, 23);
			this->DebitSum->TabIndex = 24;
			this->DebitSum->Text = L"Âûäàòü";
			this->DebitSum->UseVisualStyleBackColor = true;
			this->DebitSum->Click += gcnew System::EventHandler(this, &Form1::DebitClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->ïîìîùüToolStripMenuItem, this->âûéòèToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 25;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->îòêðûòüToolStripMenuItem1 });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(48, 20);
			this->toolStripMenuItem1->Text = L"Ôàéë";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// îòêðûòüToolStripMenuItem1
			// 
			this->îòêðûòüToolStripMenuItem1->Name = L"îòêðûòüToolStripMenuItem1";
			this->îòêðûòüToolStripMenuItem1->Size = System::Drawing::Size(121, 22);
			this->îòêðûòüToolStripMenuItem1->Text = L"Îòêðûòü";
			this->îòêðûòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::îòêðûòütoolStripMenuItem1_Click);
			// 
			// ïîìîùüToolStripMenuItem
			// 
			this->ïîìîùüToolStripMenuItem->Name = L"ïîìîùüToolStripMenuItem";
			this->ïîìîùüToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->ïîìîùüToolStripMenuItem->Text = L"Ïîìîùü";
			// 
			// âûéòèToolStripMenuItem
			// 
			this->âûéòèToolStripMenuItem->Name = L"âûéòèToolStripMenuItem";
			this->âûéòèToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->âûéòèToolStripMenuItem->Text = L"Âûéòè";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// RateOfClient
			// 
			this->RateOfClient->Location = System::Drawing::Point(172, 203);
			this->RateOfClient->Name = L"RateOfClient";
			this->RateOfClient->Size = System::Drawing::Size(100, 20);
			this->RateOfClient->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Ïðîö. ñòàâêà, % ãîäîâûõ";
			// 
			// NumberOfClient
			// 
			this->NumberOfClient->Location = System::Drawing::Point(116, 42);
			this->NumberOfClient->Mask = L"0000000000";
			this->NumberOfClient->Name = L"NumberOfClient";
			this->NumberOfClient->Size = System::Drawing::Size(68, 20);
			this->NumberOfClient->TabIndex = 28;
			this->NumberOfClient->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->NumberOfClient->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &Form1::maskedTextBox1_MaskInputRejected);
			// 
			// DocumentOfClient
			// 
			this->DocumentOfClient->Location = System::Drawing::Point(109, 106);
			this->DocumentOfClient->Mask = L"0000000000";
			this->DocumentOfClient->Name = L"DocumentOfClient";
			this->DocumentOfClient->Size = System::Drawing::Size(68, 20);
			this->DocumentOfClient->TabIndex = 29;
			this->DocumentOfClient->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 13);
			this->label6->TabIndex = 30;
			this->label6->Text = L"¹ ëèöåâîãî ñ÷åòà";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 343);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->DocumentOfClient);
			this->Controls->Add(this->NumberOfClient);
			this->Controls->Add(this->RateOfClient);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DebitSum);
			this->Controls->Add(this->AddSum);
			this->Controls->Add(this->Amount);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->AddedSum);
			this->Controls->Add(this->DateOfRegistration);
			this->Controls->Add(this->DateOfLastAction);
			this->Controls->Add(this->CurrentSum);
			this->Controls->Add(this->CategoryOfClient);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->FindDocument);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->FindNumber);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Ïðîãðàììà \"Áàíê\"";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void îòêðûòütoolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void maskedTextBox1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


/*private: System::Void FindClick(System::Object^  sender, System::EventArgs^  e) {
	Client.Find(TempNumber, ClientVector, Type);
		 }*/

private: System::Void AddClick(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void DebitClick(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void FindNumberClick(System::Object^ sender, System::EventArgs^ e) {
	String^ TempNumber = NumberOfClient->Text;
	for (int i = 0; i < ClientVector.size();i++)
		if (ClientVector[i].getNumber() == TempNumber)
		{
			CategoryOfClient->Text = ClientVector[i].getAccountType();
			DocumentOfClient->Text = ClientVector[i].getDocumentData();
			CurrentSum->Text = ClientVector[i].getValue();
			DateOfLastAction->Text = ClientVector[i].getLastAction();
			DateOfRegistration->Text = ClientVector[i].getRegistrationDate();
			RateOfClient->Text = ClientVector[i].getRate();
			RateOfClient->Text = ClientVector[i].getRate();
			//AddedSum->Text = ClientVector[i].getRate();
			break;
		}
}
private: System::Void FindDocumentClick(System::Object^ sender, System::EventArgs^ e) {
	String^ TempNumber = DocumentOfClient->Text;
	for (int i = 0; i < ClientVector.size();i++)
		if (ClientVector[i].getDocumentData() == TempNumber)
			break;
}
};
}

