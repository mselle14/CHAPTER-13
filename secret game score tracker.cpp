//Marshon Sellers
#include <iostream>
#include <string>
using namespace std;

class Game
{
private:
    int game_score;

public:
    void setScore(int score_value)
    {
        game_score = score_value;
    }

    int getScore()
    {
        return game_score;
    }
};

class Player : public Game
{
private:
    string player_name;

public:
    void setPlayerName(string name_value)
    {
        player_name = name_value;
    }

    void displayResult()
    {
        cout << "----- Game Result -----" << endl;
        cout << "Player: " << player_name << endl;
        cout << "Score: " << getScore() << endl;

        if (getScore() >= 80)
        {
            cout << "Level: Winner Zone" << endl;
        }
        else
        {
            cout << "Level: Keep Practicing" << endl;
        }
    }
};

int main()
{
    Player player_object;
    string input_name;
    int input_score;

    cout << "Enter player name: ";
    getline(cin, input_name);

    cout << "Enter score: ";
    cin >> input_score;

    player_object.setPlayerName(input_name);
    player_object.setScore(input_score);

    player_object.displayResult();

    return 0;
}
