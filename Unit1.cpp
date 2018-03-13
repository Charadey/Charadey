//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioGroup1Click(TObject *Sender)
{
	switch (RadioGroup1->ItemIndex)
	{
		case 0: Label1->Caption="+";break;
		case 1: Label1->Caption="-";break;
		case 2: Label1->Caption="*";break;
		case 3: Label1->Caption="/";break;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if (Edit1->Text.Length()&&Edit2->Text.Length()&&RadioGroup1->ItemIndex!=-1) {
		switch (RadioGroup1->ItemIndex)
		{
			case 0: Edit3->Text=Edit1->Text.ToDouble()+Edit2->Text.ToDouble();break;
			case 1: Edit3->Text=Edit1->Text.ToDouble()-Edit2->Text.ToDouble();break;
			case 2: Edit3->Text=Edit1->Text.ToDouble()*Edit2->Text.ToDouble();break;
			case 3: Edit3->Text=Edit1->Text.ToDouble()/Edit2->Text.ToDouble();break;
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	indinput=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit2Click(TObject *Sender)
{
	indinput=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b_piClick(TObject *Sender)
{
	if (indinput) {
		Edit2->Text = M_PI;
	}
	else{
		Edit1->Text = M_PI;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	indinput=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p_eClick(TObject *Sender)
{
	if (indinput) {
		Edit2->Text = M_E;
	}
	else{
		Edit1->Text = M_E;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	if (OpenDialog1->Execute()) {
		Edit4->Text = OpenDialog1->FileName;
		Memo1->Lines->LoadFromFile(OpenDialog1->FileName);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	if (SaveDialog1->Execute()) {
		Edit4->Text = SaveDialog1->FileName;
		Memo1->Lines->SaveToFile(SaveDialog1->FileName);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N4Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
