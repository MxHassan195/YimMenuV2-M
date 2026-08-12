#include "KortzCenterHeist.hpp"

namespace YimMenu::Submenus
{
	std::shared_ptr<TabItem> RenderKortzCenterHeistMenu()
	{
		auto tab   = std::make_shared<TabItem>("Kortz Center Heist");

		auto target    = std::make_shared<Group>("Primary Target", 1);
		auto intel  = std::make_shared<CollapsingHeaderItem>("Intel");
		auto intelGroup   = std::make_shared<Group>("", 2);
		
		
		auto vehicles  = std::make_shared<CollapsingHeaderItem>("Vehicles");
		auto vehiclesGroup   = std::make_shared<Group>("", 2);
		auto equipment = std::make_shared<CollapsingHeaderItem>("Equipment");
		auto equipmentGroup   = std::make_shared<Group>("", 3);
		auto optinalPrep     = std::make_shared<CollapsingHeaderItem>("Optinal Prep Work");
		auto optinalPrepGroup   = std::make_shared<Group>("", 4);

		auto action    = std::make_shared<Group>("", 1);

		auto inHeist = std::make_shared<Group>("Misc", 3);

		target->AddItem(std::make_shared<ListCommandItem>("kortzcenterheistprimarytarget"_J));

		intelGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistscopeout"_J));
		intelGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistscopesecondary"_J));
		intelGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistscopepoi"_J));
		intelGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistweakguards"_J));
		intelGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheisthardmode"_J));
		intel->AddItem(intelGroup);

		
		vehiclesGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistcaracara"_J));
		vehiclesGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistannihilator"_J));
		vehiclesGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistmanchez"_J));
		vehiclesGroup->AddItem(std::make_shared<ListCommandItem>("kortzcenterheistmanchezcolor"_J));
		vehicles->AddItem(vehiclesGroup);
		
		equipmentGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheisthazmat"_J));
		equipmentGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistalphamail"_J));
		equipmentGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheiststaffkeycard"_J));
		equipmentGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheisttacticalequip"_J));
		equipmentGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistunmarkedweapons"_J));
		equipmentGroup->AddItem(std::make_shared<ListCommandItem>("kortzcenterheistloadouttype"_J));
		equipmentGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistaccesscode"_J));
		equipmentGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheisthackingdevice"_J));
		equipmentGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistmanholekey"_J));

		equipment->AddItem(equipmentGroup);
		
		optinalPrepGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistguardroutes"_J));
		optinalPrepGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistglasscutter"_J));
		optinalPrepGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistpowerdrills"_J));
		optinalPrepGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistempcharges"_J));
		optinalPrepGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistprepemp"_J));
		optinalPrepGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistguardroutesprep"_J));
		optinalPrepGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistglasscutterprep"_J));
		optinalPrepGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistpowerdrillsprep"_J));
		optinalPrepGroup->AddItem(std::make_shared<BoolCommandItem>("kortzcenterheistguardshipments"_J));

		optinalPrep->AddItem(optinalPrepGroup);

		action->AddItem(std::make_shared<CommandItem>("kortzcenterheistsetup"_J));


		inHeist->AddItem(std::make_shared<CommandItem>("kortzcenterheistskipfingerprint"_J));
		inHeist->AddItem(std::make_shared<CommandItem>("kortzcenterheistskipsignalnodes"_J));
		inHeist->AddItem(std::make_shared<CommandItem>("kortzcenterheistskipdatacrack"_J));
		inHeist->AddItem(std::make_shared<CommandItem>("kortzcenterheistenteraccesscode"_J));
		inHeist->AddItem(std::make_shared<CommandItem>("kortzcenterheistcutglass"_J));
		inHeist->AddItem(std::make_shared<CommandItem>("kortzcenterheistdisablelaser"_J));
		inHeist->AddItem(std::make_shared<CommandItem>("kortzcenterheisttakeprimary"_J));
		inHeist->AddItem(std::make_shared<CommandItem>("kortzcenterheisttakesecondary"_J));



		tab->AddItem(target);
		tab->AddItem(intel);
		tab->AddItem(equipment);
		tab->AddItem(vehicles);
		tab->AddItem(optinalPrep);
		tab->AddItem(action);
		tab->AddItem(inHeist);

		return tab;
	}
}