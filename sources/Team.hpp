#include <iostream>
class Team
{   
    public:
    Team(const std::string& team_name, double skill_level);

    private:
    std::string name{};
    double skill_level{};                             
};  