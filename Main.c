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
  scanf("%d", &sp.name);

};
