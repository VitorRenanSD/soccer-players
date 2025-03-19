#include <stdio.h>

struct SoccerPlayer {
  char name[50];
  int matches;
  int goals;
  int assists;
};

int main() {
  struct SoccerPlayer sp;

  printf("Player name: ");
  scanf("%s", &sp.name);

  printf("Quantity of matches: ");
  scanf("%s", &sp.matches);

  printf("Quantity of goals: ");
  scanf("%s", &sp.goals);

  printf("Quantity of assists: ");
  scanf("%s", &sp.assists);

};