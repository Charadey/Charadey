//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TMemo *Memo1;
	TLabel *Label1;
	TRadioGroup *RadioGroup1;
	TButton *Button1;
	TEdit *Edit2;
	TEdit *Edit3;
	TButton *p_e;
	TButton *Button4;
	TButton *Button5;
	TLabel *Label2;
	TButton *b_pi;
	TOpenDialog *OpenDialog1;
	TSaveDialog *SaveDialog1;
	TEdit *Edit4;
	TMainMenu *MainMenu1;
	TMenuItem *A1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	void __fastcall RadioGroup1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall Edit2Click(TObject *Sender);
	void __fastcall b_piClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall p_eClick(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
private:	// User declarations
	int indinput;
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
