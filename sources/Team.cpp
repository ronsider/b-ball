#include "Team.hpp"

Team::Team(std::string& team_name, double skill_level):name{team_name},skill_level{skill_level}
{

}
double Team::skill_le() const
{
    return skill_level;
}

std::string Team::team_name() const
{
    return name;
}

Team::Team(const Team& team)
{
    name = team.name;
    skill_level = team.skill_level;
}
