// BasketballChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <time.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

// add header file
// use templated function and recursion
// use pointers and refs
// change out while loops for do whiles
// overtime in case game is a tie


int answer;
double answer2;
int score1 = 0;
int score2 = 0;
bool isCorrect;



int StartMenu();
void PlayGame();
int PlayerOptionOff();
int PlayerOptionDef();
void FirstOffensivePosession();
void SecondOffensivePosession();
void ThirdOffensivePosession();
void FirstDefensivePosession();
void SecondDefensivePosession();
void ThirdDefensivePosession();
void DisplayScoringVisual();
void EndGame();


int main()
{
    srand((unsigned int)time(0));

    int selection = StartMenu();

    switch (selection)
    {
        case 1:
        {
            PlayGame();
            break;
        }
        case 2:
        {
            cout << "Goodbye!";
            break;
        }
        default:
        {
            cout << "Invalid Input";
            break;
        }
    }
}

int StartMenu()
{
    int selection;
    cout << "Welcome to the basketball game." << endl;
    cout << "1) Play" << endl;
    cout << "2) Quit" << endl;
    cin >> selection;

    while (selection != 1 && selection != 2)
    {
        system("cls");
        cout << "Please try again." << endl;
        cin >> selection;
    }
    return selection;
}

void PlayGame()
{
    
    FirstOffensivePosession();

    FirstDefensivePosession();

    SecondOffensivePosession();

    SecondDefensivePosession();

    ThirdOffensivePosession();

    ThirdDefensivePosession();

    EndGame();
        
}

int PlayerOptionOff()
{
    int selection;
    cout << "What would you like to do?" << endl;
    cout << "1) 2 point attempt" << endl;
    cout << "2) 3 point attempt" << endl;
    cin >> selection;
    while (selection != 1 && selection != 2)
    {
        cout << "Please try again: ";
        cin >> selection;
    }
    return selection;
}

int PlayerOptionDef()
{
    int selection;
    cout << "What would you like to do?" << endl;
    cout << "1) Steal" << endl;
    cout << "2) Block Shot" << endl;
    cin >> selection;
    while (selection != 1 && selection != 2)
    {
        cout << "Please try again: ";
        cin >> selection;
    }
    return selection;
}

