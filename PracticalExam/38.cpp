// Design a SoccerPlayer class that includes three integer fields: a player’s jersey number, number
// of goals, number of assists and necessary constructors to initialize the data members. Overload the
// > operator (greater than). One player is considered greater than another if the sum of goals pls
// assists is greater than that of the others. Create and array of 11 soccer players, then use the overload
// > operator to find the player who has the greatest total of goals plus assists.

#include <iostream>
using namespace std;

class SoccerPlayer {
    int jerseyNumber, goals, assists;
public:
    SoccerPlayer() {
        jerseyNumber = 0;
        goals = 0;
        assists = 0;
    }
    SoccerPlayer(int a, int b, int c) {
        jerseyNumber = a;
        goals = b;
        assists = c;
    }
    bool operator > (SoccerPlayer obj) {
        return (goals + assists) > (obj.goals + obj.assists);
    }
    void display() {
        cout << "Jersey Number: " << jerseyNumber << " Goals: " << goals << " Assists: " << assists << endl;
    }
};

int main() {
    SoccerPlayer players[11] = {
        SoccerPlayer(1, 10, 5),
        SoccerPlayer(2, 20, 10),
        SoccerPlayer(3, 30, 15),
        SoccerPlayer(4, 40, 20),
        SoccerPlayer(5, 50, 25),
        SoccerPlayer(6, 60, 30),
        SoccerPlayer(7, 70, 35),
        SoccerPlayer(8, 80, 40),
        SoccerPlayer(9, 90, 45),
        SoccerPlayer(10, 100, 50),
        SoccerPlayer(11, 110, 55)
    };
    SoccerPlayer max = players[0];
    for (int i = 1; i < 11; i++) {
        if (players[i] > max) {
            max = players[i];
        }
    }
    max.display();
    return 0;
}