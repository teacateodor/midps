//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Incrementare;
        TButton *Decrementare;
        TLabel *Label2;
        TEdit *Edit1;
        TButton *Exit;
        TLabel *Contor;
        TLabel *Decrement;
        TLabel *Increment;
        TLabel *Label1;
        void __fastcall DecrementareClick(TObject *Sender);
        void __fastcall IncrementareClick(TObject *Sender);
        void __fastcall ExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