void FirstOffensivePosession()
{
    // game begins with the option of 2 or 3 point shot and simple math
    system("cls");
    cout << "The game begins and you are on offense. You can either shoot a 2 point shot with a 60% of making it or shoot a 3 point shot with a 40% of making it." << endl;
    int rand1 = 1 + rand() % 10;
    int prob1 = 1 + rand() % 5;
    int selection = PlayerOptionOff();

    switch (selection)
    {
        case 1:
        {
            cout << "You are " << rand1 << " feet away from the basket and your teammate passes you the ball.You step back 2 feet and take a shot." << endl;
            cout << "How far away from the goal in feet are you? " << endl;
            cin >> answer;
            
            for (int i = 1; i <= 4; i++)
            {                              
                if (i < 4)
                {
                    if (answer == rand1 + 2)
                    {
                        system("cls");
                        cout << "Correct! Calculating probability..." << endl;
                        sleep_for(nanoseconds(10));
                        sleep_until(system_clock::now() + seconds(2));
                        system("cls");
                        if (prob1 > 2)
                        {
                            score1++;
                            score1++;
                            DisplayScoringVisual();
                            cout << "You scored! You now have " << score1 << " points." << endl;
                        }
                        else
                        {
                            cout << "You missed! Your score remains at " << score1 << " points." << endl;
                        }
                        break;
                    }
                    else
                    {                        
                        cout << "Incorrect answer! Please try again: ";
                        cin >> answer;
                    }
                }
                else if (i == 4)
                {
                    system("cls");
                    cout << "Incorrect answer! Your score remains at " << score1 << " points." << endl;
                }
            }
        break;
        }
        case 2:
        {
            cout << "You are 10 feet away from the basket. You pass the ball directly behind you 13 feet to a teammate who takes a 3 point shot. How far is he from the basket?" << endl;
            cin >> answer;
            
            for (int i = 1; i <= 4; i++)
            {
                if (i < 4)
                {
                    if (answer == 23)
                    {
                        system("cls");
                        cout << "Correct! Calculating probability..." << endl;
                        sleep_for(nanoseconds(10));
                        sleep_until(system_clock::now() + seconds(2));
                        system("cls");
                        if (prob1 < 3)
                        {
                            score1 += 3;
                            DisplayScoringVisual();
                            cout << "You scored! You now have " << score1 << " points." << endl;
                        }
                        else
                        {
                            cout << "You missed the shot! Your score remains at " << score1 << " points." << endl;
                        }
                        break;
                    }
                    else
                    {                        
                        cout << "Incorrect answer! Please try again: ";
                        cin >> answer;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Incorrect answer! Your score remains at " << score1 << " points." << endl;
                }
                
            }
            
            break;
        }
    }
}

void FirstDefensivePosession()
{
    int prob1 = 1 + rand() % 5;
    cout << "You are now on defense. You can either try to steal the ball with a 40% chance of success or block the shot with a 60% chance of success. What would you like to do?" << endl;
    int selection = PlayerOptionDef();

    switch (selection)
    {
        case 1:
        {
            system("cls");
            cout << "You attempt to steal the ball..." << endl;
            sleep_for(nanoseconds(10));
            sleep_until(system_clock::now() + seconds(2));
            system("cls");
            if (prob1 > 3)
            {
                cout << "You steal the ball!! Your opponent score remains at " << score2 << " points." << endl;
            }
            else
            {
                score2 += 2;
                cout << "You fail the steal attempt and your opponent scores. Your opponent now has " << score2 << " points." << endl;
            }
        }
        break;
        case 2:
        {
            system("cls");
            cout << "You attempt to block the shot..." << endl;
            sleep_for(nanoseconds(10));
            sleep_until(system_clock::now() + seconds(2));
            system("cls");
            if (prob1 > 2)
            {
                cout << "You block the shot!! Your opponents score remains at " << score2 << " points." << endl;
            }
            else
            {
                score2 += 2;
                cout << "You fail to block the shot and your opponent scores. Your opponent now has " << score2 << " points." << endl;
            }
        }
        break;
    }
}

void SecondOffensivePosession()
{
    cout << "Second offensive posession: " << endl;
    int prob1 = 1 + rand() % 5;
    int selection = PlayerOptionOff();
    switch (selection)
    {
        case 1:
        {
            cout << "You are 4 feet away form the basket. You dribble 3 feet to the left and take a shot. How far away from the basket are you? ";
            cin >> answer;
            
            for (int i = 1; i <= 4; i++)
            {
                if (i < 4)
                {
                    if (answer == 5)
                    {
                        system("cls");
                        cout << "Correct! Calculating probability..." << endl;
                        sleep_for(nanoseconds(10));
                        sleep_until(system_clock::now() + seconds(2));
                        system("cls");
                        if (prob1 > 2)
                        {
                            score1++;
                            score1++;
                            cout << "You scored! You now have " << score1 << " points." << endl;
                        }
                        else
                        {
                            cout << "You missed! Your score remains at " << score1 << " points." << endl;
                        }
                        break;
                    }
                    else
                    {                        
                        cout << "Incorrect answer! Please try again: " << endl;
                        cin >> answer;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Incorrect answer! Your score remains at " << score1 << " points." << endl;
                }
            }
            
            break;
        }
        case 2:
        {
            cout << "You are 25 feet away from the basket. You dribble 5 feet to the left. How far are you from the basket?" << endl;
            cin >> answer2;
            
            for (int i = 1; i <= 4; i++)
            {
                if (i < 4)
                {
                    if (answer2 == 25.5)
                    {
                        system("cls");
                        cout << "Correct! Calculating probability..." << endl;
                        sleep_for(nanoseconds(10));
                        sleep_until(system_clock::now() + seconds(2));
                        system("cls");
                        if (prob1 < 3)
                        {
                            score1++;
                            score1++;
                            score1++;
                            cout << "You scored! You you now have " << score1 << " points." << endl;
                        }
                        else
                        {
                            cout << "You missed! Your score remains at " << score1 << " points." << endl;
                        }
                        break;
                    }
                    else
                    {                        
                        cout << "Incorrect answer! Please try again: " << endl;
                        cin >> answer2;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Incorrect answer! Your score remains at " << score1 << " points." << endl;
                }
            }
            
            break;
        }
    }
}

void SecondDefensivePosession()
{
    int prob1 = 1 + rand() % 5;
    cout << "You are back on defense for the second time." << endl;
    int selection = PlayerOptionDef();

    switch (selection)
    {
        case 1:
        {
            system("cls");
            cout << "You attempt to steal the ball..." << endl;
            sleep_for(nanoseconds(10));
            sleep_until(system_clock::now() + seconds(2));
            system("cls");
            if (prob1 > 3)
            {
                cout << "You steal the ball!! Your opponent score remains at " << score2 << " points." << endl;
            }
            else
            {
                score2 += 2;
                cout << "You fail the steal attempt and your opponent scores. Your opponent now has " << score2 << " points." << endl;
            }
        }
        break;
        case 2:
        {
            system("cls");
            cout << "You attempt to block the shot..." << endl;
            sleep_for(nanoseconds(10));
            sleep_until(system_clock::now() + seconds(2));
            system("cls");
            if (prob1 > 2)
            {
                cout << "You block the shot!! Your opponents score remains at " << score2 << " points." << endl;
            }
            else
            {
                score2 += 2;
                cout << "You fail to block the shot and your opponent scores. Your opponent now has " << score2 << " points." << endl;
            }
        }
        break;
    }
}

void ThirdOffensivePosession()
{
    cout << "Third offensive posession: " << endl;
    cout << "You have been given the ball at the top of the 3 point line which is 22 feet from the basket. You can either shoot the 3 or dribble forward 2 feet and right 2 feet and shoot a 2 point shot." << endl;
    int selection = PlayerOptionOff();
    int prob1 = 1 + rand() % 5;
    switch (selection)
    {
        case 1:
        {
            cout << "You dribble to the new position. How far away from the basket are you?" << endl;
            cin >> answer2;
            
            for (int i = 1; i <= 4; i++)
            {
                if (i < 4)
                {
                    if (answer2 == 20.1)
                    {
                        system("cls");
                        cout << "Correct! Calculating probability..." << endl;
                        sleep_for(nanoseconds(10));
                        sleep_until(system_clock::now() + seconds(2));
                        system("cls");
                        if (prob1 > 2)
                        {
                            score1++;
                            score1++;
                            cout << "You scored! You now have " << score1 << " points!" << endl;
                        }
                        else
                        {
                            cout << "You missed!" << endl;
                        }
                        break;
                    }
                    else
                    {
                        cout << "Incorrect answer! Please try again: " << endl;
                        cin >> answer2;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Incorrect answer! Your score remains at " << score1 << " points." << endl;
                }
                
            }
                
            
            break;
        }
        case 2:
        {
            cout << "You dribble back 2 feet and to the left 2 feet. How far away from the basket are you?" << endl;
            cin >> answer2;
            
            for (int i = 1; i <= 4; i++)
            {
                if (i < 4)
                {
                    if (answer2 == 24.08)
                    {
                        system("cls");
                        cout << "Correct! Calculating probabilty..." << endl;
                        sleep_for(nanoseconds(10));
                        sleep_until(system_clock::now() + seconds(2));
                        system("cls");
                        if (prob1 < 3)
                        {
                            score1++;
                            score1++;
                            score1++;
                            cout << "You scored! You now have " << score1 << " points!" << endl;
                        }
                        else
                        {
                            cout << "You missed!" << endl;
                        }
                        break;
                    }
                    else
                    {                        
                        cout << "Incorrect answer! Please try again: " << endl;
                        cin >> answer2;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Incorrect answer! Your score remains at " << score1 << " points." << endl;
                }               
            }
            
            break;
        }
    }
}

void ThirdDefensivePosession()
{
    int prob1 = 1 + rand() % 5;
    cout << "You are back on defense and its the last posession of the game." << endl;
    int selection = PlayerOptionDef();

    switch (selection)
    {
    case 1:
    {
        system("cls");
        cout << "You attempt to steal the ball..." << endl;
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(2));
        system("cls");
        if (prob1 > 3)
        {
            cout << "You steal the ball!! Your opponent score remains at " << score2 << " points." << endl;
        }
        else
        {
            score2 += 2;
            cout << "You fail the steal attempt and your opponent scores. Your opponent now has " << score2 << " points." << endl;
        }
    }
    break;
    case 2:
    {
        system("cls");
        cout << "You attempt to block the shot..." << endl;
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(2));
        system("cls");
        if (prob1 > 2)
        {
            cout << "You block the shot!! Your opponents score remains at " << score2 << " points." << endl;
        }
        else
        {
            score2 += 2;
            cout << "You fail to block the shot and your opponent scores. Your opponent now has " << score2 << " points." << endl;
        }
    }
    break;
    }
}

void EndGame()
{
    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(3));
    system("cls");

    cout << "The game is over! The score was " << score1 << " to " << score2 << "." << endl;

    if (score1 > score2)
    {
        cout << "Yay, you have won the game! Congrats. See you next time." << endl;
    }
    else if (score1 < score2)
    {
        cout << "Oh no, you have lost the game! Better luck next time." << endl;
    }
    else
    {
        cout << "The game is a tie! You'll get em next time." << endl;
    }
}

void DisplayScoringVisual()
{
    cout << "He shoots!" << endl;

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    system("cls");

    cout << "            " << endl;
    cout << " [|             " << endl;
    cout << " [|=---           " << endl;
    cout << " /  ##            o    " << endl;
    cout << "|                      " << endl;
    cout << "|               /  \\\\" << endl;
    cout << "|              O_/   \\O" << endl;
    cout << "|              T      T" << endl;
    cout << "|              |\\    /|" << endl;
    cout << "|______________|_|__|_|__" << endl;


    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    system("cls");

    cout << "            " << endl;
    cout << " [|            o" << endl;
    cout << " [|=---           " << endl;
    cout << " /  ##" << endl;
    cout << "|                  \\\\" << endl;
    cout << "|               /   \\O" << endl;
    cout << "|              O_/   T" << endl;
    cout << "|              T    /|" << endl;
    cout << "|              |\\   | |" << endl;
    cout << "|______________|_|________" << endl;

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    system("cls");

    cout << "          o " << endl;
    cout << " [|             " << endl;
    cout << " [|=---           " << endl;
    cout << " /  ##" << endl;
    cout << "|                  \\\\" << endl;
    cout << "|               /   \\O" << endl;
    cout << "|              O_/   T" << endl;
    cout << "|              T    /|" << endl;
    cout << "|              |\\  | |" << endl;
    cout << "|______________|_|________" << endl;

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    system("cls");

    cout << "            " << endl;
    cout << " [|   o         " << endl;
    cout << " [|=---           " << endl;
    cout << " /  ##                 " << endl;
    cout << "|                      " << endl;
    cout << "|                  \\\\" << endl;
    cout << "|              O    \\O" << endl;
    cout << "|             /T\\    T" << endl;
    cout << "|              |\\   /|" << endl;
    cout << "|______________|_|_|_|___" << endl;

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    system("cls");

    cout << "            " << endl;
    cout << " [|             " << endl;
    cout << " [|=---           " << endl;
    cout << " /  ##                 " << endl;
    cout << "|   o                  " << endl;
    cout << "|                      " << endl;
    cout << "|              O     O" << endl;
    cout << "|             /T\\   /T\\" << endl;
    cout << "|              |\\   /|" << endl;
    cout << "|______________|_|_|_|___" << endl;

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    system("cls");
}

