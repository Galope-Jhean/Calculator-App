#pragma once

namespace ModernCalculatorUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalculatorUI
	/// </summary>
	public ref class CalculatorUI : public System::Windows::Forms::Form
	{
	public:
		CalculatorUI(void)
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
		~CalculatorUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ displayNumber;
	private: System::Windows::Forms::Button^ btnSeven;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ buttonHalf;
	private: System::Windows::Forms::Button^ btnZero;
	private: System::Windows::Forms::Button^ btnDecimal;







	private: System::Windows::Forms::Button^ btnSubtract;
	private: System::Windows::Forms::Button^ btnThree;


	private: System::Windows::Forms::Button^ btnTwo;

	private: System::Windows::Forms::Button^ btnOne;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnSix;


	private: System::Windows::Forms::Button^ btnFive;

	private: System::Windows::Forms::Button^ btnFour;

	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnNine;

	private: System::Windows::Forms::Button^ btnEight;
	private: System::Windows::Forms::Button^ btnEqual;


	private: System::Windows::Forms::Button^ btnCLR;
	private: System::Windows::Forms::Label^ lblEquation;




















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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnCLR = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonHalf = (gcnew System::Windows::Forms::Button());
			this->btnZero = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btnThree = (gcnew System::Windows::Forms::Button());
			this->btnTwo = (gcnew System::Windows::Forms::Button());
			this->btnOne = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSix = (gcnew System::Windows::Forms::Button());
			this->btnFive = (gcnew System::Windows::Forms::Button());
			this->btnFour = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnNine = (gcnew System::Windows::Forms::Button());
			this->btnEight = (gcnew System::Windows::Forms::Button());
			this->btnSeven = (gcnew System::Windows::Forms::Button());
			this->displayNumber = (gcnew System::Windows::Forms::TextBox());
			this->lblEquation = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->panel1->Controls->Add(this->btnEqual);
			this->panel1->Controls->Add(this->btnCLR);
			this->panel1->Controls->Add(this->btnMultiply);
			this->panel1->Controls->Add(this->buttonHalf);
			this->panel1->Controls->Add(this->btnZero);
			this->panel1->Controls->Add(this->btnDecimal);
			this->panel1->Controls->Add(this->btnSubtract);
			this->panel1->Controls->Add(this->btnThree);
			this->panel1->Controls->Add(this->btnTwo);
			this->panel1->Controls->Add(this->btnOne);
			this->panel1->Controls->Add(this->btnAdd);
			this->panel1->Controls->Add(this->btnSix);
			this->panel1->Controls->Add(this->btnFive);
			this->panel1->Controls->Add(this->btnFour);
			this->panel1->Controls->Add(this->btnDelete);
			this->panel1->Controls->Add(this->btnNine);
			this->panel1->Controls->Add(this->btnEight);
			this->panel1->Controls->Add(this->btnSeven);
			this->panel1->ForeColor = System::Drawing::Color::DimGray;
			this->panel1->Location = System::Drawing::Point(12, 133);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(308, 385);
			this->panel1->TabIndex = 0;
			// 
			// btnEqual
			// 
			this->btnEqual->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->btnEqual->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnEqual->FlatAppearance->BorderSize = 0;
			this->btnEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->ForeColor = System::Drawing::Color::Transparent;
			this->btnEqual->Location = System::Drawing::Point(157, 308);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(138, 56);
			this->btnEqual->TabIndex = 20;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = false;
			this->btnEqual->Click += gcnew System::EventHandler(this, &CalculatorUI::btnEqual_Click);
			// 
			// btnCLR
			// 
			this->btnCLR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btnCLR->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnCLR->FlatAppearance->BorderSize = 0;
			this->btnCLR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCLR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCLR->ForeColor = System::Drawing::Color::Transparent;
			this->btnCLR->Location = System::Drawing::Point(13, 308);
			this->btnCLR->Name = L"btnCLR";
			this->btnCLR->Size = System::Drawing::Size(138, 56);
			this->btnCLR->TabIndex = 19;
			this->btnCLR->Text = L"CLR";
			this->btnCLR->UseVisualStyleBackColor = false;
			this->btnCLR->Click += gcnew System::EventHandler(this, &CalculatorUI::btnCLR_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnMultiply->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnMultiply->FlatAppearance->BorderSize = 0;
			this->btnMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->ForeColor = System::Drawing::Color::Black;
			this->btnMultiply->Location = System::Drawing::Point(229, 236);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(66, 56);
			this->btnMultiply->TabIndex = 18;
			this->btnMultiply->Text = L"x";
			this->btnMultiply->UseVisualStyleBackColor = false;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &CalculatorUI::enterOperator);
			// 
			// buttonHalf
			// 
			this->buttonHalf->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->buttonHalf->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonHalf->FlatAppearance->BorderSize = 0;
			this->buttonHalf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonHalf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonHalf->ForeColor = System::Drawing::Color::Black;
			this->buttonHalf->Location = System::Drawing::Point(157, 236);
			this->buttonHalf->Name = L"buttonHalf";
			this->buttonHalf->Size = System::Drawing::Size(66, 56);
			this->buttonHalf->TabIndex = 17;
			this->buttonHalf->Text = L"/";
			this->buttonHalf->UseVisualStyleBackColor = false;
			this->buttonHalf->Click += gcnew System::EventHandler(this, &CalculatorUI::enterOperator);
			// 
			// btnZero
			// 
			this->btnZero->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnZero->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnZero->FlatAppearance->BorderSize = 0;
			this->btnZero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZero->ForeColor = System::Drawing::Color::Black;
			this->btnZero->Location = System::Drawing::Point(85, 236);
			this->btnZero->Name = L"btnZero";
			this->btnZero->Size = System::Drawing::Size(66, 56);
			this->btnZero->TabIndex = 16;
			this->btnZero->Text = L"0";
			this->btnZero->UseVisualStyleBackColor = false;
			this->btnZero->Click += gcnew System::EventHandler(this, &CalculatorUI::enterNumber);
			// 
			// btnDecimal
			// 
			this->btnDecimal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnDecimal->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnDecimal->FlatAppearance->BorderSize = 0;
			this->btnDecimal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecimal->ForeColor = System::Drawing::Color::Black;
			this->btnDecimal->Location = System::Drawing::Point(13, 236);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(66, 56);
			this->btnDecimal->TabIndex = 15;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = false;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &CalculatorUI::btnDecimal_Click);
			// 
			// btnSubtract
			// 
			this->btnSubtract->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnSubtract->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSubtract->FlatAppearance->BorderSize = 0;
			this->btnSubtract->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract->ForeColor = System::Drawing::Color::Black;
			this->btnSubtract->Location = System::Drawing::Point(229, 165);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(66, 56);
			this->btnSubtract->TabIndex = 14;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = false;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &CalculatorUI::enterOperator);
			// 
			// btnThree
			// 
			this->btnThree->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnThree->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnThree->FlatAppearance->BorderSize = 0;
			this->btnThree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThree->ForeColor = System::Drawing::Color::Black;
			this->btnThree->Location = System::Drawing::Point(157, 165);
			this->btnThree->Name = L"btnThree";
			this->btnThree->Size = System::Drawing::Size(66, 56);
			this->btnThree->TabIndex = 13;
			this->btnThree->Text = L"3";
			this->btnThree->UseVisualStyleBackColor = false;
			this->btnThree->Click += gcnew System::EventHandler(this, &CalculatorUI::enterNumber);
			// 
			// btnTwo
			// 
			this->btnTwo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnTwo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnTwo->FlatAppearance->BorderSize = 0;
			this->btnTwo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTwo->ForeColor = System::Drawing::Color::Black;
			this->btnTwo->Location = System::Drawing::Point(85, 165);
			this->btnTwo->Name = L"btnTwo";
			this->btnTwo->Size = System::Drawing::Size(66, 56);
			this->btnTwo->TabIndex = 12;
			this->btnTwo->Text = L"2";
			this->btnTwo->UseVisualStyleBackColor = false;
			this->btnTwo->Click += gcnew System::EventHandler(this, &CalculatorUI::enterNumber);
			// 
			// btnOne
			// 
			this->btnOne->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnOne->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnOne->FlatAppearance->BorderSize = 0;
			this->btnOne->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOne->ForeColor = System::Drawing::Color::Black;
			this->btnOne->Location = System::Drawing::Point(13, 165);
			this->btnOne->Name = L"btnOne";
			this->btnOne->Size = System::Drawing::Size(66, 56);
			this->btnOne->TabIndex = 11;
			this->btnOne->Text = L"1";
			this->btnOne->UseVisualStyleBackColor = false;
			this->btnOne->Click += gcnew System::EventHandler(this, &CalculatorUI::enterNumber);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::Black;
			this->btnAdd->Location = System::Drawing::Point(229, 94);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(66, 56);
			this->btnAdd->TabIndex = 10;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CalculatorUI::enterOperator);
			// 
			// btnSix
			// 
			this->btnSix->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnSix->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSix->FlatAppearance->BorderSize = 0;
			this->btnSix->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSix->ForeColor = System::Drawing::Color::Black;
			this->btnSix->Location = System::Drawing::Point(157, 94);
			this->btnSix->Name = L"btnSix";
			this->btnSix->Size = System::Drawing::Size(66, 56);
			this->btnSix->TabIndex = 9;
			this->btnSix->Text = L"6";
			this->btnSix->UseVisualStyleBackColor = false;
			this->btnSix->Click += gcnew System::EventHandler(this, &CalculatorUI::enterNumber);
			// 
			// btnFive
			// 
			this->btnFive->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnFive->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnFive->FlatAppearance->BorderSize = 0;
			this->btnFive->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFive->ForeColor = System::Drawing::Color::Black;
			this->btnFive->Location = System::Drawing::Point(85, 94);
			this->btnFive->Name = L"btnFive";
			this->btnFive->Size = System::Drawing::Size(66, 56);
			this->btnFive->TabIndex = 8;
			this->btnFive->Text = L"5";
			this->btnFive->UseVisualStyleBackColor = false;
			this->btnFive->Click += gcnew System::EventHandler(this, &CalculatorUI::enterNumber);
			// 
			// btnFour
			// 
			this->btnFour->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnFour->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnFour->FlatAppearance->BorderSize = 0;
			this->btnFour->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFour->ForeColor = System::Drawing::Color::Black;
			this->btnFour->Location = System::Drawing::Point(13, 94);
			this->btnFour->Name = L"btnFour";
			this->btnFour->Size = System::Drawing::Size(66, 56);
			this->btnFour->TabIndex = 7;
			this->btnFour->Text = L"4";
			this->btnFour->UseVisualStyleBackColor = false;
			this->btnFour->Click += gcnew System::EventHandler(this, &CalculatorUI::enterNumber);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->btnDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::Transparent;
			this->btnDelete->Location = System::Drawing::Point(229, 23);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(66, 56);
			this->btnDelete->TabIndex = 6;
			this->btnDelete->Text = L"DEL";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &CalculatorUI::btnDelete_Click);
			// 
			// btnNine
			// 
			this->btnNine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnNine->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnNine->FlatAppearance->BorderSize = 0;
			this->btnNine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNine->ForeColor = System::Drawing::Color::Black;
			this->btnNine->Location = System::Drawing::Point(157, 23);
			this->btnNine->Name = L"btnNine";
			this->btnNine->Size = System::Drawing::Size(66, 56);
			this->btnNine->TabIndex = 5;
			this->btnNine->Text = L"9";
			this->btnNine->UseVisualStyleBackColor = false;
			this->btnNine->Click += gcnew System::EventHandler(this, &CalculatorUI::enterNumber);
			// 
			// btnEight
			// 
			this->btnEight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnEight->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnEight->FlatAppearance->BorderSize = 0;
			this->btnEight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEight->ForeColor = System::Drawing::Color::Black;
			this->btnEight->Location = System::Drawing::Point(85, 23);
			this->btnEight->Name = L"btnEight";
			this->btnEight->Size = System::Drawing::Size(66, 56);
			this->btnEight->TabIndex = 4;
			this->btnEight->Text = L"8";
			this->btnEight->UseVisualStyleBackColor = false;
			this->btnEight->Click += gcnew System::EventHandler(this, &CalculatorUI::enterNumber);
			// 
			// btnSeven
			// 
			this->btnSeven->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->btnSeven->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSeven->FlatAppearance->BorderSize = 0;
			this->btnSeven->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeven->ForeColor = System::Drawing::Color::Black;
			this->btnSeven->Location = System::Drawing::Point(13, 23);
			this->btnSeven->Name = L"btnSeven";
			this->btnSeven->Size = System::Drawing::Size(66, 56);
			this->btnSeven->TabIndex = 3;
			this->btnSeven->Text = L"7";
			this->btnSeven->UseVisualStyleBackColor = false;
			this->btnSeven->Click += gcnew System::EventHandler(this, &CalculatorUI::enterNumber);
			// 
			// displayNumber
			// 
			this->displayNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->displayNumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->displayNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->displayNumber->ForeColor = System::Drawing::Color::Black;
			this->displayNumber->Location = System::Drawing::Point(12, 30);
			this->displayNumber->Multiline = true;
			this->displayNumber->Name = L"displayNumber";
			this->displayNumber->ReadOnly = true;
			this->displayNumber->Size = System::Drawing::Size(308, 82);
			this->displayNumber->TabIndex = 1;
			this->displayNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblEquation
			// 
			this->lblEquation->AutoSize = true;
			this->lblEquation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->lblEquation->ForeColor = System::Drawing::Color::Gray;
			this->lblEquation->Location = System::Drawing::Point(22, 90);
			this->lblEquation->Name = L"lblEquation";
			this->lblEquation->Size = System::Drawing::Size(0, 13);
			this->lblEquation->TabIndex = 2;
			// 
			// CalculatorUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(332, 530);
			this->Controls->Add(this->lblEquation);
			this->Controls->Add(this->displayNumber);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"CalculatorUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CalculatorUI";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
		bool opClick;
