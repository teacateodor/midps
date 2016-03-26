object Form1: TForm1
  Left = 201
  Top = 802
  Width = 439
  Height = 227
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel
    Left = 192
    Top = 64
    Width = 32
    Height = 13
    Caption = 'Label2'
  end
  object Contor: TLabel
    Left = 80
    Top = 24
    Width = 70
    Height = 24
    Caption = 'Contor'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Reference Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Decrement: TLabel
    Left = 264
    Top = 24
    Width = 103
    Height = 24
    Caption = 'Decrement'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Increment: TLabel
    Left = 160
    Top = 24
    Width = 94
    Height = 24
    Caption = 'Increment'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label1: TLabel
    Left = 344
    Top = 168
    Width = 68
    Height = 13
    Caption = 'Teaca Teodor'
  end
  object Incrementare: TButton
    Left = 288
    Top = 56
    Width = 75
    Height = 25
    Caption = 'Incrementare'
    TabOrder = 0
    OnClick = IncrementareClick
  end
  object Decrementare: TButton
    Left = 88
    Top = 56
    Width = 75
    Height = 25
    Caption = 'Decrementare'
    TabOrder = 1
    OnClick = DecrementareClick
  end
  object Edit1: TEdit
    Left = 192
    Top = 88
    Width = 41
    Height = 21
    TabOrder = 2
    Text = 'Edit1'
  end
  object Exit: TButton
    Left = 128
    Top = 120
    Width = 161
    Height = 25
    Caption = 'Exit'
    TabOrder = 3
    OnClick = ExitClick
  end
end
