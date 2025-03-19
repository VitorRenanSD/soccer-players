#include <stdio.h>
#include <string.h>

struct SoccerPlayer {
    char name[50];
    int matches;
    int goals;
    int assists;
};

void setName(struct SoccerPlayer* player, const char* name) {
    strncpy(player->name, name, sizeof(player->name) - 1);
    player->name[sizeof(player->name) - 1] = '\0';
}

void setMatches(struct SoccerPlayer* player, int matches) {
    player->matches = matches;
}

void setGoals(struct SoccerPlayer* player, int goals) {
    player->goals = goals;
}

void setAssists(struct SoccerPlayer* player, int assists) {
    player->assists = assists;
}
