//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#include <stdlib.h>
#pragma hdrstop

#include "Unit1.h"
#include "dos.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
struct date d;
struct time t;
//TRect rect, sursa, destinatie;
int xCurr, yCurr;
TRect rect, sursa, destinatie;
int x,y,r=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
Timer2->Enabled=false;


     xCurr = PaintBox2->Width-50;
     yCurr = PaintBox2->Height/2;
     PaintBox2->Canvas->MoveTo(xCurr, yCurr);

//PaintBox2->Canvas->MoveTo(0,PaintBox2->Height/2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
randomize();
r=random(185);
Timer1->Tag=r;
Panel2->Height=r;

 yCurr = PaintBox2->Height/3 + rand() % PaintBox2->Height/3;


     PaintBox2->Canvas->Pen->Color = clRed;
     PaintBox2->Canvas->LineTo(xCurr+5, yCurr);
     PaintBox2->Canvas->MoveTo(xCurr, yCurr);

     sursa = Rect(5, 0, PaintBox2->Width-1, PaintBox2->Height);
     destinatie = Rect(1, 0, PaintBox2->Width-5, PaintBox2->Height);
     PaintBox2->Canvas->CopyRect(destinatie, PaintBox2->Canvas, sursa);

     sursa = Rect(1, 0, 8, PaintBox2->Height);
     destinatie = Rect(PaintBox2->Width-8, 0,
                PaintBox2->Width-1, PaintBox2->Height);
     PaintBox2->Canvas->CopyRect(destinatie, PaintBox2->Canvas, sursa);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
  char buf[20];
getdate(&d);
gettime(&t);
sprintf(buf,"%02d-%02d-%4d %02d:%02d:%02d",d.da_day,d.da_mon,d.da_year,
t.ti_hour,t.ti_min,t.ti_sec);
Edit1->Text=(AnsiString)buf;      
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PaintBox2Paint(TObject *Sender)
{
rect = Rect(0, 0, PaintBox2->Width, PaintBox2->Height);

     PaintBox2->Canvas->Pen->Color = clBlack;
     PaintBox2->Canvas->Brush->Color = clWhite;
     PaintBox2->Canvas->Rectangle(rect);
     PaintBox2->Canvas->Brush->Color = clBlack;
     PaintBox2->Canvas->Brush->Style = bsCross;
     PaintBox2->Canvas->FloodFill(1, 1, clBlack, fsBorder);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Button3->Enabled=false;
Timer2->Enabled=true;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
exit(42);        
}
//---------------------------------------------------------------------------

