#pragma once

enum SubMenus 
{
	NOMENU,
	MainMenu,
	SelfOptionsMenu,
	SettingsMenu,
	GUIColorsMenu,
	ThemeLoaderMenu,
	ThemeFilesMenu,
	GUITitleBackgroundColorMenu,
	settingsheaderbackground,
	settingssmalltitlebackground,
	settingsscroller,
	settingsmenubackground,
	settingsoptiontext,
	settingsbottomline,
	settingsmenubottombackground,
	PlayerListMenu,
	SelectedPlayerMenu,
	teleportmenu,
	weaponmenu,
	VehicleCustomizerColorMenu,
	miscmenu,
	worldmenu,
	vehiclemenu,
	AnimationsAndScenariosMenu,
	nearbyvehicles_menu, 
	nearbypeds_menu,
	iplloader,
	iplteleports,
	weathermenu,
	VehicleSpawnSettings,
	AllPlayersMenu,
	ModelChangerMenu,
	vehiclespawnermenu,
	Super,
	Sports,
	smugglersrun,
	SportClassic,
	Offroad,
	Sedans,
	Coupes,
	Muscle,
	Boats,
	Commercial,
	Compacts,
	Cycles,
	Emergency,
	Helicopters,
	Industrial,
	Military,
	Motorcycles,
	Planes,
	Service,
	SUV,
	Trailer,
	Trains,
	vehicle_lsc_neon_options,
	vehicle_lsc_color_options,
	Utility,
	Vans,
	SSASSSDLC, 
	doomsdayheistdlc,
	gunrunningdlc, 
	CunningStuntsDLCMenu,
	afterhoursdlc, 
	arenawardlc, 
	casinodlc,
	diamondcasinoheist,
	SummerSpecialDLCMenu,
	OnlineOptionsMenu,
	timemenu,
	CommonTeleportLocations,
	attachoptions,
	SelectedPlayerTrollMenu,
	SelectedPlayerFriendlyMenu,
	protections,
	ESPMenu, 
	clothingmenu, 
	outfitsmenu,
	componentschangermenu,
	playermoneymenu, 
	player_remoteoptions,
	sessionweathermenu,
	sessiontimemenu,
	SessionChatMenu,
	vehicleweaponsmenu,
	allplayers_trolloptionsmenu,
	statsoptionsmenu, 
	vehicledooroptionsmenu,
	vehiclemultipliersmenus,
	custombulletsmenu, 
	vehiclegunmenu,
	aimbotsettingsmenu,
	rankmenu,
	miscstatsmenu, 
	player_teleportmenu,
	sessionoptionsmenu,
	hudmenu,
	guisettings, 
	CheatSettingsMenu,
	unlocksmenu,
	reportsmenu_stats, 
	allplayers_weaponoptionsmenu,
	headeroptionsmenu,
	VehicleCustomizerMenu,
	DLCVehiclesMenu,
	SUBMENUS_END //Used to get total size of SubMenus (SUBMENUS_END - 2) 
};
extern enum SubMenus;

typedef struct VECTOR2 
{
	float x, y;
};
typedef struct VECTOR2_2 
{
	float w, h;
};
typedef struct RGBAF 
{
	int r, g, b, a, f;
};
typedef struct RGBA 
{
	int r, g, b, a;
};
typedef struct RGB 
{
	int r, g, b;
};

enum SubMenuOptionTypes
{
	SUBMENU_OPTION_TYPE_MENU = 0,
	SUBMENU_OPTION_TYPE_OPTION,
	SUBMENU_OPTION_TYPE_TOGGLE,
	SUBMENU_OPTION_TYPE_INT,
	SUBMENU_OPTION_TYPE_FLOAT,
	SUBMENU_OPTION_TYPE_FLOAT_VECTOR
};


struct SubMenu_AllOptionsStruct
{
	int ID;
	SubMenus SubMenuName;
	SubMenuOptionTypes OptionType;
	std::string OptionName;
	std::string OptionDescription;
	bool DisableOptionControl;
};
struct SubMenu_MenuOptionsStruct
{
	int ID;
	SubMenus NewSubmenu;
};
struct SubMenu_ToggleOptionsStruct
{
	int ID;
	bool& ToggleBoolean;
	bool IsSavable;
};
struct SubMenu_IntOptionsStruct
{
	int ID;
	int& Integer;
	int IntegerMin;
	int IntegerMax;
	int IntegerStep;
	bool IsSavable;
};
struct SubMenu_FloatOptionsStruct
{
	int ID;
	bool IsSavable;
};
struct SubMenu_FloatVectorOptionsStruct
{
	int ID;
	bool IsSavable;
};