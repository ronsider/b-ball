#include "League.hpp"
#include "Team.hpp"
#include "Game.hpp"
int main()
{
	League l1;
	l1.initialize_teams();
	l1.initialize_games();
	l1.publish_winners();

}