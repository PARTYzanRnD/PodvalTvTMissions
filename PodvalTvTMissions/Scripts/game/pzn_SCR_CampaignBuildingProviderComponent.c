modded class SCR_CampaignBuildingProviderComponent : SCR_MilitaryBaseLogicComponent
{
	override bool IsEntityFactionSame(notnull IEntity ent1, notnull IEntity ent2)
	{
		if (m_bAnyFactionCanUse)
			return true;
		Faction ent1Faction = GetEntityFaction(ent1);
		if (!ent1Faction)
			return false;

		Faction ent2Faction = GetEntityFaction(ent2);
		if (!ent2Faction)
			return false;

		return ent1Faction == ent2Faction;
	}
}