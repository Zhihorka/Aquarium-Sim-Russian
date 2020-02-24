#pragma once
#include "FishHeader.h"
#include "Variables.h"
namespace Fish5000 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Playground
	/// </summary>
	public ref class Playground : public System::Windows::Forms::Form
	{
	public:
		Playground(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Playground()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  PeaceFishPB1;
	private: System::Windows::Forms::PictureBox^  PeaceFishPB2;
	private: System::Windows::Forms::PictureBox^  PeaceFishPB3;

	private: System::Windows::Forms::PictureBox^  PeaceFishPB4;
	private: System::Windows::Forms::PictureBox^  AngryFishPB4;
	private: System::Windows::Forms::PictureBox^  AngryFishPB3;
	private: System::Windows::Forms::PictureBox^  AngryFishPB2;
	private: System::Windows::Forms::PictureBox^  AngryFishPB1;
	private: System::Windows::Forms::Timer^  PeaceFishTimer;
	private: System::Windows::Forms::Timer^  AngryFishTimer;
	private: System::Windows::Forms::Timer^  PeaceFishTimer2;
	private: System::Windows::Forms::Timer^  LocationUpdateBuffer;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;

	private: System::Windows::Forms::Timer^  StatisticTimer;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Timer^  Zaderzhka;
	private: System::Windows::Forms::Timer^  FishFoodTimer;
	private: System::Windows::Forms::PictureBox^  WormPB;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Timer^  ChaseFish;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Timer^  AddPeaceFishAnimation;
	private: System::Windows::Forms::Timer^  AddAngryFishAnimation;
	private: System::Windows::Forms::Timer^  AddFoodAnimation;
	private: System::Windows::Forms::PictureBox^  Sachek;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::PictureBox^  HandPB;

	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Timer^  EventTimer;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::Timer^  SeaweedTimer;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Timer^ EnterTime;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;










	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->PeaceFishPB1 = (gcnew System::Windows::Forms::PictureBox());
			this->PeaceFishPB2 = (gcnew System::Windows::Forms::PictureBox());
			this->PeaceFishPB3 = (gcnew System::Windows::Forms::PictureBox());
			this->PeaceFishPB4 = (gcnew System::Windows::Forms::PictureBox());
			this->AngryFishPB4 = (gcnew System::Windows::Forms::PictureBox());
			this->AngryFishPB3 = (gcnew System::Windows::Forms::PictureBox());
			this->AngryFishPB2 = (gcnew System::Windows::Forms::PictureBox());
			this->AngryFishPB1 = (gcnew System::Windows::Forms::PictureBox());
			this->PeaceFishTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->AngryFishTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->PeaceFishTimer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->LocationUpdateBuffer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->StatisticTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->Zaderzhka = (gcnew System::Windows::Forms::Timer(this->components));
			this->FishFoodTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->WormPB = (gcnew System::Windows::Forms::PictureBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->ChaseFish = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->AddPeaceFishAnimation = (gcnew System::Windows::Forms::Timer(this->components));
			this->AddAngryFishAnimation = (gcnew System::Windows::Forms::Timer(this->components));
			this->AddFoodAnimation = (gcnew System::Windows::Forms::Timer(this->components));
			this->Sachek = (gcnew System::Windows::Forms::PictureBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->HandPB = (gcnew System::Windows::Forms::PictureBox());
			this->EventTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->SeaweedTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->EnterTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PeaceFishPB1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PeaceFishPB2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PeaceFishPB3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PeaceFishPB4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngryFishPB4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngryFishPB3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngryFishPB2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngryFishPB1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WormPB))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sachek))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HandPB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Salmon;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(1131, 208);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(164, 78);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Покормить";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Playground::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Tomato;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1128, 426);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 78);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Хищная рыба";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Playground::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(1137, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(238, 78);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Мирная рыбка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(280, 710);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(850, 77);
			this->button3->TabIndex = 7;
			this->button3->Text = L"PeaceFishPB3";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Enabled = false;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(280, 86);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(23, 660);
			this->button5->TabIndex = 8;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Enabled = false;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(1121, 86);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(23, 671);
			this->button6->TabIndex = 9;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// PeaceFishPB1
			// 
			this->PeaceFishPB1->Location = System::Drawing::Point(30, 570);
			this->PeaceFishPB1->Name = L"PeaceFishPB1";
			this->PeaceFishPB1->Size = System::Drawing::Size(80, 80);
			this->PeaceFishPB1->TabIndex = 10;
			this->PeaceFishPB1->TabStop = false;
			this->PeaceFishPB1->Visible = false;
			// 
			// PeaceFishPB2
			// 
			this->PeaceFishPB2->Location = System::Drawing::Point(51, 570);
			this->PeaceFishPB2->Name = L"PeaceFishPB2";
			this->PeaceFishPB2->Size = System::Drawing::Size(80, 80);
			this->PeaceFishPB2->TabIndex = 11;
			this->PeaceFishPB2->TabStop = false;
			this->PeaceFishPB2->Visible = false;
			// 
			// PeaceFishPB3
			// 
			this->PeaceFishPB3->Location = System::Drawing::Point(75, 570);
			this->PeaceFishPB3->Name = L"PeaceFishPB3";
			this->PeaceFishPB3->Size = System::Drawing::Size(80, 80);
			this->PeaceFishPB3->TabIndex = 12;
			this->PeaceFishPB3->TabStop = false;
			this->PeaceFishPB3->Visible = false;
			// 
			// PeaceFishPB4
			// 
			this->PeaceFishPB4->Location = System::Drawing::Point(101, 570);
			this->PeaceFishPB4->Name = L"PeaceFishPB4";
			this->PeaceFishPB4->Size = System::Drawing::Size(80, 80);
			this->PeaceFishPB4->TabIndex = 13;
			this->PeaceFishPB4->TabStop = false;
			this->PeaceFishPB4->Visible = false;
			// 
			// AngryFishPB4
			// 
			this->AngryFishPB4->Location = System::Drawing::Point(101, 661);
			this->AngryFishPB4->Name = L"AngryFishPB4";
			this->AngryFishPB4->Size = System::Drawing::Size(80, 80);
			this->AngryFishPB4->TabIndex = 17;
			this->AngryFishPB4->TabStop = false;
			this->AngryFishPB4->Visible = false;
			// 
			// AngryFishPB3
			// 
			this->AngryFishPB3->Location = System::Drawing::Point(75, 661);
			this->AngryFishPB3->Name = L"AngryFishPB3";
			this->AngryFishPB3->Size = System::Drawing::Size(80, 80);
			this->AngryFishPB3->TabIndex = 16;
			this->AngryFishPB3->TabStop = false;
			this->AngryFishPB3->Visible = false;
			// 
			// AngryFishPB2
			// 
			this->AngryFishPB2->Location = System::Drawing::Point(51, 661);
			this->AngryFishPB2->Name = L"AngryFishPB2";
			this->AngryFishPB2->Size = System::Drawing::Size(80, 80);
			this->AngryFishPB2->TabIndex = 15;
			this->AngryFishPB2->TabStop = false;
			this->AngryFishPB2->Visible = false;
			// 
			// AngryFishPB1
			// 
			this->AngryFishPB1->Location = System::Drawing::Point(30, 661);
			this->AngryFishPB1->Name = L"AngryFishPB1";
			this->AngryFishPB1->Size = System::Drawing::Size(80, 80);
			this->AngryFishPB1->TabIndex = 14;
			this->AngryFishPB1->TabStop = false;
			this->AngryFishPB1->Visible = false;
			// 
			// PeaceFishTimer
			// 
			this->PeaceFishTimer->Enabled = true;
			this->PeaceFishTimer->Interval = 25;
			this->PeaceFishTimer->Tick += gcnew System::EventHandler(this, &Playground::PeaceFishTimer_Tick);
			// 
			// AngryFishTimer
			// 
			this->AngryFishTimer->Enabled = true;
			this->AngryFishTimer->Interval = 25;
			this->AngryFishTimer->Tick += gcnew System::EventHandler(this, &Playground::AngryFishTimer_Tick);
			// 
			// PeaceFishTimer2
			// 
			this->PeaceFishTimer2->Enabled = true;
			this->PeaceFishTimer2->Interval = 25;
			this->PeaceFishTimer2->Tick += gcnew System::EventHandler(this, &Playground::PeaceFishTimer2_Tick);
			// 
			// LocationUpdateBuffer
			// 
			this->LocationUpdateBuffer->Enabled = true;
			this->LocationUpdateBuffer->Interval = 200;
			this->LocationUpdateBuffer->Tick += gcnew System::EventHandler(this, &Playground::LocationUpdateBuffer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(13, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(13, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 19;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(81, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 21;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(81, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 20;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(141, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 20);
			this->label5->TabIndex = 23;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(145, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 20);
			this->label6->TabIndex = 22;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(200, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 20);
			this->label7->TabIndex = 25;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(202, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 20);
			this->label8->TabIndex = 24;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::ForestGreen;
			this->label9->Location = System::Drawing::Point(28, 153);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 20);
			this->label9->TabIndex = 27;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::ForestGreen;
			this->label10->Location = System::Drawing::Point(24, 187);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 20);
			this->label10->TabIndex = 26;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::ForestGreen;
			this->label11->Location = System::Drawing::Point(96, 153);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 20);
			this->label11->TabIndex = 29;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::ForestGreen;
			this->label12->Location = System::Drawing::Point(96, 187);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 20);
			this->label12->TabIndex = 28;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::ForestGreen;
			this->label13->Location = System::Drawing::Point(156, 153);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(60, 20);
			this->label13->TabIndex = 31;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::ForestGreen;
			this->label14->Location = System::Drawing::Point(160, 187);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(60, 20);
			this->label14->TabIndex = 30;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::ForestGreen;
			this->label15->Location = System::Drawing::Point(217, 153);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 20);
			this->label15->TabIndex = 33;
			this->label15->Text = L"label15";
			// 
			// StatisticTimer
			// 
			this->StatisticTimer->Enabled = true;
			this->StatisticTimer->Tick += gcnew System::EventHandler(this, &Playground::StatisticTimer_Tick);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::ForestGreen;
			this->label16->Location = System::Drawing::Point(217, 187);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(60, 20);
			this->label16->TabIndex = 32;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Indigo;
			this->label17->Location = System::Drawing::Point(367, 701);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(60, 20);
			this->label17->TabIndex = 34;
			this->label17->Text = L"label17";
			this->label17->Visible = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DarkOrange;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(1137, 278);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(158, 81);
			this->button7->TabIndex = 35;
			this->button7->Text = L"Мирная рыба";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Playground::button7_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::DarkOrange;
			this->label18->Location = System::Drawing::Point(13, 223);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(60, 20);
			this->label18->TabIndex = 39;
			this->label18->Text = L"label18";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::DarkOrange;
			this->label19->Location = System::Drawing::Point(81, 223);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(60, 20);
			this->label19->TabIndex = 38;
			this->label19->Text = L"label19";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::DarkOrange;
			this->label20->Location = System::Drawing::Point(147, 223);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(60, 20);
			this->label20->TabIndex = 37;
			this->label20->Text = L"label20";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::DarkOrange;
			this->label21->Location = System::Drawing::Point(207, 223);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(60, 20);
			this->label21->TabIndex = 36;
			this->label21->Text = L"label21";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::OrangeRed;
			this->label22->Location = System::Drawing::Point(13, 275);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(60, 20);
			this->label22->TabIndex = 43;
			this->label22->Text = L"label22";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::OrangeRed;
			this->label23->Location = System::Drawing::Point(81, 275);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(60, 20);
			this->label23->TabIndex = 42;
			this->label23->Text = L"label23";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::Color::OrangeRed;
			this->label24->Location = System::Drawing::Point(147, 275);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(60, 20);
			this->label24->TabIndex = 41;
			this->label24->Text = L"label24";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::Color::OrangeRed;
			this->label25->Location = System::Drawing::Point(207, 275);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(60, 20);
			this->label25->TabIndex = 40;
			this->label25->Text = L"label25";
			// 
			// Zaderzhka
			// 
			this->Zaderzhka->Interval = 50;
			this->Zaderzhka->Tick += gcnew System::EventHandler(this, &Playground::Zaderzhka_Tick);
			// 
			// FishFoodTimer
			// 
			this->FishFoodTimer->Enabled = true;
			this->FishFoodTimer->Interval = 25;
			this->FishFoodTimer->Tick += gcnew System::EventHandler(this, &Playground::FishFoodTimer_Tick);
			// 
			// WormPB
			// 
			this->WormPB->Location = System::Drawing::Point(210, 697);
			this->WormPB->Name = L"WormPB";
			this->WormPB->Size = System::Drawing::Size(40, 40);
			this->WormPB->TabIndex = 44;
			this->WormPB->TabStop = false;
			this->WormPB->Visible = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::Color::Indigo;
			this->label26->Location = System::Drawing::Point(1169, 177);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(60, 20);
			this->label26->TabIndex = 45;
			this->label26->Text = L"label26";
			this->label26->Visible = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::Color::DarkRed;
			this->label27->Location = System::Drawing::Point(9, 313);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(60, 20);
			this->label27->TabIndex = 46;
			this->label27->Text = L"label27";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->ForeColor = System::Drawing::Color::DarkRed;
			this->label28->Location = System::Drawing::Point(75, 313);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(60, 20);
			this->label28->TabIndex = 47;
			this->label28->Text = L"label28";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->ForeColor = System::Drawing::Color::DarkRed;
			this->label29->Location = System::Drawing::Point(141, 313);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(60, 20);
			this->label29->TabIndex = 48;
			this->label29->Text = L"label29";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->ForeColor = System::Drawing::Color::DarkRed;
			this->label30->Location = System::Drawing::Point(205, 313);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(60, 20);
			this->label30->TabIndex = 49;
			this->label30->Text = L"label30";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->ForeColor = System::Drawing::Color::DeepPink;
			this->label31->Location = System::Drawing::Point(111, 374);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(60, 20);
			this->label31->TabIndex = 51;
			this->label31->Text = L"label31";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->ForeColor = System::Drawing::Color::DeepPink;
			this->label32->Location = System::Drawing::Point(111, 426);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(60, 20);
			this->label32->TabIndex = 50;
			this->label32->Text = L"label32";
			// 
			// ChaseFish
			// 
			this->ChaseFish->Interval = 25;
			this->ChaseFish->Tick += gcnew System::EventHandler(this, &Playground::ChaseFish_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGreen;
			this->panel1->Controls->Add(this->label43);
			this->panel1->Controls->Add(this->label42);
			this->panel1->Controls->Add(this->label41);
			this->panel1->Controls->Add(this->label40);
			this->panel1->Controls->Add(this->label39);
			this->panel1->Controls->Add(this->label38);
			this->panel1->Controls->Add(this->label37);
			this->panel1->Controls->Add(this->label36);
			this->panel1->Controls->Add(this->label35);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label32);
			this->panel1->Controls->Add(this->label31);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->label28);
			this->panel1->Controls->Add(this->label29);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Location = System::Drawing::Point(-1, 144);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(287, 533);
			this->panel1->TabIndex = 52;
			this->panel1->Visible = false;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->ForeColor = System::Drawing::Color::DeepPink;
			this->label43->Location = System::Drawing::Point(222, 446);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(60, 20);
			this->label43->TabIndex = 60;
			this->label43->Text = L"label43";
			this->label43->Visible = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->ForeColor = System::Drawing::Color::DeepPink;
			this->label42->Location = System::Drawing::Point(162, 446);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(60, 20);
			this->label42->TabIndex = 59;
			this->label42->Text = L"label42";
			this->label42->Visible = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->ForeColor = System::Drawing::Color::Black;
			this->label41->Location = System::Drawing::Point(63, 406);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(153, 20);
			this->label41->TabIndex = 58;
			this->label41->Text = L"Еда была съедена";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(72, 354);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(142, 20);
			this->label40->TabIndex = 57;
			this->label40->Text = L"Присутствие еды";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->ForeColor = System::Drawing::Color::Black;
			this->label39->Location = System::Drawing::Point(25, 295);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(194, 20);
			this->label39->TabIndex = 56;
			this->label39->Text = L"Рыбы плывущие за едой";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(23, 249);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(228, 20);
			this->label38->TabIndex = 55;
			this->label38->Text = L"Обнаруженные мирные рыбы";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(37, 207);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(200, 20);
			this->label37->TabIndex = 54;
			this->label37->Text = L"Присутствие мирных рыб";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(9, 122);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(266, 20);
			this->label36->TabIndex = 53;
			this->label36->Text = L"Местоположение мирных рыб (x,y)";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(13, 13);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(246, 20);
			this->label35->TabIndex = 52;
			this->label35->Text = L"Местоположение хищников(x,y)";
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(-1, 105);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(282, 39);
			this->button8->TabIndex = 53;
			this->button8->Text = L"Отображать свойства";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Playground::button8_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::DarkOrange;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(1264, 331);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(20, 24);
			this->label33->TabIndex = 52;
			this->label33->Text = L"0";
			// 
			// AddPeaceFishAnimation
			// 
			this->AddPeaceFishAnimation->Interval = 25;
			this->AddPeaceFishAnimation->Tick += gcnew System::EventHandler(this, &Playground::AddPeaceFishAnimation_Tick);
			// 
			// AddFoodAnimation
			// 
			this->AddFoodAnimation->Interval = 25;
			this->AddFoodAnimation->Tick += gcnew System::EventHandler(this, &Playground::AddFoodAnimation_Tick);
			// 
			// Sachek
			// 
			this->Sachek->Location = System::Drawing::Point(-400, -101);
			this->Sachek->Name = L"Sachek";
			this->Sachek->Size = System::Drawing::Size(483, 200);
			this->Sachek->TabIndex = 55;
			this->Sachek->TabStop = false;
			this->Sachek->Visible = false;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Tomato;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(1264, 472);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(20, 24);
			this->label34->TabIndex = 56;
			this->label34->Text = L"0";
			// 
			// HandPB
			// 
			this->HandPB->Location = System::Drawing::Point(-187, -151);
			this->HandPB->Name = L"HandPB";
			this->HandPB->Size = System::Drawing::Size(250, 250);
			this->HandPB->TabIndex = 57;
			this->HandPB->TabStop = false;
			this->HandPB->Visible = false;
			// 
			// EventTimer
			// 
			this->EventTimer->Tick += gcnew System::EventHandler(this, &Playground::EventTimer_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(382, 559);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 80);
			this->pictureBox1->TabIndex = 58;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(462, 559);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(40, 80);
			this->pictureBox2->TabIndex = 59;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(890, 559);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 80);
			this->pictureBox3->TabIndex = 60;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(961, 559);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(40, 80);
			this->pictureBox4->TabIndex = 61;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(523, 559);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(40, 80);
			this->pictureBox5->TabIndex = 62;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(1036, 559);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(40, 80);
			this->pictureBox6->TabIndex = 63;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Red;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(1131, 499);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(164, 78);
			this->button9->TabIndex = 64;
			this->button9->Text = L"Забрать хищника";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Playground::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Orange;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(1137, 351);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(158, 78);
			this->button10->TabIndex = 65;
			this->button10->Text = L"Забрать рыбу";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Playground::button10_Click);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(59, 82);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(160, 20);
			this->label44->TabIndex = 61;
			this->label44->Text = L"(Для разработчика)";
			// 
			// button11
			// 
			this->button11->Enabled = false;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(1137, 208);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(158, 369);
			this->button11->TabIndex = 66;
			this->button11->Text = L" временно\r\nнедоступно";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			// 
			// EnterTime
			// 
			this->EnterTime->Enabled = true;
			this->EnterTime->Tick += gcnew System::EventHandler(this, &Playground::EnterTime_Tick);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(427, 145);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(506, 31);
			this->label45->TabIndex = 67;
			this->label45->Text = L"Программа моделирования аквариума";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(374, 192);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(644, 31);
			this->label46->TabIndex = 68;
			this->label46->Text = L"Вы можете добвалять мирных рыб (рыбы-клоуны)";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(373, 243);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(645, 31);
			this->label47->TabIndex = 69;
			this->label47->Text = L"Так же вам доступные хищные тропические рыбы";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(436, 291);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(503, 31);
			this->label48->TabIndex = 70;
			this->label48->Text = L"Вы можете добавлять и удалять рыбы ";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(339, 343);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(720, 31);
			this->label49->TabIndex = 71;
			this->label49->Text = L"Мирные рыбы предпочитают корм (кнопка \"покормить\")";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(355, 398);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(678, 31);
			this->label50->TabIndex = 72;
			this->label50->Text = L"Хищные рыбы питаются мирными рыбами-клоунами";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(369, 450);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(632, 55);
			this->label51->TabIndex = 73;
			this->label51->Text = L"Перейти к моделированию";
			this->label51->Click += gcnew System::EventHandler(this, &Playground::label51_Click);
			// 
			// Playground
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1288, 749);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->HandPB);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->Sachek);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->WormPB);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->AngryFishPB4);
			this->Controls->Add(this->AngryFishPB3);
			this->Controls->Add(this->AngryFishPB2);
			this->Controls->Add(this->AngryFishPB1);
			this->Controls->Add(this->PeaceFishPB4);
			this->Controls->Add(this->PeaceFishPB3);
			this->Controls->Add(this->PeaceFishPB2);
			this->Controls->Add(this->PeaceFishPB1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Name = L"Playground";
			this->Text = L"Аквариум";
			this->Load += gcnew System::EventHandler(this, &Playground::Playground_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PeaceFishPB1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PeaceFishPB2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PeaceFishPB3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PeaceFishPB4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngryFishPB4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngryFishPB3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngryFishPB2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngryFishPB1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WormPB))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sachek))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HandPB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Инициализация объектов
		PeaceFish^ NewPeaceFish1;
		PeaceFish^ NewPeaceFish2;
		PeaceFish^ NewPeaceFish3;
		PeaceFish^ NewPeaceFish4;
		AngryFish^ NewAngryFish1;
		AngryFish^ NewAngryFish2;
		AngryFish^ NewAngryFish3;
		AngryFish^ NewAngryFish4;
		FishFood^ NewWorm;
		Fish^ DumpFish;
		int LabelColor = 250;
		//Некоторые функции для интерфейса и обработки
		bool FishFoodChased(int FoodX, int FoodY, int PFX, int PFY, PictureBox^FoodPB, bool Status, PeaceFish^PFObject) {
			if (PF1Created == true) {
				if (WormExist == true) {
					int ActualRange = CalculateRange(FoodX, FoodY, PFX, PFY);
					if (ActualRange < 20) {
						FoodX = 0;
						FoodY = 0;
						PFObject->Set_FishFoodObjectExist(false);
						PFObject->Set_SpotFood(false);
						WormBoop = true;
						WormExist = false;
						return Status = false;
					}else {
						return Status = true;
					}
				}else {
					return Status = true;
				}
			}else {
				return Status = true;
			}

		}
		bool PeaceFishEatenEvent(bool AFStatus, bool PFStatus, bool ZaderzhkaStatus, PictureBox^PFPB, PeaceFish^PFObject, AngryFish^AFObject, int PFX, int PFY, int AFX, int AFY) {
			if (AFStatus == true) {
				if (PFStatus == true)
					if (ZaderzhkaStatus == false) {
						int ActualRange = CalculateRange(PFX, PFY, AFX, AFY);
						if (ActualRange < 40) {
							PFStatus = false;
						//	delete PFObject;
							PFPB->Visible = 0;
							PFX = 9000;
							PFY = 9000;
							bool Status = false;
							AFObject->Set_Engage(Status);
							PeaceFishCount = PeaceFishCount - 1;
							return PFStatus = false;
						}
						else {
							return PFStatus = true;
						}
					}
					else {
						return PFStatus = true;
					}
			}
			else {
				return PFStatus = true;
			}
		}
		int CalculateRange(int x1, int y1, int x2, int y2) {
			int Xer = abs(x1 - x2);
			int Yer = abs(y1 - y2);
			int ActualRange = ceil(sqrt(pow(Xer, 2) + pow(Yer, 2)));
			return ActualRange;
		}
	
		void SmartFishFoodEaten(int FoodX, int FoodY, int FishX, int FishY, PictureBox^PB) {
			int SmartRange = CalculateRange(FoodX, FoodY, FishX, FishY);
			if (SmartRange < 100 && WormBoop == false && WormExist == true) {
				PB->Visible = 0;
				WormBoop = true;
				WormExist = false;
			}
			else if (WormBoop != true && WormExist !=false){
				WormExist = true;
			}

		}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		AddPeaceFishAnimation->Enabled = 1;
		Zaderzhka->Enabled = 1;
		//Создание объектов класса AngryFish
		if (AngryFishCount == 0) {
			AngryFishPB1->Visible = 1;
			AngryFishCount = 1;
			AF1Created = true;
			AngryFishLocationX = 950;
			PeaceFishLocationY = 200;
			NewAngryFish1 = gcnew AngryFish(AngryFishLocationX, PeaceFishLocationY, PeaceFishLifeSpan, PeacFishLifeTime, PeaceFishHungry, AngryFishPB1, Range, NewPeaceFish1, NewPeaceFish2, NewPeaceFish3, NewPeaceFish4, NewAngryFish2, NewAngryFish3, NewAngryFish4, GlobalNewPeaceFishExist, GlobalAngryPeaceFishExist, GlobalFishFoodExist,EventTimer);
			NewAngryFish1->SetLifeTime(1000);
		}
		else if (AngryFishCount == 1) {
			AngryFishPB2->Visible = 1;
			AngryFishCount = 2;
			AF2Created = true;
			AngryFishLocationX = 950;
			PeaceFishLocationY = 200;
			NewAngryFish2 = gcnew AngryFish(AngryFishLocationX, PeaceFishLocationY, PeaceFishLifeSpan, PeacFishLifeTime, PeaceFishHungry, AngryFishPB2, Range, NewPeaceFish1, NewPeaceFish2, NewPeaceFish3, NewPeaceFish4, NewAngryFish2, NewAngryFish3, NewAngryFish4, GlobalNewPeaceFishExist, GlobalAngryPeaceFishExist, GlobalFishFoodExist, EventTimer);
			NewAngryFish2->SetLifeTime(1000);
		}
		else if (AngryFishCount == 2) {
			AngryFishPB3->Visible = 1;
			AngryFishCount = 3;
			AF3Created = true;
			AngryFishLocationX = 950;
			PeaceFishLocationY = 200;
		NewAngryFish3 = gcnew AngryFish(AngryFishLocationX, PeaceFishLocationY, PeaceFishLifeSpan, PeacFishLifeTime, PeaceFishHungry, AngryFishPB3, Range, NewPeaceFish1, NewPeaceFish2, NewPeaceFish3, NewPeaceFish4, NewAngryFish2, NewAngryFish3, NewAngryFish4, GlobalNewPeaceFishExist, GlobalAngryPeaceFishExist, GlobalFishFoodExist, EventTimer);
		NewAngryFish3->SetLifeTime(1000);
		}
		else if (AngryFishCount == 3) {
			AngryFishPB4->Visible = 1;
			AngryFishCount = 4;
			AF4Created = true;
			AngryFishLocationX = 950;
			PeaceFishLocationY = 200;
			NewAngryFish4 = gcnew AngryFish(AngryFishLocationX, PeaceFishLocationY, PeaceFishLifeSpan, PeacFishLifeTime, PeaceFishHungry, AngryFishPB4, Range, NewPeaceFish1, NewPeaceFish2, NewPeaceFish3, NewPeaceFish4, NewAngryFish2, NewAngryFish3, NewAngryFish4, GlobalNewPeaceFishExist, GlobalAngryPeaceFishExist, GlobalFishFoodExist, EventTimer);
			NewAngryFish1->SetLifeTime(1000);
		}
		else if (AngryFishCount ==4) {
			AF1Created = false;
			AF2Created = false;
			AF3Created = false;
			AF4Created = false;
			AngryFishCount = 0;
			AngryFishPB1->Visible = 0;
			AngryFishPB2->Visible = 0;
			AngryFishPB3->Visible = 0;
			AngryFishPB4->Visible = 0;
		}
	}
	private: System::Void AngryFishTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (AF1Created == true) {
			if (PF1Created == true) {
				NewAngryFish1->PeaceFishSetPanicAdvanced_Event += gcnew AngryFish::PeaceFishSetPanicAdvanced_Handler(NewPeaceFish1, &PeaceFish::PeaceFishSetPanic);
			}
			if (PF2Created == true) {
				NewAngryFish1->PeaceFishSetPanicAdvanced_Event += gcnew AngryFish::PeaceFishSetPanicAdvanced_Handler(NewPeaceFish2, &PeaceFish::PeaceFishSetPanic);
			}
			if (PF3Created == true) {
				NewAngryFish1->PeaceFishSetPanicAdvanced_Event += gcnew AngryFish::PeaceFishSetPanicAdvanced_Handler(NewPeaceFish3, &PeaceFish::PeaceFishSetPanic);
			}
			if (PF4Created == true) {
				NewAngryFish1->PeaceFishSetPanicAdvanced_Event += gcnew AngryFish::PeaceFishSetPanicAdvanced_Handler(NewPeaceFish4, &PeaceFish::PeaceFishSetPanic);
			}
			if (AF1Y < 80) {
				AngryFishCount = AngryFishCount - 1;
				AF1Created = false;
				AngryFishPB1->Visible = 0;
			}
		}
		
		
		
		//Обработка событий объектов AngryFish
		if (AF1Created == true) {
			if (PF1Created == true) {
				NewAngryFish1->PeaceFishEatenAdvanced_Event += gcnew AngryFish::PeaceFishEatenAdvanced_Handler(NewPeaceFish1, &PeaceFish::PeaceFishEatenAdvanced);
			}
			if (PF2Created == true) {
				NewAngryFish1->PeaceFishEatenAdvanced_Event += gcnew AngryFish::PeaceFishEatenAdvanced_Handler(NewPeaceFish2, &PeaceFish::PeaceFishEatenAdvanced);
			}
			if (PF3Created == true) {
				NewAngryFish1->PeaceFishEatenAdvanced_Event += gcnew AngryFish::PeaceFishEatenAdvanced_Handler(NewPeaceFish3, &PeaceFish::PeaceFishEatenAdvanced);
			}
			if (PF4Created == true) {
				NewAngryFish1->PeaceFishEatenAdvanced_Event += gcnew AngryFish::PeaceFishEatenAdvanced_Handler(NewPeaceFish4, &PeaceFish::PeaceFishEatenAdvanced);
			}
			NewAngryFish1->FishLifeEndAdvanced_Event += gcnew AngryFish::FishLifeEndAdvanced_Handler(DumpFish, &Fish::FishLifeEndAdvanced);
			NewAngryFish1->GetCreateStatus(PF1Created, PF2Created, PF3Created, PF4Created);
			NewAngryFish1->UpdateAllLocations(PF1X, PF1Y, PF2X, PF2Y, PF3X, PF3Y, PF4X, PF4Y, AF2X, AF2Y, AF3X, AF3Y, AF4X, AF4Y, PF1NearDeath, PF2NearDeath, PF3NearDeath, PF4NearDeath);
			NewAngryFish1->MainHandler();
			label22->Text = Convert::ToString(NewAngryFish1->Get_CPF1Create());
			label23->Text = Convert::ToString(NewAngryFish1->Get_CPF2Create());
			label24->Text = Convert::ToString(NewAngryFish1->Get_CPF3Create());
			label25->Text = Convert::ToString(NewAngryFish1->Get_CPF4Create());
		}


	}
	private: System::Void LocationUpdateBuffer_Tick(System::Object^  sender, System::EventArgs^  e) {
	//Передача информации в объекты
		//охота AF1 на PF1
		
		if (PF1Created == true && AF1Created == true && (NewAngryFish1->Get_NumberOfVictim()) == 1) {
			PF1Created = PeaceFishEatenEvent(AF1Created, PF1Created, ZaderzhkaEnabled, PeaceFishPB1, NewPeaceFish1, NewAngryFish1, PF1X, PF1Y, AF1X, AF1Y);
		}
		//охота AF1 на PF2
		if (PF2Created == true && AF1Created == true && (NewAngryFish1->Get_NumberOfVictim()) == 2) {
			PF2Created = PeaceFishEatenEvent(AF1Created, PF2Created, ZaderzhkaEnabled, PeaceFishPB2, NewPeaceFish2, NewAngryFish1, PF2X, PF2Y, AF1X, AF1Y);
		}
		//охота AF1 на PF3
		if (PF3Created == true && AF1Created == true && (NewAngryFish1->Get_NumberOfVictim()) == 3) {
			PF3Created = PeaceFishEatenEvent(AF1Created, PF3Created, ZaderzhkaEnabled, PeaceFishPB3, NewPeaceFish3, NewAngryFish1, PF3X, PF3Y, AF1X, AF1Y);
		}
		//охота AF1 на PF4
		if (PF4Created == true && AF1Created == true && (NewAngryFish1->Get_NumberOfVictim()) == 4) {
		
		PF4Created = PeaceFishEatenEvent(AF1Created, PF4Created, ZaderzhkaEnabled, PeaceFishPB4, NewPeaceFish4, NewAngryFish1, PF4X, PF4Y, AF1X, AF1Y);
		WormBoop = true;
		}

		if (WormBoop == false && WormExist == true) {
			//охота PF1 на FishFood

			if (PF1Created == true && WormExist == true) {
				WormExist = FishFoodChased(Worm_X, Worm_Y, PF1X, PF1Y, WormPB, WormExist, NewPeaceFish1);
			}
			//охота PF2 на FishFood
			if (PF2Created == true && WormExist == true) {
				WormExist = FishFoodChased(Worm_X, Worm_Y, PF2X, PF2Y, WormPB, WormExist, NewPeaceFish2);
			}

			//охота PF3 на FishFood

			if (PF3Created == true && WormExist == true) {
				WormExist = FishFoodChased(Worm_X, Worm_Y, PF3X, PF3Y, WormPB, WormExist, NewPeaceFish3);
			
			}
			//охота PF4 на FishFood
			if (PF4Created == true && WormExist == true) {
				WormExist = FishFoodChased(Worm_X, Worm_Y, PF4X, PF4Y, WormPB, WormExist, NewPeaceFish4);
			}
		}
		//PeaceFish1
		if (PeaceFishCount > 0) {
			PF1X = NewPeaceFish1->GetLocationX();
			PF1Y = NewPeaceFish1->GetLocationY();
		}
		else {
			PF1X = 9000;
			PF1Y = 9000;
		}

		//PeaceFish2
		if (PeaceFishCount > 1) {
			PF2X = NewPeaceFish2->GetLocationX();
			PF2Y = NewPeaceFish2->GetLocationY();
		   
		}
		else {
			PF2X = 9000;
			PF2Y = 9000;
		}

		//PeaceFish3
		if (PeaceFishCount > 2) {
			PF3X = NewPeaceFish3->GetLocationX();
			PF3Y = NewPeaceFish3->GetLocationY();
		}
		else {
			PF3X = 9000;
			PF3Y = 9000;
		}

		//PeaceFish4
		if (PeaceFishCount > 3) {
			PF4X = NewPeaceFish4->GetLocationX();
			PF4Y = NewPeaceFish4->GetLocationY();
		}
		else {
			PF4X = 9000;
			PF4Y = 9000;
		}
		//AngryFish1
		if (AF1Created == true) {
			AF1X = NewAngryFish1->GetLocationX();
			AF1Y = NewAngryFish1->GetLocationY();
			NewAngryFish1->Set_CPF1Create(PF1Created);
		}
		else {
			AF1X = 9000;
			AF1Y = 9000;
		}

		//AngryFish2
		if (AF2Created == true) {
			AF2X = NewAngryFish2->GetLocationX();
			AF2Y = NewAngryFish2->GetLocationY();
		}
		else {
			AF2X = 9000;
			AF2Y = 9000;
		}

		//AngryFish3
		if (AF3Created == true) {
			AF3X = NewAngryFish3->GetLocationX();
			AF3Y = NewAngryFish3->GetLocationY();
		}
		else {
			AF3X = 9000;
			AF3Y = 9000;
		}

		//AngryFish4
		if (AF4Created == true) {
			AF4X = NewAngryFish4->GetLocationX();
			AF4Y = NewAngryFish4->GetLocationY();
		}
		else {
			AF4X = 9000;
			AF4Y = 9000;
		}

	}

	private: System::Void StatisticTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
	//Вывод статистики и визуальных эффектов
		
		if (PF1Created == false && PF2Created == false && PF3Created == false && PF4Created == false) {
			PeaceFishCount = 0;
		}else if ((PF1Created == true && PF2Created == false && PF3Created == false && PF4Created == false)|| (PF1Created == false && PF2Created == true && PF3Created == false && PF4Created == false)|| (PF1Created == false && PF2Created == false && PF3Created == true && PF4Created == false) || (PF1Created == false && PF2Created == false && PF3Created == false && PF4Created == true) ){
			PeaceFishCount = 1;
		}
		else if ((PF1Created == true && PF2Created == true && PF3Created == false && PF4Created == false) || (PF1Created == true && PF2Created == false && PF3Created == true && PF4Created == false) || (PF1Created == true && PF2Created == false && PF3Created == false && PF4Created == true) || (PF1Created == true && PF2Created == true && PF3Created == false && PF4Created == false) || (PF1Created == false && PF2Created == true && PF3Created == true && PF4Created == false) || (PF1Created == false && PF2Created == true && PF3Created == false && PF4Created == true) || (PF1Created == true && PF2Created == false && PF3Created == true && PF4Created == false) || (PF1Created == false && PF2Created == true && PF3Created == true && PF4Created == false) || (PF1Created == false && PF2Created == false && PF3Created == true && PF4Created == true)) {
			PeaceFishCount = 2;
		}
		else if (PF1Created == true && PF2Created == true && PF3Created == true && PF4Created == true) {
			PeaceFishCount = 4;
		}
		else {
			PeaceFishCount = 3;
		}
		if (AF1Created == true) {
			button2->Enabled = 0;
			label34->Visible = 0;
			button2->Visible = 0;
		}
		else {
			button2->Enabled = 1;
			label34->Visible = 1;
			button2->Visible = 1;
		}

		if (WormExist == true && WormBoop == false) {
			WormPB->Visible = 1;

		}
		else {
			WormPB->Visible = 0;
		}
		//вывод информации в панель разработчика
		label1->Text = Convert::ToString(AF1X);
		label2->Text = Convert::ToString(AF1Y);
		label3->Text = Convert::ToString(AF2X);
		label4->Text = Convert::ToString(AF2Y);
		label5->Text = Convert::ToString(AF3X);
		label6->Text = Convert::ToString(AF3Y);
		label7->Text = Convert::ToString(AF4X);
		label8->Text = Convert::ToString(AF4Y);
		label9->Text = Convert::ToString(PF1X);
		label10->Text = Convert::ToString(PF1Y);
		label11->Text = Convert::ToString(PF2X);
		label12->Text = Convert::ToString(PF2Y);
		label13->Text = Convert::ToString(PF3X);
		label14->Text = Convert::ToString(PF3Y);
		label15->Text = Convert::ToString(PF4X);
		label16->Text = Convert::ToString(PF4Y);
		label18->Text = Convert::ToString(PF1Created);
		label19->Text = Convert::ToString(PF2Created);
		label20->Text = Convert::ToString(PF3Created);
		label21->Text = Convert::ToString(PF4Created);
		label26->Text = Convert::ToString(WormExist);
		label31->Text = Convert::ToString(WormExist);
		label32->Text = Convert::ToString(WormBoop);
		label33->Text = Convert::ToString(PeaceFishCount);
		label34->Text = Convert::ToString(AngryFishCount);

		if (AngryFishCount == 4) {
			button2->Text = "Забрать хищных рыб";
		}
		else {
			button2->Text = "Хищная рыба";
		}

		if (PF1Created == true) {
			label27->Text = Convert::ToString(NewPeaceFish1->Get_SpotFood());
		}
		if (PF2Created == true) {
			label28->Text = Convert::ToString(NewPeaceFish2->Get_SpotFood());
		}
		if (PF3Created == true) {
			label29->Text = Convert::ToString(NewPeaceFish3->Get_SpotFood());
		}
		if (PF4Created == true) {
			label30->Text = Convert::ToString(NewPeaceFish4->Get_SpotFood());
		}
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	//Создание объектов класса PeaceFish
		//PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\1C.png");
		if (PeaceFishCount == 0) {
			Zaderzhka->Enabled = 1;
			AddPeaceFishAnimation->Enabled = 1;
			PeaceFishPB1->Visible = 1;
			PeaceFishCount++;
			PF1Created = true;
			NewPeaceFish1 = gcnew PeaceFish(PeaceFishLocationX, PeaceFishLocationY, PeaceFishLifeSpan, PeacFishLifeTime, PeaceFishHungry, PeaceFishInDanger, PeaceFishPB1, NewWorm, NewPeaceFish2, NewPeaceFish3, NewPeaceFish4, GlobalNewPeaceFishExist, GlobalAngryPeaceFishExist, GlobalFishFoodExist,1); 
			NewPeaceFish1->FishLifeEndAdvanced_Event += gcnew PeaceFish::FishLifeEndAdvanced_Handler(DumpFish, &Fish::FishLifeEndAdvanced);
		}
		else if (PeaceFishCount == 1) {
			Zaderzhka->Enabled = 1;
			AddPeaceFishAnimation->Enabled = 1;
			PeaceFishPB2->Visible = 1;
			PeaceFishCount++;
			PF2Created = true;
			NewPeaceFish2 = gcnew PeaceFish(PeaceFishLocationX, PeaceFishLocationY, PeaceFishLifeSpan, PeacFishLifeTime, PeaceFishHungry, PeaceFishInDanger, PeaceFishPB2, NewWorm, NewPeaceFish1, NewPeaceFish3, NewPeaceFish4, GlobalNewPeaceFishExist, GlobalAngryPeaceFishExist, GlobalFishFoodExist,2);
			NewPeaceFish2->FishLifeEndAdvanced_Event += gcnew PeaceFish::FishLifeEndAdvanced_Handler(DumpFish, &Fish::FishLifeEndAdvanced);
		}
		else if (PeaceFishCount == 2) {
			Zaderzhka->Enabled = 1;
			AddPeaceFishAnimation->Enabled = 1;
			PeaceFishPB3->Visible = 1;
			PeaceFishCount++;
			PF3Created = true;
			NewPeaceFish3 = gcnew PeaceFish(PeaceFishLocationX, PeaceFishLocationY, PeaceFishLifeSpan, PeacFishLifeTime, PeaceFishHungry, PeaceFishInDanger, PeaceFishPB3, NewWorm, NewPeaceFish1, NewPeaceFish2, NewPeaceFish4, GlobalNewPeaceFishExist, GlobalAngryPeaceFishExist, GlobalFishFoodExist,3);
			NewPeaceFish3->FishLifeEndAdvanced_Event += gcnew PeaceFish::FishLifeEndAdvanced_Handler(DumpFish, &Fish::FishLifeEndAdvanced);
		}
		else if (PeaceFishCount == 3) {
			Zaderzhka->Enabled = 1;
			AddPeaceFishAnimation->Enabled = 1;
			PeaceFishPB4->Visible = 1;
			PeaceFishCount++;
			PF4Created = true;
			NewPeaceFish4 = gcnew PeaceFish(PeaceFishLocationX, PeaceFishLocationY, PeaceFishLifeSpan, PeacFishLifeTime, PeaceFishHungry, PeaceFishInDanger, PeaceFishPB4, NewWorm, NewPeaceFish1, NewPeaceFish2, NewPeaceFish3, GlobalNewPeaceFishExist, GlobalAngryPeaceFishExist, GlobalFishFoodExist,4);
			NewPeaceFish4->FishLifeEndAdvanced_Event += gcnew PeaceFish::FishLifeEndAdvanced_Handler(DumpFish, &Fish::FishLifeEndAdvanced);
		}
		else if (PeaceFishCount == 4) {
			MessageBox::Show("Достигнуто максимальное количество мирных рыб");
		}

	}
