#pragma once
#include <msclr\marshal_cppstd.h>
#include<iostream>
#include <vector>
#include<string> // for string class
namespace projetteraz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// 
	/// 
	/// 
	/// </summary>
	/// 
	/// 
	/// 
	

	/// Stwórz abstrakcyjna klase obiekt
	class Obiekt
	{
	public:
		std::string nazwa;
		int iloscParametrow;
		int iloscObiektow;
		std::vector<std::string>vektorParametrow;
		Obiekt(std::string nazwa, int iloscParametrow,int iloscObiektow, std::vector<std::string>vektorParametrow) {};
		Obiekt() {};

		void dodawanieIlosc(int dodadkoweObiekty) {this->iloscObiektow = this->iloscObiektow + dodadkoweObiekty; }
		bool odejmowanieIlosc(int dodatkoweObiekty) {
			if ((this->iloscObiektow - dodatkoweObiekty) >= 0) {
				this->iloscObiektow = this->iloscObiektow - dodatkoweObiekty;
				return true;
			
			}
			else {
				return false;
			}


			
		
		}
		
	};

	/// Stwórz klasy rezystor itd
	class Rezystor : public Obiekt {
	private:
		int ohm;

	public:
		Rezystor(std::string nazwa, int iloscParametrow, int iloscObiektow, std::vector<std::string>vektorParametrow) { 
			this->nazwa = nazwa; 
			this->iloscParametrow = iloscParametrow;
			this->iloscObiektow = iloscObiektow;
			this->vektorParametrow = vektorParametrow;
			this->ohm = std::stoi(this->vektorParametrow.at(0));
			
			
		}
	};

	/// Klasa Kondensator

	class Kondensator : public Obiekt {

	private:
		int volt;
		int pojemnosc;

	public:
		Kondensator(std::string nazwa, int iloscParametrow, int iloscObiektow, std::vector<std::string>vektorParametrow) {
			this->nazwa = nazwa;
			this->iloscParametrow = iloscParametrow;
			this->iloscObiektow = iloscObiektow;
			this->vektorParametrow = vektorParametrow;
			this->volt = std::stoi(this->vektorParametrow.at(0));
			this->pojemnosc = std::stoi(this->vektorParametrow.at(1));
		}

	};

	///Klasa dioda

	class Dioda : public Obiekt {
	private:
		int volt;
		std::string kolor;

	public:
		Dioda(std::string nazwa, int iloscParametrow, int iloscObiektow, std::vector<std::string>vektorParametrow) {
			this->nazwa = nazwa;
			this->iloscParametrow = iloscParametrow;
			this->iloscObiektow = iloscObiektow;
			this->vektorParametrow = vektorParametrow;
			this->volt = std::stoi(this->vektorParametrow.at(0));
			this->kolor = this->vektorParametrow.at(1));

		}
	};


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ componentName;
	private: System::Windows::Forms::TextBox^ parameterName;

	private: System::Windows::Forms::TextBox^ ileName;
	private: System::Windows::Forms::Button^ searchButton;

	private: System::Windows::Forms::Button^ plusButton;
	private: System::Windows::Forms::Button^ minusButton;







	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListView^ listComponentName;

	private: System::Windows::Forms::Label^ label6;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->componentName = (gcnew System::Windows::Forms::TextBox());
			this->parameterName = (gcnew System::Windows::Forms::TextBox());
			this->ileName = (gcnew System::Windows::Forms::TextBox());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->plusButton = (gcnew System::Windows::Forms::Button());
			this->minusButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listComponentName = (gcnew System::Windows::Forms::ListView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(817, -1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(220, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Magazyn";
			// 
			// componentName
			// 
			this->componentName->Location = System::Drawing::Point(57, 133);
			this->componentName->Name = L"componentName";
			this->componentName->Size = System::Drawing::Size(432, 26);
			this->componentName->TabIndex = 2;
			// 
			// parameterName
			// 
			this->parameterName->Location = System::Drawing::Point(614, 133);
			this->parameterName->Name = L"parameterName";
			this->parameterName->Size = System::Drawing::Size(351, 26);
			this->parameterName->TabIndex = 3;
			// 
			// ileName
			// 
			this->ileName->Location = System::Drawing::Point(1151, 133);
			this->ileName->Name = L"ileName";
			this->ileName->Size = System::Drawing::Size(115, 26);
			this->ileName->TabIndex = 4;
			// 
			// searchButton
			// 
			this->searchButton->Location = System::Drawing::Point(126, 208);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(278, 81);
			this->searchButton->TabIndex = 5;
			this->searchButton->Text = L"wyszukaj";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &MyForm::searchButton_Click);
			// 
			// plusButton
			// 
			this->plusButton->Location = System::Drawing::Point(649, 208);
			this->plusButton->Name = L"plusButton";
			this->plusButton->Size = System::Drawing::Size(284, 81);
			this->plusButton->TabIndex = 6;
			this->plusButton->Text = L"dodaj";
			this->plusButton->UseVisualStyleBackColor = true;
			this->plusButton->Click += gcnew System::EventHandler(this, &MyForm::plusButton_Click);
			// 
			// minusButton
			// 
			this->minusButton->Location = System::Drawing::Point(1106, 208);
			this->minusButton->Name = L"minusButton";
			this->minusButton->Size = System::Drawing::Size(263, 81);
			this->minusButton->TabIndex = 7;
			this->minusButton->Text = L"odejmij";
			this->minusButton->UseVisualStyleBackColor = true;
			this->minusButton->Click += gcnew System::EventHandler(this, &MyForm::minusButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(162, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 26);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Mazwa Komponenty";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(677, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(243, 26);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Parametry Komponentu";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(1183, 81);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 26);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Iloœæ";
			// 
			// listComponentName
			// 
			this->listComponentName->HideSelection = false;
			this->listComponentName->Location = System::Drawing::Point(17, 388);
			this->listComponentName->Name = L"listComponentName";
			this->listComponentName->Size = System::Drawing::Size(1429, 297);
			this->listComponentName->TabIndex = 11;
			this->listComponentName->UseCompatibleStateImageBehavior = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(31, 341);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(198, 26);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Lisa Komponentów";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1765, 721);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listComponentName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->minusButton);
			this->Controls->Add(this->plusButton);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->ileName);
			this->Controls->Add(this->parameterName);
			this->Controls->Add(this->componentName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	static std::string toStandardString(System::String^ string)
		{
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);

			return returnString;
		}


private: std::vector<std::string> getState() {
	System::String^  component;
	System::String^  parametr;
	System::String^  ile;

	component = this->componentName->Text;
	parametr = this->parameterName->Text;
	ile = this->ileName->Text;
	
	std::string componentString = toStandardString(component);
	std::string parametrString = toStandardString(parametr);
	std::string ileString = toStandardString(ile);
	std::vector<std::string> stanWigeta;

	stanWigeta.push_back(componentString);
	stanWigeta.push_back(parametrString);
	stanWigeta.push_back(ileString);
	return stanWigeta;
}

	  private: std::vector<std::string> splitString(std::string input) {
		   std::vector<std::string> splitted;
		   std::string temp = "";
		   for (auto elem : input) {
			   if (elem == ',') {
				   splitted.push_back(temp);
				   temp = "";
			   }
			   else {
				   temp += elem;
			   }
		   }
		   if (temp != "") {
			   splitted.push_back(temp);
		   }

		   return splitted;
	   }

	  


	
private: System::Void plusButton_Click(System::Object^ sender, System::EventArgs^ e) {
	std::vector<std::string> stanWigeta = getState();
	std::string componentString = stanWigeta.at(0);
	std::string parametrString = stanWigeta.at(1);
	std::string ileString = stanWigeta.at(2);

	int ilosc = std::stoi(ileString);

	std::vector<std::string> parameters = splitString(parametrString);

	

}
private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void minusButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}



