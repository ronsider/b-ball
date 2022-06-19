#include "Team.hpp"
#pragma once

class Game
{
public:

    Game(const Team& out_team, const Team& home_team) :out_team{ out_team }, home_team{ home_team }{}

    std::string the_winner()const;
    

private:
    Team out_team;
    Team home_team;
    std::string winner{};
};
