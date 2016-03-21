//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "lab1A.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int i = 0;
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
Edit1->Text = ++i;
Label2->Caption=("Increment i");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Edit1->Text = --i;
Label2->Caption=("Decrement i");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
exit(42);
}
//---------------------------------------------------------------------------
