[Variables]
_ThemeColor_=83,60,56
_ThemeFont_=GeosansLight

[Rainmeter]
Group=Msuit
;BackgroundMode=1
ContextTitle=设置主题色
ContextAction=[!CommandMeasure RainRGBRun "Run"]
MiddleMouseUpAction=[!CommandMeasure RainRGBRun "Run"]

[RainRGBRun]
Measure=Plugin
Plugin=RunCommand
Parameter=#@#Addons\RainRGB4.exe "VarName=_ThemeColor_" "FileName=#@#CommonConfig.inc" "RefreshConfig=''"
State=Hide
OutputType=ANSI
FinishAction=[!RefreshGroup Msuit]
