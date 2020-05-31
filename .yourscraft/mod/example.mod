@S
#Start
#######################################################################################
# CCLDP1D-2001(HSEO)                                                                  #
# CC:C++ CONSOLE                                                                      #
# LDP:Low Dimension Preview                                                           #
# H:Header File                                                                       #
# S:Source Code , E:Executable File , O:Other Files , *:Not Limited                   #
#######################################################################################
$VERSION:CCLDP1D-2001(*)
$AUTHOR:zenithwzj
[content]
colorDB:Def#Default
colorDF:Def
colorHB:Def
colorHF:Def
xMin:0
xMax:10
OTHERSET:{Def}#All:Default
[/content]
@E
#End

@S
$VERSION:CCLDP2D-2005-0.1.4(*)
$NAME:"Example Mod"
$TYPE:Def
$AUTHOR:zenithwzj
[content]
Other:Def#ccldp2d-* Others Settings
[/content]
@E

@S
$VERSION:CCLDP2D-2005-0.1.4(*)
$NAME:"Example Mod"
$TYPE:DEF
$AUTHOR:zenithwzj
[content]
FUNCTION:".yourscraft\assets\Nohash\Functions\Example.funcs"
Sets:".yourscraft\assers\Nohash\Sets\Example.sets
[/content]
@E

@S
$VERSION:CCLDP2D-2005-0.2.5$Forge2.4,$(*)#MOD LOADER1 NAME:FORGE VERSION:2.4
$NAME:"Example Mod"
$TYPE:DEF
$FORMAT:YCMOD-574a#INI+FUNCS FORMAT
$AUTHOR:"zenithwzj"
$AUTHOREMAIL:zenithwzj@zhre.com
$USERLOCK:"ZHRE-Studio"#JUST the account named "ZHRE-Studio" can use this mod
$USERLOCKHASHCOOKIE:d3f56e#JUST the account which's hash(cookie) is d3f56e can use the mod
[content]
FUNCTION:".yourscraft\assets\Nohash\Functions\Example.funcs"
Sets:".yourscraft\assers\Nohash\Sets\Example.sets
[/content]
@E

@S
$VERSION:CCLDP2D-2005-0.2.5$Forge:2.6.113,RSLoad:0.12,$(*)
$NAME:"Example Mod"
$AUTHOR:"zenithwzj"
$AUTHOREMAIL:zenithwzj@zhre.com
$USERLOCK:"ZHRE-Studio"
$USERLOCKHASHCOOKIE:d3f56e
<MOD FORMAT=YCMOD-574a TYPE=DEF>
[content]
FUNCTION:".yourscraft\assets\Nohash\Functions\Example.funcs"
Sets:".yourscraft\assers\Nohash\Sets\Example.sets
[/content]
</MOD>
@E
