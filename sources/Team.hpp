#include <iostream>
#pragma once
class Team
{
public:
    Team() = default;//avoid UB
    Team(const Team& team);

    Team(std::string& team_name, double skill_level);
    double skill_le()const;
    std::string team_name()const;
private:
    std::string name{};
    double skill_level{};
};
