�
 TCONFIGFORM 0�  TPF0TConfigForm
ConfigFormLefthTop� BorderStylebsDialogCaptionOptions for ScreenWorksClientHeightClientWidth~Color	clBtnFaceFont.CharsetDEFAULT_CHARSET
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style OldCreateOrderPositionpoDefaultPosOnlyOnShowFormShowPixelsPerInch`
TextHeight TButtonbtnOkLeft� Top�WidthKHeightCaptionOKDefault	ModalResultTabOrder   TButton	btnCancelLeft(Top�WidthKHeightCancel	CaptionCancelModalResultTabOrder  TPageControlPageControlLeftTopWidthmHeight�
ActivePage	tsOptionsTabOrder 	TTabSheet	tsGeneralCaptionGeneral TLabel	tHotsInfoLeftTopWidthHeight+	AlignmenttaCenterAutoSizeCaption�The system agent must be active in order for you to display the screen saver immediately by moving the mouse pointer to a corner on the screen.WordWrap	  TScrCheckBoxcbMuteLeftTopPWidth}HeightTabStop	
ControllercbMute.Controller1CaptionM&uteState	cbCheckedTabOrder  TScrCheckBoxBooleanControllerController1ValueMainForm.Mute   TScrCheckBoxcbDisableActiveConfigLeft� TopPWidth� HeightTabStop	
Controller!cbDisableActiveConfig.Controller1Caption&Disable active-configurationState	cbCheckedTabOrder TScrCheckBoxBooleanControllerController1ValueMainForm.DisableActiveConfig   TScrMonitor
monCornersLeftPTop@Width� Height� 
InsideLeft	InsideTopInsideRightInsideBottom(InsideColor	clBtnFacePicture.Data
   TBitmap     TScrCorners
corCornersLeft Top Width� Heightq
ControllercorCorners.Controller1Picture.Data
   TBitmap    AlignalClientTabOrder  TScrCornersStringControllerController1ValueMainForm.Corners    	TGroupBoxtDismissOptionsLeftTop� WidthAHeightNCaption'Options for dismissing the screen saverTabOrder TLabeltMouseSensitivityLeftTopWidthPHeightAutoSizeCaption&Mouse sensitivity  TLabeltPasswordDelay1LeftTop8WidthHeightAutoSizeCaption&Wait  TLabeltPasswordDelay2Left� Top8Width� HeightAutoSizeCaptionbefore requiring a password  TScrEditePasswordDelayLeft(Top0Width)HeightTabStop	
ControllerePasswordDelay.Controller1ParentColorTabOrder  TScrEditIntegerControllerController1ValueMainForm.PasswordDelay   
TScrUpDownudPasswordDelayLeftQTop0WidthHeight	AssociateePasswordDelayTabOrder  TScrComboBoxcbPasswordDelayLefthTop0WidthAHeightTabStop	
ControllercbPasswordDelay.Controller1
ItemHeightItems.Stringssecondsminutes ParentColorTabOrder TScrListBoxIntegerControllerController1ValueMainForm.PasswordDelay   TScrComboBoxcbMouseSensitivityLefthTopWidth� HeightTabStop	
ControllercbMouseSensitivity.Controller1
ItemHeightItems.StringsHighNormalLowIgnore mouse movement ParentColorTabOrder TScrListBoxIndexControllerController1ValueMainForm.MouseThreshold     	TTabSheet	tsOptionsCaptionOptions
ImageIndex TLabeltBlobCaptionLeft`TopWidth� Height	AlignmenttaCenterAutoSize  TLabelLabel1LeftTop� WidthJHeightCaptionDirectory name:  TLabelLabel2LeftTopPWidth_HeightCaptionFile change interval:  TLabelLabel3LeftTop�WidthHeightCaption1 min  TLabelLabel4Left� Top�Width$HeightCaption60 mins  TLabelLabel5Left� TopPWidthQHeightCaptionFlyaround speed:  TLabelLabel6Left� Top�WidthHeightCaptionslow  TLabelLabel7LeftMTop�WidthHeightCaptionfast  TScrMonitor
ScrMonitorLeftXTopWidth� Height� 
InsideLeft	InsideTopInsideRightInsideBottom(InsideColor	clBtnFacePicture.Data
   TBitmap     TScrPreview
ScrPreviewLeft Top Width� HeightqAlignalClient   TScrEditedSW_DirNameLeftTop� Width,HeightTabStop	
ControlleredSW_DirName.Controller1ParentColorReadOnly	TabOrder TScrEditStringControllerController1ValueMainForm.SW_DirName   TButton	btnBrowseLeft� Top WidthKHeightCaption
&Browse...TabOrderOnClickbtnBrowseClick  TScrCheckBox	chkSubDirLeftTop(Width� HeightTabStop	
ControllerchkSubDir.Controller1Captionsearch sub-directoriesState	cbCheckedTabOrder TScrCheckBoxBooleanControllerController1ValueMainForm.SubDir   TScrTrackBartbFileChangeLeftTophWidth� HeightMax<Min	FrequencyPositionTabOrderTabStop	ThumbLength
ControllertbFileChange.Controller1 TScrTrackBarIntegerControllerController1ValueMainForm.FileChange   TScrTrackBartbTumbleSpeedLeft� TophWidth� HeightMaxdMin	FrequencyPositionTabOrderTabStop	ThumbLength
ControllertbTumbleSpeed.Controller1 TScrTrackBarIntegerControllerController1ValueMainForm.TumbleSpeed     TScrTextHotServicesControllerconHotsInfoViewer	tHotsInfoLeft(Top�  "TScrEditIntegerMagnitudeControllerconPasswordDelayMagnitudeLeftHTop�  TScrListBoxTwoUnitsControllerconPasswordDelayUnitsMagnitudeControllerconPasswordDelayMagnitudeUnits1secondsUnits10minutesUnits10Value<LefthTop�  TBrowseFoldersDialogBrowseFoldersDialogRoot	bfrDrivesOptionsbffReturnOnlyDirs Left� Top    