private: System::Void PeaceFishTimer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	if (PF1Created == true) {
		if (PF1Y < 80) {
			PeaceFishCount = PeaceFishCount - 1;
			PF1Created = false;
			PeaceFishPB1->Visible = 0;
		}
	}
	if (PF2Created == true) {
		if (PF2Y < 80) {
			PeaceFishCount = PeaceFishCount - 1;
			PF2Created = false;
			PeaceFishPB2->Visible = 0;
		}
	}
	if (PF3Created == true) {
		int Third_Y = NewPeaceFish3->GetLocationY();
		if (Third_Y < 80) {
			PeaceFishCount = PeaceFishCount - 1;
			PF3Created = false;
			PeaceFishPB3->Visible = 0;
		}
	}
	if (PF4Created == true) {
		int Fourth_Y = NewPeaceFish4->GetLocationY();
		if (Fourth_Y < 80) {
			PeaceFishCount = PeaceFishCount - 1;
			PF4Created = false;
			PeaceFishPB4->Visible = 0;
		}
	}
	//Обработка объектов PeaceFish
	if (PF1Created == true) {
		NewPeaceFish1->Set_FishFoodObjectExist(WormExist);
		if (WormExist == true) {
			NewPeaceFish1->Set_FishFoodLocation(Worm_X,Worm_Y);
			NewPeaceFish1->SearchForFood();
		}
		PF1NearDeath = NewPeaceFish1->GetNearDeath();
		NewPeaceFish1->FishMove();
		NewPeaceFish1->PeaceFishAnimation();
		if (StopChase == true) {
			NewPeaceFish1->Set_SpotFood(false);
		}
	}
	if (PF2Created == true) {
		NewPeaceFish2->Set_FishFoodObjectExist(WormExist);
		if (WormExist == true) {
			NewPeaceFish2->Set_FishFoodLocation(Worm_X, Worm_Y);
			NewPeaceFish2->SearchForFood();
		}
		PF2NearDeath = NewPeaceFish2->GetNearDeath();
		NewPeaceFish2->FishMove();
		NewPeaceFish2->PeaceFishAnimation();
		if (StopChase == true) {
			NewPeaceFish2->Set_SpotFood(false);
		}
	}
	if (PF3Created == true) {
		NewPeaceFish3->Set_FishFoodObjectExist(WormExist);
		if (WormExist == true) {
			NewPeaceFish3->Set_FishFoodLocation(Worm_X, Worm_Y);
			NewPeaceFish3->SearchForFood();
		}
		PF3NearDeath = NewPeaceFish3->GetNearDeath();
		NewPeaceFish3->FishMove();
		NewPeaceFish3->PeaceFishAnimation();
		if (StopChase == true) {
			NewPeaceFish3->Set_SpotFood(false);
		}
	}
	if (PF4Created == true) {
		NewPeaceFish4->Set_FishFoodObjectExist(WormExist);
		if (WormExist == true) {
			NewPeaceFish4->Set_FishFoodLocation(Worm_X, Worm_Y);
			NewPeaceFish4->SearchForFood();

		}
		PF4NearDeath = NewPeaceFish4->GetNearDeath();
		NewPeaceFish4->FishMove();
		NewPeaceFish4->PeaceFishAnimation();
		if (StopChase == true) {
			NewPeaceFish4->Set_SpotFood(false);
		}
	}

	
}
private: System::Void Playground_Load(System::Object^  sender, System::EventArgs^  e) {
	DumpFish = gcnew Fish(PF1X, PF1Y, AngryFishLifeTime, AngryFishLifeTime,AF1Hunger, AngryFishPB1);
	
}
private: System::Void Zaderzhka_Tick(System::Object^  sender, System::EventArgs^  e) {
	ZaderzhkaSec++;
if (ZaderzhkaSec < 100) {
	ZaderzhkaEnabled = true;
	button7->Enabled = 0;
	button2->Enabled = 0;
	button4->Enabled = 0;
}
else {
	ZaderzhkaSec = 0;
	Zaderzhka->Enabled = false;
	button7->Enabled = 1;
	button2->Enabled = 1;
	button4->Enabled = 1;
	ZaderzhkaEnabled = false;
}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	AddFoodAnimation->Enabled = 1;
	ChaseFish->Enabled = 1;
	WormExist = true;
	WormBoop = false;
	NewWorm = gcnew FishFood(WormPB);
	if (CPF1Ready == true) 
		NewPeaceFish1->FishFoodEatenAdvanced_Event += gcnew PeaceFish::FishFoodEatenAdvanced_Handler(NewWorm, &FishFood::FishFoodEatenAdvanced);
	if (CPF2Ready == true)
		NewPeaceFish2->FishFoodEatenAdvanced_Event += gcnew PeaceFish::FishFoodEatenAdvanced_Handler(NewWorm, &FishFood::FishFoodEatenAdvanced);
	if (CPF3Ready == true)
		NewPeaceFish3->FishFoodEatenAdvanced_Event += gcnew PeaceFish::FishFoodEatenAdvanced_Handler(NewWorm, &FishFood::FishFoodEatenAdvanced);
	if (CPF4Ready == true)
		NewPeaceFish4->FishFoodEatenAdvanced_Event += gcnew PeaceFish::FishFoodEatenAdvanced_Handler(NewWorm, &FishFood::FishFoodEatenAdvanced);
	
	
}
private: System::Void FishFoodTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
	if (WormExist == false) {
		button4->Enabled = 1;
	}
	else {
		button4->Enabled = 0;
	}
	
	
	if (WormExist == true) {
		NewWorm->Falling();
		NewWorm->FishFoodAnimation();
		Worm_X = NewWorm->GetLocationX();
		Worm_Y = NewWorm->GetLocationY();
		label42->Text = Convert::ToString(Worm_X);
		label43->Text = Convert::ToString(Worm_Y);
		NewWorm->SetCreateStatusForFishFood(PF1Created, PF2Created, PF3Created, PF4Created);
		SmartFishFoodEaten(Worm_X, Worm_Y, PF1X, PF1Y, WormPB);
		SmartFishFoodEaten(Worm_X, Worm_Y, PF2X, PF2Y, WormPB);
		SmartFishFoodEaten(Worm_X, Worm_Y, PF3X, PF3Y, WormPB);
		SmartFishFoodEaten(Worm_X, Worm_Y, PF4X, PF4Y, WormPB);
	}
}
private: System::Void ChaseFish_Tick(System::Object^  sender, System::EventArgs^  e) {
	ChaseSec++;
	if (ChaseSec == 50) {
		StopChase = true;
		ChaseSec = 0;
		ChaseFish->Enabled = 0;
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (panel1->Visible == 1) {
		panel1->Visible = 0;
	}
	else {
		panel1->Visible = 1;
	}
}
private: System::Void AddPeaceFishAnimation_Tick(System::Object^  sender, System::EventArgs^  e) {

	AnimationSec++;
	button2->Visible = 0;
	button4->Visible = 0;
	button9->Visible = 0;
	button10->Visible = 0;
	button7->Visible = 0;
	label33->Visible = 0;
	label34->Visible = 0;
	button11->Visible = 1;
	
	if (AnimationSec == 0) {
		Sachek->Image = Image::FromFile(Application::StartupPath + "\\Pic\\Sac1.png");
	}
	else if (AnimationSec == 15) {
		Sachek->Image = Image::FromFile(Application::StartupPath + "\\Pic\\Sac2.png");
	}
	else if (AnimationSec == 30) {
		Sachek->Image = Image::FromFile(Application::StartupPath + "\\Pic\\Sac3.png");
	}
	else if (AnimationSec == 45) {
		Sachek->Image = Image::FromFile(Application::StartupPath + "\\Pic\\Sac4.png");
	}
	else if (AnimationSec == 60) {
		Sachek->Image = Image::FromFile(Application::StartupPath + "\\Pic\\Sac3.png");
	}
	else if (AnimationSec == 75) {
		Sachek->Image = Image::FromFile(Application::StartupPath + "\\Pic\\Sac2.png");
	}
	else if (AnimationSec == 90) {
		Sachek->Image = Image::FromFile(Application::StartupPath + "\\Pic\\Sac1.png");
	}
	



	if (AnimationSec == 200) {
		AddPeaceFishAnimation->Enabled = 0;
		AnimationSec = 0;
		Sachek->Visible = 0;
		button2->Visible = 1;
		button4->Visible = 1;
		button7->Visible = 1;
		label33->Visible = 1;
		label34->Visible = 1;
		button9->Visible = 1;
		button10->Visible = 1;
		button11->Visible = 0;
	}

}
private: System::Void AddFoodAnimation_Tick(System::Object^  sender, System::EventArgs^  e) {
	AnimationSec++;
	button2->Visible = 0;
	button4->Visible = 0;
	button7->Visible = 0;
	label33->Visible = 0;
	label34->Visible = 0;
	if (AnimationSec == 50) {
		AddFoodAnimation->Enabled = 0;
		AnimationSec = 0;
		HandPB->Visible = 0;
		button2->Visible = 1;
		button4->Visible = 1;
		button7->Visible = 1;
		label33->Visible = 1;
		label34->Visible = 1;
	}
}



private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (AF4Created == true) {
		AF4Created = false;
		AngryFishPB4->Visible = 0;
		AngryFishCount = 3;
	}
	else if (AF3Created == true) {
		AF3Created = false;
		AngryFishPB3->Visible = 0;
		AngryFishCount = 2;
 }
	else if (AF2Created == true) {
		AF2Created = false;
		AngryFishPB2->Visible = 0;
		AngryFishCount = 1;
	}
	else if (AF1Created == true) {
		AF1Created = false;
		AngryFishPB1->Visible = 0;
		AngryFishCount = 0;
	}
	else {
		MessageBox::Show("Хищных рыб в аквариуме больше нет");
	}

}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (PF4Created == true) {
		PF4Created = false;
		PeaceFishPB4->Visible = 0;
	    PeaceFishCount = 3;
	}
	 if (PF3Created == true) {
		PF3Created = false;
		PeaceFishPB3->Visible = 0;
		PeaceFishCount = 2;
	}
	 if (PF2Created == true) {
		PF2Created = false;
		PeaceFishPB2->Visible = 0;
		PeaceFishCount = 1;
	}
	 if (PF1Created == true) {
		PF1Created = false;
		PeaceFishPB1->Visible = 0;
		PeaceFishCount = 0;
	}
	if ((PF1Created == true) &&(PF2Created == true)&& (PF3Created == true)&&(PF4Created == true)){
		MessageBox::Show("Мирных рыб нет в аквариуме !");
	}
}
private: System::Void EventTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void PeaceFishTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void EnterTime_Tick(System::Object^ sender, System::EventArgs^ e) {
	
		button11->Visible = 1;
		if (LabelColor > 0) {
			LabelColor = LabelColor - 5;
			label51->Visible = 0;
		}
		else {
			label51->Visible = 1;
		}
		label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)), static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)),
			static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)));
		label46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)), static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)),
			static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)));
		label47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)), static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)),
			static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)));
		label48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)), static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)),
			static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)));
		label49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)), static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)),
			static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)));
		label50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)), static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)),
			static_cast<System::Int32>(static_cast<System::Byte>(LabelColor)));
	
}
private: System::Void label51_Click(System::Object^ sender, System::EventArgs^ e) {
	EnterTime->Enabled = 0;
	button11->Visible = 0;
	label45->Visible = 0;
	label46->Visible = 0;
	label47->Visible = 0;
	label48->Visible = 0;
	label49->Visible = 0;
	label50->Visible = 0;
	label51->Visible = 0;
}
};
}
