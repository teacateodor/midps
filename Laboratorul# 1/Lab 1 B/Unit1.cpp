//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

int i = 0;
int zec, sec, min = 0;
struct date d;
struct time t;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
Timer1->Enabled=true;
Timer2->Enabled=false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
  Timer2->Enabled=true;
Button1->Enabled=false;
Button3->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
  Timer2->Enabled=false;
 Button1->Enabled=true;
 Button3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
min=0;
sec=0;
zec=0;
Edit2->Text="00min:00sec:00zec";
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
 void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
char crono[20];
zec++;
Timer1->Tag=zec;
if(zec==10){
sec++;
zec=0;
}
if(sec==60){
min++;
sec=0;
}
sprintf(crono,"%02dmin:%02dsec:%02dzec",min,sec,zec);
Edit2->Text=(AnsiString)crono;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::EXITClick(TObject *Sender)
{
 exit(42);
}
//---------------------------------------------------------------------------


