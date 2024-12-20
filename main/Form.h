#include <iostream>
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <array> 
#include <windows.h>
#include <commdlg.h>
#include <ctime>
#include <filesystem>
#include <Windows.h>
#include <ShlObj.h>
#include <comdef.h>
#include "resource.h"


#pragma once

namespace window {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;


	private: System::ComponentModel::IContainer^ components;







	protected:

	private:


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(219, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 22);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"List";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 224);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 41);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Reset List";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(15, 96);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(282, 127);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(157, 224);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 41);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Save List";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"English", L"日本語", L"繁體中文", L"简体中文", L"Deutsch",
					L"Français", L"Español"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 13);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(285, 24);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->Text = L"Language";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(157, 76);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(143, 20);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Disallow empty text";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Checked = false;
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(309, 279);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Lister";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void savelist() {
			try {
				System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("New List.txt", false, System::Text::Encoding::Unicode);
				writer->Write(this->label2->Text);
				writer->Close(); 
			}
			catch (Exception^ e) {
				MessageBox::Show("An unexpected error occurred.", "Lister", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		};

		void savelang() {
			

			try {
				System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("Language.txt", false, System::Text::Encoding::Unicode);
				writer->Write(this->comboBox1->Text); 
				writer->Close(); 
			}
			catch (Exception^ e) {
			}
		};

		void close() {
			Environment::Exit(0);
		};

		void loadlang() {

			try {
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("Language.txt", System::Text::Encoding::Unicode);
				System::String^ myText = reader->ReadToEnd();
				this->comboBox1->Text = myText;
				reader->Close();

				if (this->comboBox1->Text != L"English" &&
					this->comboBox1->Text != L"日本語" &&
					this->comboBox1->Text != L"繁體中文" &&
					this->comboBox1->Text != L"简体中文" &&
					this->comboBox1->Text != L"Deutsch" &&
					this->comboBox1->Text != L"Français" &&
					this->comboBox1->Text != L"Español" &&
					this->comboBox1->Text != L"Language"
					)
				{
					MessageBox::Show("An error occurred: Invalid language in 'Language.txt'", "Lister", MessageBoxButtons::OK, MessageBoxIcon::Error);
					close();
				}
			}
			catch (Exception^ e) {
			}
		};

		void loadlist() {

			try {
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("New List.txt", System::Text::Encoding::Unicode);
				System::String^ myText = reader->ReadToEnd();
				this->label2->Text = this->label2->Text + myText;
				reader->Close(); 
			}
			catch (Exception^ e) {
			}
		}
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		HICON hIcon = ::LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON1));
		if (hIcon != NULL) {
			this->Icon = System::Drawing::Icon::FromHandle(IntPtr(hIcon));
		}
		loadlist();
		loadlang();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox1->Checked == true) {
		
			std::wstring test = msclr::interop::marshal_as<std::wstring>(this->textBox1->Text);

			wchar_t emptySpaceArray[3] = {
				L' ', L' ', L'‎'
			};


			if ((test.find_first_not_of(emptySpaceArray) != std::wstring::npos)) {
				array<System::String^>^ textarr = gcnew array<System::String^>(1);
				this->label2->Text = this->label2->Text + "\n" + this->textBox1->Text;
				textarr[0] = this->label2->Text;
				this->textBox1->Text = L"";
				savelist();
			}
			else {
				this->textBox1->Text = L"";
			}
		}
		else {
			array<System::String^>^ textarr = gcnew array<System::String^>(1);
			this->label2->Text = this->label2->Text + "\n" + this->textBox1->Text;
			textarr[0] = this->label2->Text;
			this->textBox1->Text = L"";
			savelist();
		}
	};
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label2->Text = L"";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		savelist();
	}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void vScrollBar1_Scroll_1(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		savelang();
		if (this->comboBox1->Text != L"English" &&
			this->comboBox1->Text != L"日本語" &&
			this->comboBox1->Text != L"繁體中文" &&
			this->comboBox1->Text != L"简体中文" &&
			this->comboBox1->Text != L"Deutsch" &&
			this->comboBox1->Text != L"Français" &&
			this->comboBox1->Text != L"Español" &&
			this->comboBox1->Text != L"Language"
			)
		{
			MessageBox::Show("An error occurred: ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		} else {
			if (this->comboBox1->Text == L"English") {
				this->label1->Text = L"List";
				this->button1->Text = L"Add";
				this->button2->Text = L"Reset List";
				this->button3->Text = L"Save List";
				this->checkBox1->Text = L"Disallow empty text";
				this->Text = L"Lister";
			}
			else if (this->comboBox1->Text == L"日本語") {
				this->label1->Text = L"リスト";
				this->button1->Text = L"追加";
				this->button2->Text = L"リセットリスト";
				this->button3->Text = L"保存リスト";
				this->checkBox1->Text = L"空のテキストを許可しない";
				this->Text = L"リスト";
			}
			else if (this->comboBox1->Text == L"繁體中文") {
				this->label1->Text = L"清單";
				this->button1->Text = L"加";
				this->button2->Text = L"重設清單";
				this->button3->Text = L"保存清單";
				this->checkBox1->Text = L"禁止使用空文字";
				this->Text = L"清單";
			}
			else if (this->comboBox1->Text == L"简体中文") {
				this->label1->Text = L"列表";
				this->button1->Text = L"加";
				this->button2->Text = L"重置列表";
				this->button3->Text = L"保存列表";
				this->checkBox1->Text = L"禁止使用空文本";
				this->Text = L"列表";
			}
			else if (this->comboBox1->Text == L"Deutsch") {
				this->label1->Text = L"Liste";
				this->button1->Text = L"Hinzufügen";
				this->button2->Text = L"Liste zurücksetzen";
				this->button3->Text = L"Liste speichern";
				this->checkBox1->Text = L"Leeren Text nicht zulassen";
				this->Text = L"Liste";
			}
			else if (this->comboBox1->Text == L"Français") {
				this->label1->Text = L"Liste";
				this->button1->Text = L"Ajouter";
				this->button2->Text = L"Liste de réinitialisation";
				this->button3->Text = L"Sauvegarder la liste";
				this->checkBox1->Text = L"Interdire le texte vide";
				this->Text = L"Liste";
			}
			else if (this->comboBox1->Text == L"Español") {
				this->label1->Text = L"Lista";
				this->button1->Text = L"Añadir";
				this->button2->Text = L"Restablecer lista";
				this->button3->Text = L"Guardar lista";
				this->checkBox1->Text = L"No permitir texto vacío";
				this->Text = L"Lista";
				}
			}
		}
	};
}
