// Game Project 1
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

string welcomeMessage = "Welcome to Dodger. Please enter your character name: ";
string rules = "You are going to shoot either barrel 1, 2, or 3 to damage the enemy. If either you or the bot is shot twice, the person shot twice is dead.";
string name = "", reply = "";
int cpuPos, playerPos, barrel, num;
int cpuLife = 2, playerLife = 2;
int count = 0;
int warningReadyCheck = 3, playerCheck = 3;

cout << welcomeMessage << endl;;
    cin >> name;
cout << "Hello " << name << ". " << "Please choose a barrel to hide behind (1, 2, 3).\n";
    cin >> playerPos;

    if (playerPos == 1 || playerPos == 2 || playerPos == 3) {
cout << "The bot will now choose a barrel to hide behind. Please wait.\n" << ".\n" << ".\n" << ".\n";

    srand(time(NULL));
    cpuPos = rand() % 3 + 1;

cout << "Thank you for waiting. The bot has chosen a barrel to hide behind. \n";
cout << "HERE ARE THE RULES FOR PLAYING: \n" << rules << endl;

cout << "Are you ready? (yes/no, y/n)" << endl;
cin >> reply;
    if (reply == "yes" || reply == "y"){
        cout << "The game will start in \n" << "3! \n" << "2! \n" << "1! \n" << "NOW!" << endl;
    } else if (reply == "no" || reply == "n") {
        cout << "Are you ready now? (y/n) \n";
        cin >> reply;
        if (reply == "yes" || reply == "y") {
            cout << "Game has started! \n";
        } else if (reply == "no" || reply == "n"){
            cout << "Then don't play if you aren't ready. Goodbye. \n";
        }
    }

    while (((reply != "y") || (reply != "n")) && count != 0){
        cout << "Invalid response. Please enter yes or no. You still have " << warningReadyCheck << " chances. \n";
        cin >> reply;
        warningReadyCheck --;
    } if (warningReadyCheck == 0) {
        cout << "You obviously don't want to play this game. Have a good day.";
    }
    
    if (reply == "yes" || reply == "y") {
    cout << "Please choose a barrel to shoot (1, 2, 3). \n";
    cin >> barrel;
    cout << endl;

    while ((barrel == 1 || barrel == 2 || barrel == 3) && cpuLife != 0){
        if (barrel == cpuPos) {
            cout << "Nice! The bot has been shot! \n";
            cpuLife --;
            cout << "The bot has " << cpuLife << " heart(s) left. \n";
        } else if (barrel != cpuPos) {
            cout << "Missed. Please try again after the bot's turn. " << "The bot still has " << cpuLife << " heart(s) left. \n";
        }

    cout << "It is now the bots turn. Please wait. \n" << ".\n" << ".\n" << ".\n" << endl;
    num = rand() % 3 + 1;
        if (num == playerPos) {
            cout << "HIT! The bot has shot you! ";
            playerLife --;
            cout << "You have " << playerLife << " heart(s) left.";
        } else if (num != playerPos){
            cout << "The bot has missed. You still have " << playerLife << " heart(s) left.";
        }

    while (cpuLife > 0 || playerLife > 0) {
        cout << " Please choose a barrel to shoot. \n";
        cin >> barrel;
            if (barrel == cpuPos) {
                cout << "Nice! The bot has been shot! \n";
                cpuLife --;
                cout << "The bot has " << cpuLife << " heart(s) left. \n";
            } else if (barrel != cpuPos) {
                cout << "Missed. Please try again after the bot's turn. " << "The bot still has " << cpuLife << " heart(s) left. \n";
            } if (cpuLife == 0) {
                cout << "Congratulations! You've won! ";
            break;
        }

    cout << "It is now the bots turn. Please wait. \n" << ".\n" << ".\n" << ".\n" << endl;
    num = rand() % 3 + 1;
        if (num == playerPos) {
            cout << "HIT! The bot has shot you! \n";
            playerLife --;
            cout << "You have " << playerLife << " heart(s) left. ";
        } else if (num != playerPos) {
            cout << "The bot has missed. You still have " << playerLife << " heart(s) left.";
        }
        if (playerLife == 0) {
            cout << "You've lost. Better luck next time!";
        return 0;
            }
    }

    } while ((barrel != 1 || barrel != 2 || barrel != 3) && cpuLife > 0) {
            cout << "That is not a correct target. Please try again. ";
            cin >> barrel;
        }
    }
    
    } else if (playerPos != 1 || playerPos != 2 || playerPos != 3) {
        cout << "The game will now exit since you can't follow the rules. \n";
        return 0;
    }
}