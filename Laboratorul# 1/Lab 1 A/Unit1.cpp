//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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

void __fastcall TForm1::DecrementareClick(TObject *Sender)
{
  Edit1->Text = --i;
  Label2->Caption=("Decrement i");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IncrementareClick(TObject *Sender)
{
    Edit1->Text = ++i;
  Label2->Caption=("Increment i");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExitClick(TObject *Sender)
{
  exit(42);
}
//---------------------------------------------------------------------------