//button numbers
private: System::Void enterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	if (displayNumber->Text == "0")
	{
		displayNumber->Text = Numbers->Text;
	}
	else
	{
		displayNumber->Text += Numbers->Text;
	}
}
//operator button 
private: System::Void enterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ numOperator = safe_cast<Button^>(sender);
	if (displayNumber->Text != "") {
		firstDigit = double::Parse(displayNumber->Text);
		opClick = false;
	}
	displayNumber->Text = "";
	if (opClick==false) {
		operators = numOperator->Text;
	}
	
}
//decimal button
private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!displayNumber->Text->Contains("."))
	{
		displayNumber->Text = displayNumber->Text + ".";
	}
}
//delete button
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

	if (displayNumber->Text->Length > 0)
	{
		displayNumber->Text = displayNumber->Text->Remove(displayNumber->Text->Length - 1, 1);
	}
	if (displayNumber->Text == "")
	{
		displayNumber->Text = "";
	}
}
//clear button
private: System::Void btnCLR_Click(System::Object^ sender, System::EventArgs^ e) {
	displayNumber->Text = "";
	lblEquation->Text = "";
}
//equals button

private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = double::Parse(displayNumber->Text);

	if (operators == "+") {
		result = firstDigit + secondDigit;
		displayNumber->Text = System::Convert::ToString(result);
	}
	else if (operators == "/") {
		result = firstDigit / secondDigit;
		displayNumber->Text = System::Convert::ToString(result);
	}
	else if (operators == "-") {
		result = firstDigit - secondDigit;
		displayNumber->Text = System::Convert::ToString(result);
	}
	else if (operators == "x") {
		result = firstDigit * secondDigit;
		displayNumber->Text = System::Convert::ToString(result);
	}
	else
	{
		String^ prompt = "Syntax Error!";
	}
	{

	}
	lblEquation->Text = System::Convert::ToString(firstDigit) +" " + operators +" " + System::Convert::ToString(secondDigit) +" = "+ System::Convert::ToString(result);
}
};
}
