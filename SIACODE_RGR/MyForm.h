#pragma once
#include <limits>
/*class int{
public:
	int p;
	int s;
	int():p(0), s(0){}
	int(int p, int s):p(p), s(s){}
};*/

namespace SIACODERGR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(546, 120);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(522, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(655, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 43);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Подсчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(824, 173);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Tag = L"1";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(16, 173);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4){ 10, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4){ 3, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4){ 3, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(931, 580);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	int **graph;
	int *nodes;
	bool *flags;
	int N = 3;
	array<array<System::Windows::Forms::TextBox^>^>^ graphTxtBoxS;
	array<array<System::Windows::Forms::TextBox^>^>^ graphTxtBoxP;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e){
		graph = new int*[N];
		nodes = new int[N];
		flags = new bool[N];
		graphTxtBoxS = gcnew array<array<System::Windows::Forms::TextBox^>^>(N);
		graphTxtBoxP = gcnew array<array<System::Windows::Forms::TextBox^>^>(N);

		for(int i = 0; i < N; i++){
			flags[i] = false;
			graph[i] = new int[N];
			nodes[i] = std::numeric_limits<int>::max();
			graphTxtBoxS[i] = gcnew array<System::Windows::Forms::TextBox^>(N);
			graphTxtBoxP[i] = gcnew array<System::Windows::Forms::TextBox^>(N);
			for(int j = 0; j < N; j++){
				graph[i][j] = 0;
				System::Windows::Forms::TextBox^ GraphS = (gcnew System::Windows::Forms::TextBox());
				GraphS->Location = System::Drawing::Point(16+(j*75), 220+(i*50));
				GraphS->Name = L"GraphS"+i+"_"+j;
				GraphS->Size = System::Drawing::Size(20, 20);
				GraphS->TabIndex = i;
				GraphS->Tag = j;
				GraphS->Text = "0";
				GraphS->TextChanged += gcnew System::EventHandler(this, &MyForm::GraphS_TextChanged);
				GraphS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				graphTxtBoxS[i][j] = GraphS;
				this->Controls->Add(GraphS);

				System::Windows::Forms::TextBox^ GraphP = (gcnew System::Windows::Forms::TextBox());
				GraphP->Location = System::Drawing::Point(41 + (j * 75), 220 + (i * 50));
				GraphP->Name = L"GraphS" + i + "_" + j;
				GraphP->Size = System::Drawing::Size(20, 20);
				GraphP->TabIndex = i;
				GraphP->Tag = j;
				GraphP->Text = "0";
				GraphP->TextChanged += gcnew System::EventHandler(this, &MyForm::GraphP_TextChanged);
				GraphP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				graphTxtBoxP[i][j] = GraphP;
				this->Controls->Add(GraphP);
			}
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e){
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e){
		for(int i = 0; i < N; i++){
			flags[i] = false;
			nodes[i] = std::numeric_limits<int>::max();
		}
		nodes[0] = 0;
		int min, minI;
		for(int i = 0; i < N; i++){
			min = std::numeric_limits<int>::max(), minI = 0;
			this->label3->Text = "";
			for(int j = 0; j < N; j++){
				if((!flags[j]) && (nodes[j] < min)){
					min = nodes[j];
					minI = j;
				}
			}
			for(int j = 0; j < N; j++){
				if(!flags[j]){
					if((graph[minI][j] != 0) && ((graph[minI][j] + nodes[minI]) < nodes[j])){
						nodes[j] = graph[minI][j] + nodes[minI];
					}
				}
			}
			for(int o = 0; o < N; o++){
				this->label3->Text += nodes[o] + " ";
			}
			flags[minI] = true;
		}
	}
	private: System::Void GraphS_TextChanged(System::Object^ sender, System::EventArgs^ e){
		System::Windows::Forms::TextBox^ a = (System::Windows::Forms::TextBox^)sender;
		if(a->Text != ""){
			graph[a->TabIndex][Convert::ToInt32(a->Tag)] = Convert::ToInt32(a->Text);
			graph[a->TabIndex][Convert::ToInt32(a->Tag)] = Convert::ToInt32(a->Text);
		}
		if(a->TabIndex != Convert::ToInt32(a->Tag))
			graphTxtBoxS[Convert::ToInt32(a->Tag)][a->TabIndex]->Text = a->Text;
	}
	private: System::Void GraphP_TextChanged(System::Object^ sender, System::EventArgs^ e){
		System::Windows::Forms::TextBox^ a = (System::Windows::Forms::TextBox^)sender;
		/*graph[a->TabIndex][Convert::ToInt32(a->Tag)] = Convert::ToInt32(a->Text);
		graph[Convert::ToInt32(a->Tag)][a->TabIndex] = Convert::ToInt32(a->Text);*/
		if(a->TabIndex != Convert::ToInt32(a->Tag))
			graphTxtBoxP[Convert::ToInt32(a->Tag)][a->TabIndex]->Text = a->Text;
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e){
		int a;
		if(numericUpDown1->Value > N)
			a = N;
		else
			a = 0;
		for(int j = 0; j < N; j++){
			delete[](graph[j]);
		}
		delete[](graph);
		delete[](nodes);
		delete[](flags);
		int prev = N;
		N = Convert::ToInt32(numericUpDown1->Value);
		graph = new int*[N];
		nodes = new int[N];
		flags = new bool[N];
		for(int i = 0; i < N; i++){
			graph[i] = new int[N];
		}
		if(a!=0){
			for(int i = 0; i < N-1; i++){
				for(int j = 0; j < N-1; j++){
					this->Controls->Remove(graphTxtBoxS[i][j]);
					this->Controls->Remove(graphTxtBoxP[i][j]);
				}
			}
			graphTxtBoxS = gcnew array<array<System::Windows::Forms::TextBox^>^>(N);
			graphTxtBoxP = gcnew array<array<System::Windows::Forms::TextBox^>^>(N);
			for(int i=0; i < N; i++){
				graphTxtBoxS[i] = gcnew array<System::Windows::Forms::TextBox^>(N);
				graphTxtBoxP[i] = gcnew array<System::Windows::Forms::TextBox^>(N);
				for(int j = 0; j < N; j++){
					graph[i][j] = 0;
					System::Windows::Forms::TextBox^ GraphS = (gcnew System::Windows::Forms::TextBox());
					GraphS->Location = System::Drawing::Point(16 + (j * 75), 220 + (i * 50));
					GraphS->Name = L"GraphS" + i + "_" + j;
					GraphS->Size = System::Drawing::Size(20, 20);
					GraphS->TabIndex = i;
					GraphS->Tag = j;
					GraphS->Text = "0";
					GraphS->TextChanged += gcnew System::EventHandler(this, &MyForm::GraphS_TextChanged);
					GraphS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
					graphTxtBoxS[i][j] = GraphS;
					this->Controls->Add(GraphS);

					System::Windows::Forms::TextBox^ GraphP = (gcnew System::Windows::Forms::TextBox());
					GraphP->Location = System::Drawing::Point(41 + (j * 75), 220 + (i * 50));
					GraphP->Name = L"GraphS" + i + "_" + j;
					GraphP->Size = System::Drawing::Size(20, 20);
					GraphP->TabIndex = i;
					GraphP->Tag = j;
					GraphP->Text = "0";
					GraphP->TextChanged += gcnew System::EventHandler(this, &MyForm::GraphP_TextChanged);
					GraphP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
					graphTxtBoxP[i][j] = GraphP;
					this->Controls->Add(GraphP);
				}
			}
		}
		else{
			for(int i = 0; i < N+1; i++){
				for(int j = 0; j < N+1; j++){
					if((i == N) || (j == N)){
						this->Controls->Remove(graphTxtBoxS[i][j]);
						this->Controls->Remove(graphTxtBoxP[i][j]);
					}else
						graph[i][j] = 0;
				}
			}
		}
	}
};
}
