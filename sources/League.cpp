#include "League.hpp"

//std::vector<std::string> League::teams=

 League::League()
 {
     cout << "please choose a randomizer from 1-3 for (this mechanism will detrmine the groups)\n";
     cin >> option;
     if (option < 1 || option>3)
     {
         throw "the number you chose is not in the range, please re run the program and enter correct parametrs .";
     }
     std::random_device rd;
     std::mt19937 g(rd());
     switch (option)
     {
     case 1:
         std::copy_n(teams.begin(), 20, std::back_inserter(chosen_teams));//
         break;
     case 2:

         std::shuffle(teams.begin(), teams.end(), g);
         std::copy_n(teams.begin(), 20, std::back_inserter(chosen_teams));
         break;
     case 3:

         std::copy_n(teams.begin(), 10, std::back_inserter(chosen_teams));
         std::shuffle(teams.begin() + 11, teams.end(), g);
         std::copy_n(teams.begin() + 11, 10, std::back_inserter(chosen_teams));
         break;

     }
 }


