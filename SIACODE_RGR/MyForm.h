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
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(57, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 1;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(931, 580);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	int **graph;
	int *nodes;
	bool *flags;
	int N = 5;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e){
		graph = new int*[N];
		graph[0] = new int[N];
		graph[1] = new int[N];
		graph[2] = new int[N];
		graph[3] = new int[N];
		graph[4] = new int[N];

		graph[0][0] = 0;
		graph[0][1] = 10;
		graph[0][2] = 30;
		graph[0][3] = 50;
		graph[0][4] = 10;

		graph[1][0] = 0;
		graph[1][1] = 0;
		graph[1][2] = 0;
		graph[1][3] = 0;
		graph[1][4] = 0;

		graph[2][0] = 0;
		graph[2][1] = 0;
		graph[2][2] = 0;
		graph[2][3] = 0;
		graph[2][4] = 10;

		graph[3][0] = 0;
		graph[3][1] = 40;
		graph[3][2] = 20;
		graph[3][3] = 0;
		graph[3][4] = 0;


		graph[4][0] = 10;
		graph[4][1] = 0;
		graph[4][2] = 10;
		graph[4][3] = 30;
		graph[4][4] = 0;

		nodes = new int[N];
		flags = new bool[N];

		for(int i = 0; i < N; i++){
			flags[i] = false;
			nodes[i] = std::numeric_limits<int>::max();
			for(int j = 0; j < N; j++){
				this->label2->Text = this->label2->Text + graph[i][j] + " ";
			}
			this-> label2->Text += "\n";
		}
		nodes[0] = 0;
		int min = std::numeric_limits<int>::max(), mini = 0;
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				if(!flags[j]){
					if((graph[i][j] != 0)&&(graph[i][j] < nodes[j])){
						nodes[j] = graph[i][j];
					}
				}
			}
			flags[i] = true;
			nodes[i] = nodes[i];
		}
		for(int i = 0; i < N; i++){
			this->label3->Text = this->label3->Text + nodes[i] + " ";
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e){
	}
};
}
