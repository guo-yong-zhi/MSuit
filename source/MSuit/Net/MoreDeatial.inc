[IPAddressMeasure]
Measure=Plugin
Plugin=SysInfo
SysInfoType=IP_ADDRESS
Group=MoreDetailsMeasure
SysInfoData=1
Substitute="":"N/A"
UpdateDivider=-1

[SSIDMeasure]
Measure=Plugin
Plugin=WifiStatus
WiFiInfoType=SSID
Group=MoreDetailsMeasure
;WiFiIntfID=0
Substitute="-1":"Wifi Not Connected"
UpdateDivider=-1

[WifiQualityMeasure]
Measure=Plugin
Plugin=WifiStatus
WiFiInfoType=Quality
Group=MoreDetailsMeasure
;Substitute=" ":""
UpdateDivider=-1

;一个计时器用于延时
[Delay]
measure=calc
formula=Delay+1
Disabled=1
IfEqualValue=6
IfEqualAction=[!UpdateMeasureGroup MoreDetailsMeasure][!UpdateMeterGroup "MoreDetailsMeter"][!ShowMeterGroup "MoreDetailsMeter"][!Redraw]

[SSIDMeter]
Meter=String
MeasureName=SSIDMeasure
MeasureName2=WifiQualityMeasure
Group=MoreDetailsMeter
X=(145+140)
Y=20
StringStyle=BOLD
FontColor=#FountColorNorm#
FontFace=#myFountFace#
FontSize=#FontSizeMajor#
AntiAlias=1
Text=%1: %2% 
Hidden=1
UpdateDivider=-1

[IPAddressMeter]
Meter=String
MeasureName=IPAddressMeasure
Group=MoreDetailsMeter
X=0r
Y=45
StringStyle=BOLD
FontColor=#FountColorNorm#
FontFace=#myFountFace#
FontSize=#FontSizeMinor#
AntiAlias=1
Hidden=1
UpdateDivider=-1

[DivLineMeter]
Meter=Image
Group=MoreDetailsMeter
X=-3r
Y=-22r
W=3
H=45
SolidColor=#ImageColorNorm#
Hidden=1
UpdateDivider=-1
