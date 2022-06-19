#include <array>
#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::array;
class League
{

    public:
    League()
    {
        cout<<"please choose a randomizer from 1-3 for (this mechanism will detrmine the groups)\n";
        cin>>option;
        if(option<1||option>3)
        {
            throw "the number you chose is not in the range, please re run the program and enter correct parametrs .";
        }
        switch(option)
        {
            case 1:
            std::copy_n(teams.begin(),20,std::back_inserter(chosen_teams));
            break;
            case 2:
            
        }
    }

    League(const League& league)=delete;

    private:
    //refernce for team names is taken from here: 
    //https://www.remote.tools/remote-work/good-cool-funny-best-powerful-unique-team-names#good
    //
    ////these 2 arrays indicate which team is taken and which is not     
    //

      //this is the dataset used to choose from 20 teams following 3 methods:
      //1.choose 20 groups ==>will simply choose from index 0 to 19
      //2.choose 20 random groups from the data set
      //3.10 groups from index 0 to 9 and the rest will be randomized
      const static inline array<std::string,40>teams={"the avengers", "mvp's", "best in the game", "the kings", "hustlers", "iconic",
                                                "bulletproof", "the justice league", "ligtning legends", "mister maniacs", "born to win",
                                                "ninja bros", "the elite team", "dominatrix", "big shots", "unstoppable force","crew x", 
                                                "rule breakers", "the squad", "united army", "the ruin", "soul crushers", "gobstoppers","renegades",
                                                 "man of stealth", "samurais", "rumbled rockers", "game of loans", "block and save", "chafting the dreams",
                                                 "eye for an eye", "win or booze", "i'm the king of the pitch", "there's no place like hop", "baby one more time",
                                                 "no more drop shots", "point theft is no joke", "no love", "team power" ,"terminators"};

      static inline array <std::size_t,20>teams_captured{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
      static inline array<std::size_t,20>chosen_teams{};

      int option{};

};