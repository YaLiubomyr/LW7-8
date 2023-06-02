#pragma once
#include "class.h"
#include "funcs.h"
#include <msclr\marshal_cppstd.h>

Products obj;
Date product_date, current_date;

namespace LW78 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_file_name;
	private: System::Windows::Forms::Label^ enter_file_name_label;


	private: System::Windows::Forms::Button^ openFile;
	private: System::Windows::Forms::Button^ addProduct;


	private: System::Windows::Forms::Label^ enter_product_label;
	private: System::Windows::Forms::TextBox^ textBox_product;
	private: System::Windows::Forms::Label^ enter_date_label;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_year;


	private: System::Windows::Forms::TextBox^ textBox_month;

	private: System::Windows::Forms::TextBox^ textBox_day;
	private: System::Windows::Forms::TextBox^ output_file_textBox;
	private: System::Windows::Forms::TextBox^ textBox_day_curr;
	private: System::Windows::Forms::TextBox^ textBox_month_curr;
	private: System::Windows::Forms::TextBox^ textBox_year_curr;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ enter_current_date_label;
	private: System::Windows::Forms::Button^ checkProducts;



	private: System::Windows::Forms::Button^ clearFile;
	private: System::Windows::Forms::Label^ error_label;
	private: System::Windows::Forms::Label^ curr_error_label;
	private: System::Windows::Forms::TextBox^ sorted_textBox;
	private: System::Windows::Forms::Label^ textfile_label;
	private: System::Windows::Forms::Label^ sorted_file_label;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_file_name = (gcnew System::Windows::Forms::TextBox());
			this->enter_file_name_label = (gcnew System::Windows::Forms::Label());
			this->openFile = (gcnew System::Windows::Forms::Button());
			this->addProduct = (gcnew System::Windows::Forms::Button());
			this->enter_product_label = (gcnew System::Windows::Forms::Label());
			this->textBox_product = (gcnew System::Windows::Forms::TextBox());
			this->enter_date_label = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_year = (gcnew System::Windows::Forms::TextBox());
			this->textBox_month = (gcnew System::Windows::Forms::TextBox());
			this->textBox_day = (gcnew System::Windows::Forms::TextBox());
			this->output_file_textBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox_day_curr = (gcnew System::Windows::Forms::TextBox());
			this->textBox_month_curr = (gcnew System::Windows::Forms::TextBox());
			this->textBox_year_curr = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->enter_current_date_label = (gcnew System::Windows::Forms::Label());
			this->checkProducts = (gcnew System::Windows::Forms::Button());
			this->clearFile = (gcnew System::Windows::Forms::Button());
			this->error_label = (gcnew System::Windows::Forms::Label());
			this->curr_error_label = (gcnew System::Windows::Forms::Label());
			this->sorted_textBox = (gcnew System::Windows::Forms::TextBox());
			this->textfile_label = (gcnew System::Windows::Forms::Label());
			this->sorted_file_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_file_name
			// 
			this->textBox_file_name->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox_file_name->Location = System::Drawing::Point(12, 46);
			this->textBox_file_name->Name = L"textBox_file_name";
			this->textBox_file_name->Size = System::Drawing::Size(271, 22);
			this->textBox_file_name->TabIndex = 0;
			// 
			// enter_file_name_label
			// 
			this->enter_file_name_label->AutoSize = true;
			this->enter_file_name_label->Location = System::Drawing::Point(13, 27);
			this->enter_file_name_label->Name = L"enter_file_name_label";
			this->enter_file_name_label->Size = System::Drawing::Size(131, 16);
			this->enter_file_name_label->TabIndex = 1;
			this->enter_file_name_label->Text = L"Введіть ім\'я файлу:";
			// 
			// openFile
			// 
			this->openFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->openFile->Location = System::Drawing::Point(12, 74);
			this->openFile->Name = L"openFile";
			this->openFile->Size = System::Drawing::Size(141, 29);
			this->openFile->TabIndex = 2;
			this->openFile->Text = L"Відкрити файл";
			this->openFile->UseVisualStyleBackColor = false;
			this->openFile->Click += gcnew System::EventHandler(this, &MyForm::openFile_Click_1);
			// 
			// addProduct
			// 
			this->addProduct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->addProduct->Location = System::Drawing::Point(11, 242);
			this->addProduct->Name = L"addProduct";
			this->addProduct->Size = System::Drawing::Size(141, 33);
			this->addProduct->TabIndex = 6;
			this->addProduct->Text = L"Додати продукт";
			this->addProduct->UseVisualStyleBackColor = false;
			this->addProduct->Click += gcnew System::EventHandler(this, &MyForm::addProduct_Click);
			// 
			// enter_product_label
			// 
			this->enter_product_label->AutoSize = true;
			this->enter_product_label->Location = System::Drawing::Point(12, 141);
			this->enter_product_label->Name = L"enter_product_label";
			this->enter_product_label->Size = System::Drawing::Size(168, 16);
			this->enter_product_label->TabIndex = 5;
			this->enter_product_label->Text = L"Введіть назву продукту:";
			// 
			// textBox_product
			// 
			this->textBox_product->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox_product->Location = System::Drawing::Point(11, 160);
			this->textBox_product->Name = L"textBox_product";
			this->textBox_product->Size = System::Drawing::Size(228, 22);
			this->textBox_product->TabIndex = 4;
			// 
			// enter_date_label
			// 
			this->enter_date_label->AutoSize = true;
			this->enter_date_label->Location = System::Drawing::Point(12, 191);
			this->enter_date_label->Name = L"enter_date_label";
			this->enter_date_label->Size = System::Drawing::Size(305, 16);
			this->enter_date_label->TabIndex = 8;
			this->enter_date_label->Text = L"Введіть кінцеву дату продукту [ДД.ММ.РРРР]:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(11, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 29);
			this->label4->TabIndex = 5;
			this->label4->Text = L"    .    .         ";
			// 
			// textBox_year
			// 
			this->textBox_year->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox_year->Location = System::Drawing::Point(85, 214);
			this->textBox_year->Name = L"textBox_year";
			this->textBox_year->Size = System::Drawing::Size(48, 22);
			this->textBox_year->TabIndex = 13;
			// 
			// textBox_month
			// 
			this->textBox_month->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox_month->Location = System::Drawing::Point(49, 214);
			this->textBox_month->Name = L"textBox_month";
			this->textBox_month->Size = System::Drawing::Size(26, 22);
			this->textBox_month->TabIndex = 14;
			// 
			// textBox_day
			// 
			this->textBox_day->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox_day->Location = System::Drawing::Point(11, 214);
			this->textBox_day->Name = L"textBox_day";
			this->textBox_day->Size = System::Drawing::Size(27, 22);
			this->textBox_day->TabIndex = 15;
			// 
			// output_file_textBox
			// 
			this->output_file_textBox->Location = System::Drawing::Point(385, 45);
			this->output_file_textBox->Multiline = true;
			this->output_file_textBox->Name = L"output_file_textBox";
			this->output_file_textBox->ReadOnly = true;
			this->output_file_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->output_file_textBox->Size = System::Drawing::Size(266, 222);
			this->output_file_textBox->TabIndex = 16;
			// 
			// textBox_day_curr
			// 
			this->textBox_day_curr->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox_day_curr->Location = System::Drawing::Point(8, 334);
			this->textBox_day_curr->Name = L"textBox_day_curr";
			this->textBox_day_curr->Size = System::Drawing::Size(27, 22);
			this->textBox_day_curr->TabIndex = 22;
			// 
			// textBox_month_curr
			// 
			this->textBox_month_curr->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox_month_curr->Location = System::Drawing::Point(46, 334);
			this->textBox_month_curr->Name = L"textBox_month_curr";
			this->textBox_month_curr->Size = System::Drawing::Size(26, 22);
			this->textBox_month_curr->TabIndex = 21;
			// 
			// textBox_year_curr
			// 
			this->textBox_year_curr->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox_year_curr->Location = System::Drawing::Point(82, 334);
			this->textBox_year_curr->Name = L"textBox_year_curr";
			this->textBox_year_curr->Size = System::Drawing::Size(48, 22);
			this->textBox_year_curr->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 330);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 29);
			this->label1->TabIndex = 17;
			this->label1->Text = L"    .    .         ";
			// 
			// enter_current_date_label
			// 
			this->enter_current_date_label->AutoSize = true;
			this->enter_current_date_label->Location = System::Drawing::Point(9, 311);
			this->enter_current_date_label->Name = L"enter_current_date_label";
			this->enter_current_date_label->Size = System::Drawing::Size(301, 16);
			this->enter_current_date_label->TabIndex = 19;
			this->enter_current_date_label->Text = L"Введіть дату на даний момент [ДД.ММ.РРРР]:";
			// 
			// checkProducts
			// 
			this->checkProducts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->checkProducts->Location = System::Drawing::Point(8, 362);
			this->checkProducts->Name = L"checkProducts";
			this->checkProducts->Size = System::Drawing::Size(170, 32);
			this->checkProducts->TabIndex = 18;
			this->checkProducts->Text = L"Перевірити продукти";
			this->checkProducts->UseVisualStyleBackColor = false;
			this->checkProducts->Click += gcnew System::EventHandler(this, &MyForm::checkProducts_Click);
			// 
			// clearFile
			// 
			this->clearFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->clearFile->Location = System::Drawing::Point(165, 74);
			this->clearFile->Name = L"clearFile";
			this->clearFile->Size = System::Drawing::Size(118, 29);
			this->clearFile->TabIndex = 23;
			this->clearFile->Text = L"Очистити файл";
			this->clearFile->UseVisualStyleBackColor = false;
			this->clearFile->Click += gcnew System::EventHandler(this, &MyForm::clearFile_Click);
			// 
			// error_label
			// 
			this->error_label->AutoSize = true;
			this->error_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->error_label->ForeColor = System::Drawing::Color::Red;
			this->error_label->Location = System::Drawing::Point(180, 18);
			this->error_label->Name = L"error_label";
			this->error_label->Size = System::Drawing::Size(0, 16);
			this->error_label->TabIndex = 24;
			// 
			// curr_error_label
			// 
			this->curr_error_label->AutoSize = true;
			this->curr_error_label->ForeColor = System::Drawing::Color::Red;
			this->curr_error_label->Location = System::Drawing::Point(136, 337);
			this->curr_error_label->Name = L"curr_error_label";
			this->curr_error_label->Size = System::Drawing::Size(0, 16);
			this->curr_error_label->TabIndex = 25;
			// 
			// sorted_textBox
			// 
			this->sorted_textBox->Location = System::Drawing::Point(385, 307);
			this->sorted_textBox->Multiline = true;
			this->sorted_textBox->Name = L"sorted_textBox";
			this->sorted_textBox->ReadOnly = true;
			this->sorted_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->sorted_textBox->Size = System::Drawing::Size(266, 112);
			this->sorted_textBox->TabIndex = 26;
			// 
			// textfile_label
			// 
			this->textfile_label->AutoSize = true;
			this->textfile_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textfile_label->Location = System::Drawing::Point(397, 18);
			this->textfile_label->Name = L"textfile_label";
			this->textfile_label->Size = System::Drawing::Size(0, 20);
			this->textfile_label->TabIndex = 27;
			// 
			// sorted_file_label
			// 
			this->sorted_file_label->AutoSize = true;
			this->sorted_file_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sorted_file_label->Location = System::Drawing::Point(397, 284);
			this->sorted_file_label->Name = L"sorted_file_label";
			this->sorted_file_label->Size = System::Drawing::Size(0, 20);
			this->sorted_file_label->TabIndex = 28;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(694, 431);
			this->Controls->Add(this->sorted_file_label);
			this->Controls->Add(this->textfile_label);
			this->Controls->Add(this->sorted_textBox);
			this->Controls->Add(this->curr_error_label);
			this->Controls->Add(this->error_label);
			this->Controls->Add(this->clearFile);
			this->Controls->Add(this->textBox_day_curr);
			this->Controls->Add(this->textBox_month_curr);
			this->Controls->Add(this->textBox_year_curr);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->enter_current_date_label);
			this->Controls->Add(this->checkProducts);
			this->Controls->Add(this->output_file_textBox);
			this->Controls->Add(this->textBox_day);
			this->Controls->Add(this->textBox_month);
			this->Controls->Add(this->textBox_year);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->enter_date_label);
			this->Controls->Add(this->addProduct);
			this->Controls->Add(this->enter_product_label);
			this->Controls->Add(this->textBox_product);
			this->Controls->Add(this->openFile);
			this->Controls->Add(this->enter_file_name_label);
			this->Controls->Add(this->textBox_file_name);
			this->Name = L"MyForm";
			this->Text = L"LW7-8";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		void displayFileOnTextBox(string file_name)
		{
			output_file_textBox->Text = "";

			ifstream file(file_name);
			if (!file)
			{
				error_label->Text = "Не можу відкрити файл!";
			}
			string line;
			while (getline(file, line))
			{
				String^ new_line = msclr::interop::marshal_as<String^>(line);
				output_file_textBox->Text += new_line + "\r\n";
			}
			file.close();
		}

		void errorDateLabelText(const char* s)
		{
			error_label->Text = msclr::interop::marshal_as<String^>(s);
		}

		void currEerrorDateLabelText(const char* s)
		{
			curr_error_label->Text = msclr::interop::marshal_as<String^>(s);
		}

		bool compareDates()
		{
			if (current_date.getYear() > product_date.getYear())
				return true;
			else if (current_date.getYear() == product_date.getYear() && current_date.getMonth() > product_date.getMonth())
				return true;
			else if (current_date.getYear() == product_date.getYear() && current_date.getMonth() == product_date.getMonth() && current_date.getDay() > product_date.getDay())
				return true;
			else
				return false;
		}

		void sortAndDisplayDates(string file_name)
		{
			string sort_file_name = file_name.substr(0, file_name.find_last_of('.')) + "_sorted.txt";
			ofstream file_sorted(sort_file_name);
			ifstream base_file(file_name);
			if (!base_file)
			{
				throw "Не можу відкрити файл!";
			}
			string line;
			while (getline(base_file, line))
			{
				product_date.setYear(stoi(line.substr(line.find_last_of('.') + 1, 4)));
				product_date.setMonth(stoi(line.substr(line.find_last_of('.') - 2, 2)));
				product_date.setDay(stoi(line.substr(line.find_last_of('.') - 5, 2)));

				if (compareDates())
				{
					file_sorted << line << endl;
				}
			}
			file_sorted.close();
			base_file.close();

			ifstream file_sorted_new(sort_file_name);
			String^ sort_file_name_S = msclr::interop::marshal_as<String^>(sort_file_name);
			sorted_file_label->Text = sort_file_name_S;

			string sort_line;
			sorted_textBox->Text = "";
			while (getline(file_sorted_new, sort_line))
			{
				String^ new_line = msclr::interop::marshal_as<String^>(sort_line);
				sorted_textBox->Text += new_line + "\r\n";
			}
			file_sorted_new.close();

		}

	private: System::Void openFile_Click_1(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (String::IsNullOrEmpty(textBox_file_name->Text)) throw "Поле імені файлу пусте!";
			std::string file_name = msclr::interop::marshal_as<std::string>(textBox_file_name->Text);
			error_label->Text = msclr::interop::marshal_as<String^>("");

			obj.setFileName(file_name);
			textfile_label->Text = textBox_file_name->Text;
			displayFileOnTextBox(file_name);
		}
		catch (const char* s)
		{
			errorDateLabelText(s);
		}
	}

	private: System::Void addProduct_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			if (String::IsNullOrEmpty(textBox_product->Text)) throw "Поле назви продукту пусте!";
			std::string product_name = msclr::interop::marshal_as<std::string>(textBox_product->Text);

			if (String::IsNullOrEmpty(textBox_day->Text)) throw "Поле дня пусте!";
			int day;
			try
			{
				day = System::Convert::ToInt64(textBox_day->Text);
			}
			catch (System::FormatException^) {
				throw "Поле дня не є числом!";
			}
			errorDateLabelText("");

			if (String::IsNullOrEmpty(textBox_month->Text)) throw "Поле місяця пусте!";
			int month;
			try
			{
				month = System::Convert::ToInt64(textBox_month->Text);
			}
			catch (System::FormatException^) {
				throw "Поле місяця не є числом!";
			}
			errorDateLabelText("");

			if (String::IsNullOrEmpty(textBox_year->Text)) throw "Поле року пусте!";
			int year;
			try
			{
				year = System::Convert::ToInt64(textBox_year->Text);
			}
			catch (System::FormatException^) {
				throw "Поле року не є числом!";
			}
			errorDateLabelText("");

			isValidDate(day, month, year);
			errorDateLabelText("");

			if (String::IsNullOrEmpty(textBox_file_name->Text)) throw "Поле імені файлу пусте!";


			ofstream file(obj.getFileName(), ofstream::app);
			file << product_name << " " << setw(2) << setfill('0') << day << "." << setw(2) << month << "." << setw(4) << year << endl;
			file.close();

			displayFileOnTextBox(obj.getFileName());
		}
		catch (const char* s)
		{
			errorDateLabelText(s);
		}
	}

	private: System::Void clearFile_Click(System::Object^ sender, System::EventArgs^ e) {
		ofstream file(obj.getFileName());
		file.close();
		displayFileOnTextBox(obj.getFileName());
	}
	private: System::Void checkProducts_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (String::IsNullOrEmpty(textBox_day_curr->Text)) throw "Поле дня пусте!";
			try
			{
				current_date.setDay(System::Convert::ToInt64(textBox_day_curr->Text));
			}
			catch (System::FormatException^) {
				throw "Поле дня не є числом!";
			}
			currEerrorDateLabelText("");

			if (String::IsNullOrEmpty(textBox_month_curr->Text)) throw "Поле місяця пусте!";
			try
			{
				current_date.setMonth(System::Convert::ToInt64(textBox_month_curr->Text));
			}
			catch (System::FormatException^) {
				throw "Поле місяця не є числом!";
			}
			currEerrorDateLabelText("");

			if (String::IsNullOrEmpty(textBox_year_curr->Text)) throw "Поле року пусте!";
			try
			{
				current_date.setYear(System::Convert::ToInt64(textBox_year_curr->Text));
			}
			catch (System::FormatException^) {
				throw "Поле року не є числом!";
			}
			currEerrorDateLabelText("");

			isValidDate(current_date.getDay(), current_date.getMonth(), current_date.getYear());
			currEerrorDateLabelText("");

			sortAndDisplayDates(obj.getFileName());
		}
		catch (const char* s)
		{
			currEerrorDateLabelText(s);
		}
	}
	};
}
