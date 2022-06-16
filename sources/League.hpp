#include <array>
using std::array;
class League
{

    private:
    //refernce for team names is taken from here: 
    //https://www.remote.tools/remote-work/good-cool-funny-best-powerful-unique-team-names#good
    //
    ////these 2 arrays indicate which team is taken and which is not     
    //
      const static inline array<std::string,20>teams={"the avengers", "mvp's", "best in the game", "the kings", "hustlers", "iconic",
                                                "bulletproof", "the justice league", "ligtning legends", "mister maniacs", "born to win",
                                                "ninja bros", "the elite team", "dominatrix", "big shots", "unstoppable force","crew x", 
                                                "rule breakers", "the squad", "united army"};

      static inline array <std::size_t,20>teams_captured{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

};