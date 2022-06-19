#include <array>
#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
#include "Team.hpp"
#include "Game.hpp"
#include <chrono>
#pragma once
using std::cin;
using std::cout;
using std::array;
using std::vector;
class League
{

public:
    League();
    

    League(const League& league) = delete;

    void publish_winners()
    {
      //  int t = 0;
        for (const auto& i : league_games)
        {
           /* if (t % 3 == 0)
            {
                cout << '\n';
            }*/
            cout <<"the winner is:*****"<< i.the_winner() <<"*****";
            cout << '\n';
            //t++;
        }
    }

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
       vector<std::string>teams{ "the avengers", "mvp's", "best in the game", "the kings", "hustlers", "iconic",
"bulletproof", "the justice league", "ligtning legends", "mister maniacs", "born to win",
"ninja bros", "the elite team", "dominatrix", "big shots", "unstoppable force", "crew x",
"rule breakers", "the squad", "united army", "the ruin", "soul crushers", "gobstoppers", "renegades",
"man of stealth", "samurais", "rumbled rockers", "game of loans", "block and save", "chafting the dreams",
"eye for an eye", "win or booze", "i'm the king of the pitch", "there's no place like hop", "baby one more time",
"no more drop shots", "point theft is no joke", "no love", "team power", "terminators" };
     vector<std::string>chosen_teams;

    ///////
    //initialzing the teams in league
    ///////


    vector<Team>teams_for_league;
    
    double random_number()
    {
        std::mt19937_64 rng;
        // initialize the random number generator with time-dependent seed
        uint64_t timeSeed =static_cast<u_int64_t> (std::chrono::high_resolution_clock::now().time_since_epoch().count());
        std::seed_seq ss{ uint32_t(timeSeed & 0xffffffff), uint32_t(timeSeed >> 32) };
        rng.seed(ss);
        // initialize a uniform distribution between 0 and 1
        std::uniform_real_distribution<double> unif(0, 1);
        // ready to generate random numbers
        double currentRandomNumber = unif(rng);
        return currentRandomNumber;
    }
public:

    void initialize_teams()
    {
        //teams have been initialzied
        
        for (auto& t : chosen_teams)
        {
            double temp = random_number();
            teams_for_league.emplace_back(t, temp);
            //teams_for_league.emplace_back()
        }
    }
private:
    //////
    ///////
    //////


    //initializng games in league:
    ////////////////
    vector<Game>league_games;//this describes the games in the season==> should be 19 games in total==> aka number of rotations
public: 
    void initialize_games()//later implement decleare winners
    {
         int _distance = teams_for_league.size() - 1;
        for (size_t i = 0; i < teams_for_league.size() - 1; i++)
        {
            auto it = teams_for_league.begin();
            while (_distance >= 1)
            {
                league_games.push_back({*it,*(it+_distance)});
                it++;
                _distance -= 2;
            }
            std::rotate(teams_for_league.rbegin(), teams_for_league.rbegin() + 1, teams_for_league.rend() - 1);
            _distance = teams_for_league.size() - 1;
              
        }

    }
    
    
    

    int option{};

};