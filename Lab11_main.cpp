#pragma once
namespace LRintDivision {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// <summary>
	// summary for MyForm
	// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
                        // constructor that calls a method to initialize form components
		}

	protected:
		// <summary>
		// release all used resources
		// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
                                remove components if they exist
			}
		}
        // declaration of interface elements
	private: System::Windows::Forms::TextBox^ tb_num; // text field for entering a number
	private: System::Windows::Forms::TextBox^ tb_res; // text field to display the result
	private: System::Windows::Forms::Label^ label1; // label for the number text field
	private: System::Windows::Forms::Label^ label2; // label for the result output text field
	private: System::Windows::Forms::Button^ btn_div; // button to perform division
        private: System::Windows::Forms::Button^ btn_exit; // button to close the application

	protected:
	private:
		// <summary>
		// required constructor variable
		// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		// <summary> 
                // initialize form components
		// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
                        // create a resource manager for the component

                        // initialize text fields, labels and buttons
			this->tb_num = (gcnew System::Windows::Forms::TextBox());
			this->tb_res = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			
			// tb_num
			// setting up a text field for entering a number
			this->tb_num->Location = System::Drawing::Point(213, 19);
			this->tb_num->Name = L"tb_num";
			this->tb_num->Size = System::Drawing::Size(100, 20);
			this->tb_num->TabIndex = 0;
			 
			// tb_res
			// setting up a text field to display the result
			this->tb_res->Location = System::Drawing::Point(213, 45);
			this->tb_res->Name = L"tb_res";
			this->tb_res->Size = System::Drawing::Size(100, 20);
			this->tb_res->TabIndex = 1;
			
			// label1
			// setting a label for entering a number
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter integer number:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			
			// label2
			// setting a label for displaying the result
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(74, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Division result:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			
			// btn_div
			// setting up a button to perform division
			this->btn_div->BackColor = System::Drawing::SystemColors::Control;
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_div->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_div->Location = System::Drawing::Point(213, 87);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(100, 28);
			this->btn_div->TabIndex = 4;
			this->btn_div->Text = L"Division";
			this->btn_div->UseVisualStyleBackColor = false;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			
			// btn_exit
			// setting up a button to close the application
			this->btn_exit->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_exit->Location = System::Drawing::Point(16, 87);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(190, 28);
			this->btn_exit->TabIndex = 5;
			this->btn_exit->Text = L"Close application";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			
			// MyForm
			// setting up the form
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSalmon;
			this->ClientSize = System::Drawing::Size(334, 127);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_res);
			this->Controls->Add(this->tb_num);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Division";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
        // loading form
        System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

        private:
        // pressing the application close button 
        System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
        }

        private: 
        // pressing the division button
        System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) {
	int num, hundred;
	try {
                // convert the entered text to an integer
		num = Convert::ToInt32(tb_num->Text);
                // check that the number is three digits
		if(num > 99 && num < 1000){
		        hundred = num / 100;
		        tb_res->Text = Convert::ToString(hundred);
		}
		else {
                        // error message if the number is not three digits
			MessageBox::Show(tb_num->Text + " is not three number digital! Error!(^_^)");
			tb_num->Text = "";
			tb_res->Text = "";
			tb_num->Focus();
		}
	}
	catch (...) {
                // error message if the entered value is not an integer
		MessageBox::Show(tb_num->Text+" is not integer number! ERROR!(^o^)");
		tb_num->Text = ""; 
		tb_res->Text = "";
		tb_num->Focus();
	}
	
}
};
}
