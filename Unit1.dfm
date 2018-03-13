object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 478
  ClientWidth = 539
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 139
    Top = 19
    Width = 8
    Height = 13
    Caption = '+'
  end
  object Label2: TLabel
    Left = 330
    Top = 19
    Width = 15
    Height = 13
    Caption = '='
  end
  object Edit1: TEdit
    Left = 22
    Top = 16
    Width = 111
    Height = 21
    TabOrder = 0
    OnClick = Edit1Click
  end
  object Memo1: TMemo
    Left = 22
    Top = 200
    Width = 477
    Height = 169
    TabOrder = 1
  end
  object RadioGroup1: TRadioGroup
    Left = 153
    Top = 104
    Width = 169
    Height = 65
    Caption = #1042#1099#1073#1086#1088' '#1086#1087#1077#1088#1072#1094#1080#1080
    Columns = 2
    ItemIndex = 0
    Items.Strings = (
      #1057#1083#1086#1078#1080#1090#1100
      #1042#1099#1095#1077#1089#1090#1100
      #1059#1084#1085#1086#1078#1080#1090#1100
      #1056#1072#1079#1076#1077#1083#1080#1090#1100)
    TabOrder = 2
    OnClick = RadioGroup1Click
  end
  object Button1: TButton
    Left = 400
    Top = 104
    Width = 75
    Height = 25
    Caption = #1042#1099#1087#1086#1083#1085#1080#1090#1100
    TabOrder = 3
    OnClick = Button1Click
  end
  object Edit2: TEdit
    Left = 153
    Top = 16
    Width = 171
    Height = 21
    TabOrder = 4
    OnClick = Edit2Click
  end
  object Edit3: TEdit
    Left = 344
    Top = 16
    Width = 155
    Height = 21
    TabOrder = 5
  end
  object b_pi: TButton
    Left = 22
    Top = 104
    Width = 75
    Height = 25
    Caption = 'p'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Symbol'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = b_piClick
  end
  object p_e: TButton
    Left = 22
    Top = 144
    Width = 75
    Height = 25
    Caption = 'e'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 7
    OnClick = p_eClick
  end
  object Button4: TButton
    Left = 22
    Top = 432
    Width = 107
    Height = 25
    Caption = #1057#1095#1080#1090#1072#1090#1100' '#1080#1079' '#1092#1072#1081#1083#1072
    TabOrder = 8
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 408
    Top = 432
    Width = 91
    Height = 25
    Caption = #1047#1072#1087#1080#1089#1072#1090#1100' '#1092#1072#1081#1083
    TabOrder = 9
    OnClick = Button5Click
  end
  object Edit4: TEdit
    Left = 22
    Top = 391
    Width = 477
    Height = 21
    TabOrder = 10
  end
  object OpenDialog1: TOpenDialog
    Left = 168
    Top = 432
  end
  object SaveDialog1: TSaveDialog
    Left = 312
    Top = 432
  end
  object MainMenu1: TMainMenu
    Left = 344
    Top = 120
    object A1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N1: TMenuItem
        Caption = #1063#1090#1077#1085#1080#1077' '#1080#1079' '#1092#1072#1081#1083#1072
        OnClick = Button4Click
      end
      object N2: TMenuItem
        Caption = #1047#1072#1087#1080#1089#1100' '#1074' '#1092#1072#1081#1083
        OnClick = Button5Click
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object N4: TMenuItem
        Caption = #1042#1099#1093#1086#1076
        OnClick = N4Click
      end
    end
  end
end
