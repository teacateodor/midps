object Form1: TForm1
  Left = 198
  Top = 125
  Width = 442
  Height = 359
  Caption = 'MIDPS 1- A'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 80
    Top = 32
    Width = 280
    Height = 20
    Hint = 'Incrementare decrementare contor'
    Caption = 'Incrementare decrementare contor'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object Label2: TLabel
    Left = 8
    Top = 72
    Width = 407
    Height = 20
    Hint = 'sensului de varia?ie a variabilei i din caseta Edit1;'
    Caption = 'sensului de varia?ie a variabilei i din caseta Edit1;'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object Button1: TButton
    Left = 24
    Top = 136
    Width = 75
    Height = 25
    Hint = 'increment'
    Caption = 'Up'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 24
    Top = 216
    Width = 75
    Height = 25
    Hint = 'decrement'
    Caption = 'Down'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 152
    Top = 176
    Width = 121
    Height = 21
    Hint = 'numarul'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    Text = '0'
  end
  object Button3: TButton
    Left = 304
    Top = 216
    Width = 75
    Height = 25
    Hint = 'exit'
    Caption = 'Exit'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    OnClick = Button3Click
  end
end
