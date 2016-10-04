#pragma once


namespace BBSModdingStation {

	using namespace System;
	using namespace System::Threading;
	using namespace System::Diagnostics;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog3;
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		int amnt, BlockOne, BlockTwo;


	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog6;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog7;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog8;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog2;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button17;
			 String ^TIM2;
			 String ^EX_TIM2;
			 String ^CurrentPath;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  CurrentBuildLabel;


			 int number;
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->button4 = (gcnew System::Windows::Forms::Button());
				 this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->button7 = (gcnew System::Windows::Forms::Button());
				 this->button8 = (gcnew System::Windows::Forms::Button());
				 this->label9 = (gcnew System::Windows::Forms::Label());
				 this->openFileDialog6 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->button9 = (gcnew System::Windows::Forms::Button());
				 this->openFileDialog7 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->openFileDialog8 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
				 this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
				 this->button11 = (gcnew System::Windows::Forms::Button());
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->button10 = (gcnew System::Windows::Forms::Button());
				 this->button12 = (gcnew System::Windows::Forms::Button());
				 this->button13 = (gcnew System::Windows::Forms::Button());
				 this->button16 = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->button5 = (gcnew System::Windows::Forms::Button());
				 this->button6 = (gcnew System::Windows::Forms::Button());
				 this->button14 = (gcnew System::Windows::Forms::Button());
				 this->button15 = (gcnew System::Windows::Forms::Button());
				 this->button17 = (gcnew System::Windows::Forms::Button());
				 this->button18 = (gcnew System::Windows::Forms::Button());
				 this->button19 = (gcnew System::Windows::Forms::Button());
				 this->button20 = (gcnew System::Windows::Forms::Button());
				 this->button21 = (gcnew System::Windows::Forms::Button());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->button22 = (gcnew System::Windows::Forms::Button());
				 this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
				 this->CurrentBuildLabel = (gcnew System::Windows::Forms::Label());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // button1
				 // 
				 resources->ApplyResources(this->button1, L"button1");
				 this->button1->Name = L"button1";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
				 // 
				 // openFileDialog1
				 // 
				 this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
				 // 
				 // button2
				 // 
				 resources->ApplyResources(this->button2, L"button2");
				 this->button2->Name = L"button2";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
				 // 
				 // label3
				 // 
				 resources->ApplyResources(this->label3, L"label3");
				 this->label3->BackColor = System::Drawing::Color::Yellow;
				 this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label3->Name = L"label3";
				 // 
				 // label4
				 // 
				 resources->ApplyResources(this->label4, L"label4");
				 this->label4->BackColor = System::Drawing::Color::Yellow;
				 this->label4->Name = L"label4";
				 // 
				 // button4
				 // 
				 resources->ApplyResources(this->button4, L"button4");
				 this->button4->Name = L"button4";
				 this->button4->UseVisualStyleBackColor = true;
				 this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
				 // 
				 // linkLabel1
				 // 
				 resources->ApplyResources(this->linkLabel1, L"linkLabel1");
				 this->linkLabel1->BackColor = System::Drawing::Color::White;
				 this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					 static_cast<System::Int32>(static_cast<System::Byte>(192)));
				 this->linkLabel1->Name = L"linkLabel1";
				 this->linkLabel1->TabStop = true;
				 this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
				 // 
				 // button3
				 // 
				 resources->ApplyResources(this->button3, L"button3");
				 this->button3->Name = L"button3";
				 this->button3->UseVisualStyleBackColor = true;
				 this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
				 // 
				 // openFileDialog2
				 // 
				 this->openFileDialog2->FileName = L"openFileDialog2";
				 this->openFileDialog2->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog2_FileOk);
				 // 
				 // openFileDialog3
				 // 
				 this->openFileDialog3->FileName = L"openFileDialog3";
				 // 
				 // button7
				 // 
				 resources->ApplyResources(this->button7, L"button7");
				 this->button7->Name = L"button7";
				 this->button7->UseVisualStyleBackColor = true;
				 this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click_1);
				 // 
				 // button8
				 // 
				 resources->ApplyResources(this->button8, L"button8");
				 this->button8->Name = L"button8";
				 this->button8->UseVisualStyleBackColor = true;
				 this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
				 // 
				 // label9
				 // 
				 resources->ApplyResources(this->label9, L"label9");
				 this->label9->BackColor = System::Drawing::Color::Yellow;
				 this->label9->Name = L"label9";
				 // 
				 // openFileDialog6
				 // 
				 this->openFileDialog6->FileName = L"openFileDialog6";
				 this->openFileDialog6->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog6_FileOk);
				 // 
				 // button9
				 // 
				 resources->ApplyResources(this->button9, L"button9");
				 this->button9->Name = L"button9";
				 this->button9->UseVisualStyleBackColor = true;
				 this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
				 // 
				 // openFileDialog7
				 // 
				 this->openFileDialog7->FileName = L"openFileDialog7";
				 this->openFileDialog7->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog7_FileOk);
				 // 
				 // openFileDialog8
				 // 
				 this->openFileDialog8->FileName = L"openFileDialog8";
				 this->openFileDialog8->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog8_FileOk);
				 // 
				 // folderBrowserDialog1
				 // 
				 this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &Form1::folderBrowserDialog1_HelpRequest_1);
				 // 
				 // button11
				 // 
				 resources->ApplyResources(this->button11, L"button11");
				 this->button11->Name = L"button11";
				 this->button11->UseVisualStyleBackColor = true;
				 this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
				 // 
				 // label10
				 // 
				 resources->ApplyResources(this->label10, L"label10");
				 this->label10->BackColor = System::Drawing::Color::Transparent;
				 this->label10->Name = L"label10";
				 // 
				 // label11
				 // 
				 resources->ApplyResources(this->label11, L"label11");
				 this->label11->BackColor = System::Drawing::Color::Yellow;
				 this->label11->Name = L"label11";
				 // 
				 // button10
				 // 
				 resources->ApplyResources(this->button10, L"button10");
				 this->button10->Name = L"button10";
				 this->button10->UseVisualStyleBackColor = true;
				 this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click_1);
				 // 
				 // button12
				 // 
				 resources->ApplyResources(this->button12, L"button12");
				 this->button12->Name = L"button12";
				 this->button12->UseVisualStyleBackColor = true;
				 this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
				 // 
				 // button13
				 // 
				 resources->ApplyResources(this->button13, L"button13");
				 this->button13->Name = L"button13";
				 this->button13->UseVisualStyleBackColor = true;
				 this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
				 // 
				 // button16
				 // 
				 resources->ApplyResources(this->button16, L"button16");
				 this->button16->Name = L"button16";
				 this->button16->UseVisualStyleBackColor = true;
				 this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
				 // 
				 // label1
				 // 
				 resources->ApplyResources(this->label1, L"label1");
				 this->label1->BackColor = System::Drawing::Color::Gold;
				 this->label1->Name = L"label1";
				 // 
				 // button5
				 // 
				 resources->ApplyResources(this->button5, L"button5");
				 this->button5->Name = L"button5";
				 this->button5->UseVisualStyleBackColor = true;
				 this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
				 // 
				 // button6
				 // 
				 resources->ApplyResources(this->button6, L"button6");
				 this->button6->Name = L"button6";
				 this->button6->UseVisualStyleBackColor = true;
				 this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
				 // 
				 // button14
				 // 
				 resources->ApplyResources(this->button14, L"button14");
				 this->button14->Name = L"button14";
				 this->button14->UseVisualStyleBackColor = true;
				 this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
				 // 
				 // button15
				 // 
				 resources->ApplyResources(this->button15, L"button15");
				 this->button15->Name = L"button15";
				 this->button15->UseVisualStyleBackColor = true;
				 this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
				 // 
				 // button17
				 // 
				 resources->ApplyResources(this->button17, L"button17");
				 this->button17->Name = L"button17";
				 this->button17->UseVisualStyleBackColor = true;
				 this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
				 // 
				 // button18
				 // 
				 resources->ApplyResources(this->button18, L"button18");
				 this->button18->Name = L"button18";
				 this->button18->UseVisualStyleBackColor = true;
				 this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
				 // 
				 // button19
				 // 
				 resources->ApplyResources(this->button19, L"button19");
				 this->button19->Name = L"button19";
				 this->button19->UseVisualStyleBackColor = true;
				 this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
				 // 
				 // button20
				 // 
				 resources->ApplyResources(this->button20, L"button20");
				 this->button20->Name = L"button20";
				 this->button20->UseVisualStyleBackColor = true;
				 this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
				 // 
				 // button21
				 // 
				 resources->ApplyResources(this->button21, L"button21");
				 this->button21->Name = L"button21";
				 this->button21->UseVisualStyleBackColor = true;
				 this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
				 // 
				 // label2
				 // 
				 resources->ApplyResources(this->label2, L"label2");
				 this->label2->BackColor = System::Drawing::Color::Gold;
				 this->label2->Name = L"label2";
				 // 
				 // button22
				 // 
				 resources->ApplyResources(this->button22, L"button22");
				 this->button22->Name = L"button22";
				 this->button22->UseVisualStyleBackColor = true;
				 this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
				 // 
				 // numericUpDown1
				 // 
				 resources->ApplyResources(this->numericUpDown1, L"numericUpDown1");
				 this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
				 this->numericUpDown1->Name = L"numericUpDown1";
				 // 
				 // CurrentBuildLabel
				 // 
				 resources->ApplyResources(this->CurrentBuildLabel, L"CurrentBuildLabel");
				 this->CurrentBuildLabel->Name = L"CurrentBuildLabel";
				 // 
				 // Form1
				 // 
				 resources->ApplyResources(this, L"$this");
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::Control;
				 this->Controls->Add(this->CurrentBuildLabel);
				 this->Controls->Add(this->numericUpDown1);
				 this->Controls->Add(this->button22);
				 this->Controls->Add(this->button21);
				 this->Controls->Add(this->button20);
				 this->Controls->Add(this->button19);
				 this->Controls->Add(this->button18);
				 this->Controls->Add(this->button17);
				 this->Controls->Add(this->button14);
				 this->Controls->Add(this->button15);
				 this->Controls->Add(this->button6);
				 this->Controls->Add(this->button5);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->button16);
				 this->Controls->Add(this->button13);
				 this->Controls->Add(this->button12);
				 this->Controls->Add(this->button10);
				 this->Controls->Add(this->label11);
				 this->Controls->Add(this->label10);
				 this->Controls->Add(this->button11);
				 this->Controls->Add(this->button9);
				 this->Controls->Add(this->label9);
				 this->Controls->Add(this->button8);
				 this->Controls->Add(this->button7);
				 this->Controls->Add(this->button3);
				 this->Controls->Add(this->linkLabel1);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->button4);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->button1);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->MaximizeBox = false;
				 this->Name = L"Form1";
				 this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
				 this->TopMost = true;
				 this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		openFileDialog1->Filter = "DAT Files (*.DAT)|*.DAT|ISO Files (*.ISO)|*.ISO|All Files (*.*)|*.*";
		openFileDialog1->Title = "Choose a BBS ISO or file";
		openFileDialog1->FileName = "KHBBSFM.ISO";
		openFileDialog1->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		FolderBrowserDialog ^d5 = gcnew FolderBrowserDialog();
		d5->Description = "Choose an animation folder";
		d5->RootFolder = Environment::SpecialFolder::Desktop;
		d5->ShowDialog();
		String ^path = d5->SelectedPath;
		array<String^> ^Files = Directory::GetFiles(path);
		int length = Files->Length;

		int PAM = 0x4D4150;
		int nop = 0;
		int unknown = 0x10000;

		int headersize = 0x20 + (length * 0x10);
		int totalsize = 0;
		int nsize = 0;
		char pad = 0;

		String ^Tname = "";

		FileStream ^o = gcnew FileStream("NEW.pam", FileMode::Create);
		BinaryWriter ^w = gcnew BinaryWriter(o);
		w->Write(PAM);
		w->Write((length + 1));
		w->Write(nop);
		w->Write(unknown);
		w->Write(nop); w->Write(nop); w->Write(nop); w->Write(nop);

		totalsize = headersize;

		//Build header.
		for (int x = 0; x < length; ++x)
		{
			//w->Seek(0x20+(0x10*x),SeekOrigin::Begin);
			FileStream ^f = gcnew FileStream(Files[x], FileMode::Open);
			Tname = Path::GetFileName(Files[x]);

			w->Write(totalsize);
			w->Write(Tname->ToCharArray());
			w->Write(nop); w->Write(nop);
			w->Write(false);

			totalsize += f->Length;
			f->Close();
		}

		w->Seek(headersize, SeekOrigin::Begin);

		for (int y = 0; y < length; ++y)
		{
			FileStream ^f = gcnew FileStream(Files[y], FileMode::Open);
			BinaryReader ^r = gcnew BinaryReader(f);
			w->Seek(0, SeekOrigin::End);
			w->Write(r->ReadBytes(f->Length));

			f->Close();
			r->Close();
		}

		o->Close();

		System::Windows::Forms::MessageBox::Show("PAM packaged done!", "PAM Packer");
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		openFileDialog2->Filter = "DAT Files (*.DAT)|*.DAT|ISO Files (*.ISO)|*.ISO|All Files (*.*)|*.*";
		openFileDialog2->Title = "Choose the file you are going to insert the files in";
		openFileDialog2->FileName = "KHBBSFM.ISO";
		openFileDialog2->ShowDialog();
	}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
	{
		CurrentPath = Application::StartupPath;

		File::Delete("FFFF.tmp");
		File::Delete("Out.tmp");

		amnt = 0;
		number = 0;
		linkLabel1->Links->Remove(linkLabel1->Links[0]);
		linkLabel1->Links->Add(0, linkLabel1->Text->Length, "https://www.youtube.com/c/keytotruth");

		UpdateStationVersion();
	}
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
		OpenFileDialog ^d4 = gcnew OpenFileDialog();
		d4->Filter = "PAM Files (*.PAM)|*.pam|All Files (*.*)|*.*";
		d4->Title = "Choose a PAM file to unpack";
		d4->FileName = "";

		if (d4->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			FileStream ^f = gcnew FileStream(d4->FileName, FileMode::Open);
			BinaryReader ^r = gcnew BinaryReader(f);
			r->BaseStream->Seek(4, SeekOrigin::Begin);
			int animations = r->ReadByte();
			unsigned int offset = 0;
			unsigned int noffset = 0;
			int filesize = f->Length;
			int pamsize = 0;
			String ^name = "";
			String ^folder = "PAM - " + Path::GetFileNameWithoutExtension(d4->FileName);
			Directory::CreateDirectory(folder);

			for (int pams = 1; pams < (animations + 1); ++pams)
			{
				r->BaseStream->Seek(0x10 * pams, SeekOrigin::Begin);
				offset = 0;
				offset = r->ReadUInt32();
				if (offset != 0)
				{
					name = "";

					for (short z = 0; z < 12; ++z)
					{
						wchar_t txt = r->ReadChar();
						if (txt != 0)
							name += txt;
					}

					FileStream ^o = gcnew FileStream(folder + "/" + name, FileMode::Create);
					BinaryWriter ^w = gcnew BinaryWriter(o);

					if (pams == (animations - 1))
						pamsize = filesize - offset;
					else
					{
						r->BaseStream->Seek(0x10 * pams + 0x10, SeekOrigin::Begin);
						noffset = r->ReadUInt32();
						pamsize = noffset - offset;
					}

					r->BaseStream->Seek(offset, SeekOrigin::Begin);
					w->Write(r->ReadBytes(pamsize));
					w->Close();
					o->Close();
				}
			}

			f->Close();
			r->Close();
			System::Windows::Forms::MessageBox::Show("Animations unpacked successfully.", "PAM Unpacker");
		}
	}
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		Process^ myProcess = gcnew Process;
		String^ info = openFileDialog1->FileName;
		FileStream^ file = gcnew FileStream("FFFF.tmp", FileMode::Create);
		StreamWriter^ sw = gcnew StreamWriter(file);
		sw->Write(info->ToCharArray());
		sw->Flush();
		sw->Close();
		this->WindowState = FormWindowState::Minimized;
		myProcess->Start(CurrentPath + "/Extract.exe");
		Sleep(1000);
		myProcess->Close();
	}
	private: System::Void openFileDialog2_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		Process^ myProcess = gcnew Process;
		String^ info = openFileDialog2->FileName;
		FileStream^ file = gcnew FileStream("Out.tmp", FileMode::Create);
		StreamWriter^ sw = gcnew StreamWriter(file);
		sw->Write(info->ToCharArray());
		sw->Flush();
		sw->Close();
		file->Close();
		this->WindowState = FormWindowState::Minimized;
		myProcess->Start(CurrentPath + "/Insert.exe");
		Sleep(1000);
		myProcess->Close();
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		System::Diagnostics::Process::Start("https://www.youtube.com/c/keytotruth");
	}
	private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog6->Filter = "PMO Files (*.pmo)|*.PMO|All Files (*.*)|*.*";
		openFileDialog6->Title = "Choose a PMO file";
		openFileDialog6->FileName = "temp.pmo";
		openFileDialog6->ShowDialog();
	}
	private: System::Void openFileDialog6_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		String ^PMO = openFileDialog6->FileName;
		unsigned int mesh1 = 0;
		unsigned int mesh2 = 0;
		int bones = 0;
		int textures = 0;
		int texoff = 0;
		int tm2size = 0;

		FileStream^ pmo = gcnew FileStream(PMO, FileMode::Open);
		BinaryReader^ r = gcnew BinaryReader(pmo);

		//Getting info: ~File_Length|Texture_count|Bone_data|Mesh1_Pointer|Mesh2_Pointer~
		int length = pmo->Length;
		r->BaseStream->Seek(0x8, SeekOrigin::Begin);
		textures = r->ReadUInt16();
		r->BaseStream->Seek(0xC, SeekOrigin::Begin);
		bones = r->ReadUInt32();
		r->BaseStream->Seek(0x10, SeekOrigin::Begin);
		mesh1 = r->ReadUInt32();
		r->BaseStream->Seek(0x1C, SeekOrigin::Begin);
		mesh2 = r->ReadUInt32();

		String ^FN = Path::GetFileName(PMO);
		String ^dir = "PMO - " + FN;
		Directory::CreateDirectory(dir);

		/*                                       Header.                                             */
		FileStream^ f1 = gcnew FileStream(dir + "/Header", FileMode::Create);
		BinaryWriter^ w1 = gcnew BinaryWriter(f1);
		r->BaseStream->Seek(0, SeekOrigin::Begin);

		if (mesh1 == 0)
			w1->Write(r->ReadBytes((textures * 0x20) + 0xA0));
		else
			w1->Write(r->ReadBytes(mesh1));

		f1->Close();
		w1->Close();

		/*                                         Mesh1                                             */
		//If there is no second mesh...
		if (mesh2 == 0)
			if (textures != 0)
			{
				FileStream^ f2 = gcnew FileStream(dir + "/Mesh1", FileMode::Create);
				BinaryWriter^ w2 = gcnew BinaryWriter(f2);
				r->BaseStream->Seek(0xA0, SeekOrigin::Begin);
				texoff = r->ReadUInt32();
				r->BaseStream->Seek(mesh1, SeekOrigin::Begin);
				w2->Write(r->ReadBytes(texoff - mesh1));

				f2->Close();
				w2->Close();
			}
		//If there is a second mesh...
			else
			{
				FileStream^ f2 = gcnew FileStream(dir + "/Mesh1", FileMode::Create);
				BinaryWriter^ w2 = gcnew BinaryWriter(f2);

				if (mesh1 != 0 && mesh1 != mesh2)
				{
					r->BaseStream->Seek(mesh1, SeekOrigin::Begin);
					w2->Write(r->ReadBytes(mesh2 - mesh1));
				}
				else if (mesh1 == 0)
				{
					r->BaseStream->Seek(0xA0, SeekOrigin::Begin);
					texoff = r->ReadUInt32();
					r->BaseStream->Seek(mesh2, SeekOrigin::Begin);
					w2->Write(r->ReadBytes(texoff - mesh2));
				}
				else if (mesh1 == mesh2)
				{
					r->BaseStream->Seek(0xA0, SeekOrigin::Begin);
					texoff = r->ReadUInt32();
					r->BaseStream->Seek(mesh2, SeekOrigin::Begin);
					w2->Write(r->ReadBytes(texoff - mesh2));
				}

				f2->Close();
				w2->Close();
			}

		/*                                        Mesh 2                              */
		if (mesh2 != 0)
		{
			if (mesh1 != 0 && mesh1 != mesh2)
			{
				FileStream^ f3 = gcnew FileStream(dir + "/Mesh2", FileMode::Create);
				BinaryWriter^ w3 = gcnew BinaryWriter(f3);

				r->BaseStream->Seek(0xA0, SeekOrigin::Begin);
				texoff = r->ReadUInt32();
				r->BaseStream->Seek(mesh2, SeekOrigin::Begin);
				w3->Write(r->ReadBytes(texoff - mesh2));

				f3->Close();
				w3->Close();
			}
		}

		// Create textures.
		if (textures != 0)
		{
			for (int t = 1; t <= textures;)
			{
				FileStream ^texture = gcnew FileStream(dir + "/Texture_" + t + ".tm2", FileMode::Create);
				BinaryWriter^ wtex = gcnew BinaryWriter(texture);

				r->BaseStream->Seek((0x80) + 0x20 * t, SeekOrigin::Begin);
				texoff = r->ReadUInt32();
				r->BaseStream->Seek(texoff + 0x10, SeekOrigin::Begin);
				tm2size = r->ReadUInt32();
				tm2size += 0x10;

				r->BaseStream->Seek(texoff, SeekOrigin::Begin);
				wtex->Write(r->ReadBytes(tm2size));

				texture->Close();
				wtex->Close();
				++t;
			}
		}

		/*                                        Bones                                */
		if (bones != 0)
		{
			FileStream^ f4 = gcnew FileStream(dir + "/Bones", FileMode::Create);
			BinaryWriter^ w4 = gcnew BinaryWriter(f4);
			r->BaseStream->Seek(bones, SeekOrigin::Begin);
			w4->Write(r->ReadBytes(length - bones));

			f4->Close();
			w4->Close();
		}

		r->Close();
		pmo->Close();
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		folderBrowserDialog1->RootFolder = Environment::SpecialFolder::Desktop;
		folderBrowserDialog1->Description = "Choose the folder of the PMO to pack";
		folderBrowserDialog1->ShowDialog();
		String ^dir = folderBrowserDialog1->SelectedPath;

		int padding = 0;
		short textures = 0;
		int totalsize = 0;
		int header = 0;
		int mesh1 = 0;
		int mesh2 = 0;
		int texture = 0;
		int bones = 0;
		int nop = 0;


		//New PMO.
		FileStream^ pmo = gcnew FileStream("New.pmo", FileMode::Create);
		BinaryWriter^ w = gcnew BinaryWriter(pmo);

		///////////////////////////////////////////////////////////////////////////////////////////
		/*                                       Header                                          */
		///////////////////////////////////////////////////////////////////////////////////////////
		FileStream^ f1 = gcnew FileStream(dir + "/Header", FileMode::Open);
		BinaryReader^ r1 = gcnew BinaryReader(f1);

		r1->BaseStream->Seek(8, SeekOrigin::Begin);
		textures = r1->ReadUInt16();
		r1->BaseStream->Seek(0, SeekOrigin::Begin);
		header = f1->Length;
		w->Write(r1->ReadBytes(header));

		totalsize += header;

		f1->Close();
		r1->Close();
		//////////////////////////////////////////////////////////////////////////////////////////
		/*                                       Mesh1                                          */
		//////////////////////////////////////////////////////////////////////////////////////////
		FileStream^ f2 = gcnew FileStream(dir + "/Mesh1", FileMode::Open);
		BinaryReader^ r2 = gcnew BinaryReader(f2);

		mesh1 = f2->Length;
		w->Write(r2->ReadBytes(mesh1));
		w->Seek(0x10, SeekOrigin::Begin);
		w->Write(totalsize);
		w->Seek(0, SeekOrigin::End);

		totalsize += mesh1;

		r2->Close();
		f2->Close();
		//////////////////////////////////////////////////////////////////////////////////////////
		/*                                     Mesh2                                            */
		//////////////////////////////////////////////////////////////////////////////////////////
		if (File::Exists(dir + "/Mesh2"))
		{
			FileStream^ f3 = gcnew FileStream(dir + "/Mesh2", FileMode::Open);
			BinaryReader^ r3 = gcnew BinaryReader(f3);

			mesh2 = f3->Length;
			w->Write(r3->ReadBytes(mesh2));
			w->Seek(0x1C, SeekOrigin::Begin);
			w->Write(totalsize);
			w->Seek(0, SeekOrigin::End);

			totalsize += mesh2;

			f3->Close();
			r3->Close();
		}
		else
		{
			w->Seek(0x1C, SeekOrigin::Begin);
			w->Write(nop);
			w->Seek(0, SeekOrigin::End);
		}

		//////////////////////////////////////////////////////////////////////////////////////////
		/*                                       Textures                                       */
		//////////////////////////////////////////////////////////////////////////////////////////
		for (int c = 1; c < (textures + 1);)
		{
			if (File::Exists(dir + "/Texture_" + c + ".tm2"))
			{
				FileStream ^tm2 = gcnew FileStream(dir + "/Texture_" + c + ".tm2", FileMode::Open);
				BinaryReader ^read = gcnew BinaryReader(tm2);

				texture = tm2->Length;
				w->Write(read->ReadBytes(texture));
				w->Seek((0x80) + 0x20 * c, SeekOrigin::Begin);
				w->Write(totalsize);
				w->Seek(0, SeekOrigin::End);

				totalsize += texture;

				read->Close();
				tm2->Close();
			}
			else
			{
				w->Seek((0x80) + 0x20 * c, SeekOrigin::Begin);
				w->Write(nop);
				w->Seek(0, SeekOrigin::End);
			}
			++c;
		}

		//////////////////////////////////////////////////////////////////////////////////////////
		/*                                       Bones                                          */
		//////////////////////////////////////////////////////////////////////////////////////////
		if (File::Exists(dir + "/Bones"))
		{
			FileStream^ f4 = gcnew FileStream(dir + "/Bones", FileMode::Open);
			BinaryReader^ r4 = gcnew BinaryReader(f4);

			bones = f4->Length;
			w->Write(r4->ReadBytes(bones));
			w->Seek(0xC, SeekOrigin::Begin);
			w->Write(totalsize);

			f4->Close();
			r4->Close();
		}

		pmo->Close();
		w->Close();
	}

	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog7->Filter = "TEX Files (*.tex)|*.TEX|All Files (*.*)|*.*";
		openFileDialog7->Title = "Choose a TEX file";
		openFileDialog7->FileName = "";
		openFileDialog7->Multiselect = true;
		openFileDialog7->ShowDialog();
	}
	private: System::Void openFileDialog7_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		cli::array<String^> ^TEX = openFileDialog7->FileNames;
		Directory::CreateDirectory("@CONVERTED");

		for each(String^ file in TEX)
		{
			FileStream^ tex = gcnew FileStream(file, FileMode::Open);
			String ^fn = Path::GetFileNameWithoutExtension(file);
			FileStream^ tm2 = gcnew FileStream("@CONVERTED/" + fn + ".tm2", FileMode::Create);
			BinaryReader ^r = gcnew BinaryReader(tex);
			BinaryWriter ^w = gcnew BinaryWriter(tm2);

			int totalsize = 0;
			int chunck = 0x5030100;
			int chunck2 = 0x260;
			short imgCnt = 1;
			short version = 4;
			int padding = 0;
			short PalSize = 0x100;
			int header = 0x324D4954;
			short header_size = 0x30;
			int clut = 0x400;
			short width = 0;
			short height = 0;
			int PalOff = tex->Length;
			PalOff -= 1024;
			int TexImg = 0;
			int tmsize = tm2->Length;
			int tmImg = 0x40;
			int tmPal = tmsize - 1024;

			//Copia de paleta.
			r->BaseStream->Seek(0x1C, SeekOrigin::Begin);
			width = r->ReadInt32();
			r->BaseStream->Seek(0x20, SeekOrigin::Begin);
			height = r->ReadInt32();
			int pixels = width * height;
			totalsize = (pixels + 1024 + 0x40) - 0x10;

			//Crear cabezal TIM2.
			w->Seek(0, SeekOrigin::Begin);
			w->Write(header);
			w->Write(version);
			w->Write(imgCnt);
			w->Write(padding);
			w->Write(padding);
			w->Write(totalsize);
			w->Write(clut);
			w->Write(pixels);
			w->Write(header_size);
			w->Write(PalSize);
			w->Write(chunck);
			w->Write(width);
			w->Write(height);
			w->Write(padding);
			w->Write(padding);
			w->Write(chunck2);
			w->Write(padding);
			w->Write(padding);
			w->Write(padding);

			//Place in the bits.
			r->BaseStream->Seek(0x30, SeekOrigin::Begin);
			w->Seek(0x40, SeekOrigin::Begin);

			for (int a = 0; a < pixels; ++a)
			{
				w->Write(r->ReadByte());
			}

			r->BaseStream->Seek(PalOff, SeekOrigin::Begin);
			w->Write(r->ReadBytes(1024));

			r->Close();
			w->Close();
			tex->Close();
			tm2->Close();
		}
	}
	private: System::Void openFileDialog8_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		String ^file = openFileDialog8->FileName;
		FileStream^ tex = gcnew FileStream(file, FileMode::Open);
		BinaryReader ^r = gcnew BinaryReader(tex);
		int fsize = tex->Length;
		String ^path = "@TEX";
		Directory::CreateDirectory(path);

		int totalsize = 0;
		int check = 0;
		int cnt = 0;
		int texsize = 0;
		int x = 0;
		int y = 0;

		for (int b = 0x0; b < fsize; b += 0x10)
		{
			r->BaseStream->Seek(b, SeekOrigin::Begin);
			check = r->ReadInt32();
			if (check == 0x584554)
			{
				label10->Text = cnt.ToString();
				FileStream^ texture = gcnew FileStream(path + "/" + b + ".tex", FileMode::Create);
				BinaryWriter ^w = gcnew BinaryWriter(texture);

				r->BaseStream->Seek(b + 0x1C, SeekOrigin::Begin);
				x = r->ReadInt32();
				r->BaseStream->Seek(b + 0x20, SeekOrigin::Begin);
				y = r->ReadInt32();
				totalsize = (x * y) + 1024 + 0x40;

				r->BaseStream->Seek(b, SeekOrigin::Begin);
				w->Write(r->ReadBytes(totalsize));

				texture->Close();
				w->Close();
			}
		}
		r->Close();
		tex->Close();
		label10->Text = "Done extracting!";
	}
	private: System::Void folderBrowserDialog1_HelpRequest(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void folderBrowserDialog1_HelpRequest_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog8->Filter = "All Files (*.*)|*.*";
		openFileDialog8->Title = "Choose a file";
		openFileDialog8->FileName = "____";
		openFileDialog8->ShowDialog();
	}
	private: System::Void button10_Click_1(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog ^dg = gcnew OpenFileDialog();
		dg->Multiselect = true;
		dg->Filter = "PMP Files (*.pmp)|*.pmp|All Files (*.*)|*.*";
		dg->Title = "Choose a map file";
		dg->FileName = "zz_00.pmp";
		String ^test = "";
		short textures = 0;
		int tm2off = 0;
		int tm2size = 0;
		int x1 = 0;
		int x2 = 0;
		int x3 = 0;
		int x4 = 0;
		int PMO = 0;
		int pmo_off = 0;
		int PMO_SIZE = 0;
		int g = 0;
		int filesize = 0;
		short PMO_A = 0;
		short PMO_HEADER = 0;

		if (dg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			cli::array<String^> ^PMP = dg->FileNames;
			for each(String ^file in PMP)
			{
				String ^path = Path::GetFileNameWithoutExtension(file);
				Directory::CreateDirectory(path);
				FileStream ^f = gcnew FileStream(file, FileMode::Open);
				FileStream ^info = gcnew FileStream(path + ".cmp", FileMode::Create);
				BinaryWriter ^inw = gcnew BinaryWriter(info);
				inw->Write(file);
				BinaryReader ^r = gcnew BinaryReader(f);

				r->BaseStream->Seek(0x10, SeekOrigin::Begin);
				PMO_A = r->ReadUInt16();
				inw->Write(PMO_A);

				for (short a = 0; a < PMO_A; ++a)
				{
					++PMO;
					r->BaseStream->Seek((0x44) + 0x30 * a, SeekOrigin::Begin);
					pmo_off = r->ReadInt32();
					r->BaseStream->Seek(pmo_off + 0x8, SeekOrigin::Begin);
					textures = r->ReadUInt16();
					r->BaseStream->Seek(pmo_off + 0x10, SeekOrigin::Begin);
					PMO_HEADER = r->ReadUInt16();

					//If PMO header is 0, do a basic
					//calculation using the texture amount.
					if (PMO_HEADER == 0) { PMO_HEADER = 0x80 + (0x20 * textures); }

					//Loop to get PMO size.
					for (int c = 0;; c += 0x10)
					{
						r->BaseStream->Seek((pmo_off + PMO_HEADER) + c, SeekOrigin::Begin);
						x1 = r->ReadInt32();
						r->BaseStream->Seek((pmo_off + PMO_HEADER) + c + 0x4, SeekOrigin::Begin);
						x2 = r->ReadInt32();
						r->BaseStream->Seek((pmo_off + PMO_HEADER) + c + 0x8, SeekOrigin::Begin);
						x3 = r->ReadInt32();
						r->BaseStream->Seek((pmo_off + PMO_HEADER) + c + 0xC, SeekOrigin::Begin);
						x4 = r->ReadInt32();
						PMO_SIZE = c + PMO_HEADER;
						if (x1 == 0 && x2 == 0 && x3 == 0 && x4 == 0)
						{
							break;
						}
					}

					PMO_SIZE += 0x10;
					test = path + "/" + PMO.ToString() + ".pmo";

					FileStream ^o = gcnew FileStream(test, FileMode::Create);
					BinaryReader ^rn = gcnew BinaryReader(o);
					BinaryWriter ^wn = gcnew BinaryWriter(o);

					inw->Write(test);
					inw->Write(textures);
					inw->Write(pmo_off);
					inw->Write(PMO_SIZE);

					r->BaseStream->Seek(pmo_off, SeekOrigin::Begin);
					wn->Write(r->ReadBytes(PMO_SIZE));

					for (short s = 0; s <= (textures - 1);)
					{
						tm2size = 0;
						r->BaseStream->Seek((pmo_off + 0xA0) + 0x20 * s, SeekOrigin::Begin);
						tm2off = r->ReadUInt32();
						r->BaseStream->Seek(tm2off + 0x10, SeekOrigin::Begin);
						tm2size = r->ReadUInt32();
						tm2size += 0x10;
						filesize = o->Length;

						// Offset en PMP - Offset en PMO - Tamaño TIM2.
						inw->Write(tm2off);
						inw->Write(filesize);
						inw->Write(tm2size);

						r->BaseStream->Seek((tm2off), SeekOrigin::Begin);
						wn->Seek(0, SeekOrigin::End);
						wn->Write(r->ReadBytes(tm2size));
						wn->Seek(0xA0 + (0x20 * s), SeekOrigin::Begin);
						wn->Write(filesize);
						++s;
					}
					o->Close();
					rn->Close();
					wn->Close();
				}
				PMO = 0;
				info->Close();
				inw->Close();
				f->Close();
				r->Close();
			}
		}
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog ^diag = gcnew OpenFileDialog();
		diag->Filter = "CMP Files (*.cmp)|*.cmp|All Files (*.*)|*.*";
		diag->Title = "Choose a cmp file";
		diag->FileName = "test.cmp";
		String ^test = "";
		int PMO_HEADER = 0;
		int x1, x2, x3, x4;
		int PMO_SIZE_EX = 0;
		int PMO_SIZE = 0;
		int pmo_off = 0;
		int tm2off = 0;
		int tm2pmp = 0;
		int tm2pmo = 0;
		int tm2size = 0;
		int tm2size_ex = 0;
		short textures = 0;
		short PMO_A = 0;
		if (diag->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String ^name = diag->FileName;
			String ^nfile = "";

			//Open LBA.
			FileStream ^info = gcnew FileStream(name, FileMode::Open);
			BinaryReader ^r = gcnew BinaryReader(info);

			//Read source file and PMO count.
			nfile = r->ReadString();
			PMO_A = r->ReadUInt16();

			//Open source file.
			FileStream ^f = gcnew FileStream(nfile, FileMode::Open);
			BinaryWriter ^w = gcnew BinaryWriter(f);

			for (int a = 0; a < PMO_A;)
			{
				//Read file - pmo offset - pmo size.
				test = r->ReadString();
				pmo_off = r->ReadUInt32();
				PMO_SIZE = r->ReadUInt32();

				//Open file in LBA.
				FileStream ^tmp = gcnew FileStream(test, FileMode::Open);
				BinaryReader ^rb = gcnew BinaryReader(tmp);
				textures = rb->BaseStream->Seek(8, SeekOrigin::Begin);
				PMO_HEADER = (0x80) + 0x20 * textures;

				//Loop to get new PMO size.
				for (int c = 0;; c += 0x10)
				{
					rb->BaseStream->Seek((PMO_HEADER)+c, SeekOrigin::Begin);
					x1 = rb->ReadInt32();
					rb->BaseStream->Seek((PMO_HEADER)+c + 0x4, SeekOrigin::Begin);
					x2 = rb->ReadInt32();
					rb->BaseStream->Seek((PMO_HEADER)+c + 0x8, SeekOrigin::Begin);
					x3 = rb->ReadInt32();
					rb->BaseStream->Seek((PMO_HEADER)+c + 0xC, SeekOrigin::Begin);
					x4 = rb->ReadInt32();
					PMO_SIZE_EX = c + PMO_HEADER;
					if (x1 == 0 && x2 == 0 && x3 == 0 && x4 == 0)
					{
						break;
					}
				}

				//If new PMO is bigger than old one, doesn't reinsert.
				if (PMO_SIZE_EX <= PMO_SIZE)
				{
					rb->BaseStream->Seek(0, SeekOrigin::Begin);
					w->Seek(pmo_off, SeekOrigin::Begin);
					w->Write(rb->ReadBytes(PMO_SIZE_EX));
				}

				//Loop to insert textures.
				for (int b = 0; b <= (textures - 1);)
				{
					tm2pmp = r->ReadUInt32();
					tm2size = r->ReadUInt32();

					rb->BaseStream->Seek((0xA0) + 0x20 * b, SeekOrigin::Begin);
					tm2off = rb->ReadUInt32();
					rb->BaseStream->Seek(tm2off + 0x10, SeekOrigin::Begin);
					tm2size_ex = rb->ReadUInt32();
					tm2size_ex += 0x10;

					if (tm2size_ex <= tm2size)
					{
						w->Seek(tm2pmp, SeekOrigin::Begin);
						rb->BaseStream->Seek(tm2off, SeekOrigin::Begin);
						w->Write(rb->ReadBytes(tm2size_ex));
					}
					++b;
				}

				tmp->Close();
				rb->Close();
				++a;
			}
			info->Close();
			r->Close();
			f->Close();
			w->Close();
		}
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^file1 = "";
		String ^file2 = "";
		int pixels = 0;
		short x1 = 0;
		short y1 = 0;
		int x2 = 0;
		int y2 = 0;
		OpenFileDialog ^d1 = gcnew OpenFileDialog();
		OpenFileDialog ^d2 = gcnew OpenFileDialog();

		//Dialog properties.
		d1->Filter = "TIM2 Files (*.tm2)|*.tm2|All Files (*.*)|*.*";
		d1->Title = "Choose the edited TIM2";
		d1->FileName = "1.tm2";
		d2->Filter = "TEX Files (*.tex)|*.tex|All Files (*.*)|*.*";
		d2->Title = "Choose the TEX to insert the picture in";
		d2->FileName = "1.tex";

		// Display Dialogs and get file names.
		if (d1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			//TIM2 file.
			file1 = d1->FileName;

			if (d2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				//TEX file.
				file2 = d2->FileName;

				FileStream ^f = gcnew FileStream(file1, FileMode::Open);
				FileStream ^o = gcnew FileStream(file2, FileMode::Open);
				BinaryReader ^rf = gcnew BinaryReader(f);
				BinaryReader ^ro = gcnew BinaryReader(o);
				BinaryWriter ^wo = gcnew BinaryWriter(o);

				rf->BaseStream->Seek(0x24, SeekOrigin::Begin);
				x1 = rf->ReadUInt16();
				y1 = rf->ReadUInt16();
				ro->BaseStream->Seek(0x1C, SeekOrigin::Begin);
				x2 = ro->ReadUInt32();
				y2 = ro->ReadUInt32();

				if (x1 == x2 && y1 == y2)
				{
					int fsize1 = f->Length;
					int fsize2 = o->Length;
					//Writes pixels.
					pixels = x1*y1;
					rf->BaseStream->Seek(0x40, SeekOrigin::Begin);
					wo->Seek(0x30, SeekOrigin::Begin);
					wo->Write(rf->ReadBytes(pixels));

					//Write palette.
					rf->BaseStream->Seek(fsize1 - 1024, SeekOrigin::Begin);
					wo->Seek(fsize2 - 1024, SeekOrigin::Begin);
					wo->Write(rf->ReadBytes(1024));
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("The TIM2 you choose doesn't match\nin size with the TEX you chose.");
				}
				wo->Close();
				ro->Close();
				rf->Close();
				f->Close();
				o->Close();
			}
		}
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^folder = "";
		String ^source = "";
		int offset = 0;
		int size = 0;
		FolderBrowserDialog ^foldiag = gcnew FolderBrowserDialog();
		OpenFileDialog ^diag = gcnew OpenFileDialog();
		diag->FileName = "xxx.FEP";
		diag->Filter = "FEP Files (*.fep)|*.fep|All Files (*.*)|*.*";
		foldiag->Description = "Choose the folder where the TEXs are in.";

		if (foldiag->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			folder = foldiag->SelectedPath;
			if (diag->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				source = diag->FileName;
				FileStream ^o = gcnew FileStream(source, FileMode::Open);
				BinaryWriter ^w = gcnew BinaryWriter(o);
				array<String^> ^rgFiles = Directory::GetFiles(folder, "*.tex");

				for each(String ^file in rgFiles)
				{
					FileStream ^a = gcnew FileStream(file, FileMode::Open);
					BinaryReader ^r = gcnew BinaryReader(a);
					size = a->Length;
					offset = offset.Parse(Path::GetFileNameWithoutExtension(file));
					w->Seek(offset, SeekOrigin::Begin);
					w->Write(r->ReadBytes(size));

					a->Close();
					r->Close();
				}

				o->Close();
				w->Close();
			}
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start(CurrentPath + "/EXTRA/CTD Editor.exe");
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start(CurrentPath + "/EXTRA/OLO Editor.exe");
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start(CurrentPath + "/EXTRA/EAD Editor.exe");
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start(CurrentPath + "/EXTRA/Noesis/Noesis.exe");
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start(CurrentPath + "/EXTRA/EXA Editor.exe");
	}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start(CurrentPath + "/EXTRA/AT3 Tool.exe");
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog ^dg = gcnew OpenFileDialog();
		dg->Filter = "TIM2 Files (*.tm2)|*.tm2|All Files (*.*)|*.*";
		dg->Title = "Choose a TIM2 picture to fix";
		dg->FileName = "";

		if (dg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileStream ^file = gcnew FileStream(dg->FileName, FileMode::Open);
			BinaryWriter ^w = gcnew BinaryWriter(file);
			unsigned int filesize = file->Length;
			unsigned int palettepos = filesize - 1024;
			unsigned char alpha = 0xFF;

			for (int pass = 0; pass < 255; ++pass)
			{
				w->Seek(palettepos + (pass * 4) + 3, SeekOrigin::Begin);
				w->Write(alpha);
			}

			MessageBox::Show("Whole palette set to alpha 255.");
		}
	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog ^d = gcnew OpenFileDialog();
		d->Title = "Choose a file to insert";
		if (d->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileStream ^tmp = gcnew FileStream(d->FileName, FileMode::Open);
			BinaryReader ^r = gcnew BinaryReader(tmp);
			unsigned int filesize = tmp->Length;

			FileStream ^info = gcnew FileStream("INFO", FileMode::Open);
			BinaryReader ^read = gcnew BinaryReader(info);
			unsigned int infosize = info->Length;
			unsigned int pos = 0;
			unsigned int size = 0;

			String ^dir = Path::GetDirectoryName(d->FileName);
			String ^f = Path::GetFileName(d->FileName);
			String ^Path = dir + "/" + f;
			String ^check = "";

			for (unsigned int a = 0; a < infosize - 200;)
			{
				read->BaseStream->Seek(a, SeekOrigin::Begin);
				for (short c = 0; c < 128; ++c)
					check += read->ReadChar();

				if (String::Compare(Path, check, false) == 0)
				{
					read->BaseStream->Seek(a + 128, SeekOrigin::Begin);
					pos = r->ReadUInt32();
					size = r->ReadUInt32();

					break;
				}
				a += 136;
			}

			if (size <= filesize)
			{
				OpenFileDialog ^d2 = gcnew OpenFileDialog();
				d2->Title = "Choose the BBS to insert the file in";
				if (d2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					FileStream ^o = gcnew FileStream(d2->FileName, FileMode::Open);
					BinaryWriter ^w = gcnew BinaryWriter(o);

					w->Seek(pos, SeekOrigin::Begin);
					w->Write(r->ReadBytes(filesize));
					w->Close();
					o->Close();
					MessageBox::Show("File inserted properly.");
				}
			}
			else
			{
				MessageBox::Show("The file is bigger than the original one.");
			}

			r->Close();
			read->Close();
			tmp->Close();
			info->Close();
		}
	}
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog ^t = gcnew OpenFileDialog();
		t->FileName = "";
		t->Title = "Choose a TIM2 picture";

		if (t->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			EX_TIM2 = t->FileName;
	}
	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
		unsigned char alpha = (unsigned char)numericUpDown1->Value;
		FileStream ^file = gcnew FileStream(EX_TIM2, FileMode::Open);
		int pos = file->Length - 1024;

		for (int a = 0; a < 256; ++a)
		{
			file->Seek(pos + 3 + (a * 4), SeekOrigin::Begin);
			file->WriteByte(alpha);
		}
	}
	private: System::Void UpdateStationVersion()
	{

	}
	};
}