#include "Team.hpp"

class Game
{
    public:

    Game(const Team& out_team,const Team& home_team):out_team{out_team},home_team{home_team}{}

    private:
    Team out_team;
    Team home_team;
    std::string winner{};
};