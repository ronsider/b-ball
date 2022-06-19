#include "Game.hpp"

std::string Game::the_winner()const
{
    if (out_team.skill_le() > home_team.skill_le())
        return out_team.team_name();
    return home_team.team_name();
}
