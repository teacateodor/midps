object Form1: TForm1
  Left = 311
  Top = 521
  Width = 452
  Height = 418
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
  object Label1: TLabel
    Left = 128
    Top = 32
    Width = 155
    Height = 20
    Caption = 'Data si ora curenta'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 40
    Top = 8
    Width = 383
    Height = 24
    Caption = 'Resurse grafice ale mediului C++ Builder'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object PaintBox2: TPaintBox
    Left = 144
    Top = 126
    Width = 185
    Height = 185
    OnPaint = PaintBox2Paint
  end
  object Label3: TLabel
    Left = 352
    Top = 352
    Width = 68
    Height = 13
    Caption = 'Teaca Teodor'
  end
  object Edit1: TEdit
    Left = 152
    Top = 64
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Button1: TButton
    Left = 88
    Top = 96
    Width = 113
    Height = 25
    Caption = 'Start'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 216
    Top = 96
    Width = 115
    Height = 25
    Caption = 'Stop'
    TabOrder = 2
  end
  object Button3: TButton
    Left = 88
    Top = 320
    Width = 241
    Height = 25
    Caption = 'Exit'
    TabOrder = 3
    OnClick = Button3Click
  end
  object Panel1: TPanel
    Left = 88
    Top = 128
    Width = 49
    Height = 185
    Caption = 'Panel1'
    Color = clBackground
    TabOrder = 4
    DesignSize = (
      49
      185)
    object Panel2: TPanel
      Left = 0
      Top = 0
      Width = 49
      Height = 185
      Anchors = [akRight, akBottom]
      Color = clSilver
      TabOrder = 0
    end
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 112
    Top = 56
  end
  object Timer2: TTimer
    Interval = 500
    OnTimer = Timer2Timer
    Left = 288
    Top = 56
  end
end
