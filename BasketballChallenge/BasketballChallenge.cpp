// BasketballChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <time.h>
using namespace std;

// add defense
// ben = add visuals
// add header file
// add for loop
// add templated function and recursion
// pass by refs


int answer;
double answer2;
int score = 0;
bool isCorrect;
int rand1 = 1 + rand() % 10;
int prob1 = 1 + rand() % 5;

int StartMenu();
void PlayGame();
int PlayerOption();
void FirstOffensivePosession();
void SecondOffensivePosession();
void ThirdOffensivePosession();

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
        cout << "Please try again." << endl;
        cin >> selection;
    }
    return selection;
}

void PlayGame()
{
    // game begins with the option of 2 or 3 point shot and simple math
    FirstOffensivePosession();

    // calc the hypotenuse of a right triangle
    SecondOffensivePosession();

    ThirdOffensivePosession();
        
}

int PlayerOption()
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

void FirstOffensivePosession()
{
    cout << "The game begins and you are on offense. You can either shoot a 2 point shot with a 60% of making it or shoot a 3 point shot with a 40% of making it." << endl;
    
    int selection = PlayerOption();

    switch (selection)
    {
        case 1:
        {
            cout << "You are " << rand1 << " feet away from the basket and your teammate passes you the ball.You step back 2 feet and take a shot." << endl;
            cout << "How far away from the goal in feet are you? " << endl;
            cin >> answer;
            if (answer == rand1 + 2)
            {
                cout << "Correct! Calculating probability..." << endl;
                if (prob1 > 2)
                {
                    score++;
                    score++;
                    cout << "You scored! You now have " << score << " point." << endl;
                }
                else
                {
                    cout << "You missed!" << endl;
                }
            }
            else
            {
                cout << "You missed! Your score remains at " << score << " points." << endl;
            }
            break;
        }
        case 2:
        {
            cout << "You are 10 feet away from the basket. You pass the ball directly behind you 13 feet to a teammate who takes a 3 point shot. How far is he from the basket?" << endl;
            cin >> answer;
            if (answer == 23)
            {
                cout << "Correct! Calculating probability..." << endl;
                if (prob1 < 3)
                {
                    score++;
                    score++;
                    score++;
                    cout << "You scored! You now have " << score << " points.";
                }
                else
                {
                    cout << "You missed!" << endl;
                }
            }
            else
            {
                cout << "You missed!" << endl;
            }
            break;
        }
    }
}

void SecondOffensivePosession()
{
    cout << "Second posession: " << endl;
    int selection = PlayerOption();
    switch (selection)
    {
    case 1:
    {
        cout << "You are 4 feet away form the basket. You dribble 3 feet to the left and take a shot. How far away from the basket are you? ";
        cin >> answer;
        if (answer == 5)
        {
            cout << "Correct! Calculating probability..." << endl;
            if (prob1 > 2)
            {
                score++;
                score++;
                cout << "You scored! You now have " << score << " points." << endl;
            }
            else
            {
                cout << "You missed!" << endl;
            }
        }
        else
        {
            cout << "You missed! Your score remains at " << score << " points." << endl;
        }
        break;
    }
    case 2:
    {
        cout << "You are 25 feet away from the basket. You dribble 5 feet to the left. How far are you from the basket?" << endl;
        cin >> answer2;
        if (answer2 == 25.5)
        {
            cout << "Correct! Calculating probability..." << endl;
            if (prob1 < 3)
            {
                score++;
                score++;
                score++;
                cout << "You scored! You you now have " << score << " points." << endl;
            }
            else
            {
                cout << "You missed!" << endl;
            }
        }
        else
        {
            cout << "You missed!" << endl;
        }
        break;
    }
    }
}

void ThirdOffensivePosession()
{
    cout << "Third posession: " << endl;
    cout << "You have been given the ball at the top of the 3 point line which is 22 feet from the basket. You can either shoot the 3 or dribble forward 2 feet and right 2 feet and shoot a 2 point shot." << endl;
    int selection = PlayerOption();
    switch (selection)
    {
        case 1:
        {
            cout << "You dribble to the new position. How far away from the basket are you?" << endl;
            cin >> answer2;
            if (answer2 == 20.1)
            {
                cout << "Correct! Calculating probability..." << endl;
                if (prob1 > 2)
                {
                    score++;
                    score++;
                    cout << "You scored! You now have " << score << " points!" << endl;
                }
                else
                {
                    cout << "You missed!" << endl;
                }
            }
            else
            {
                cout << "You missed!" << endl;
            }
            break;
        }
        case 2:
        {
            cout << "You dribble back 2 feet and to the left 2 feet. How far away from the basket are you?" << endl;
            cin >> answer2;
            if (answer == 24.08)
            {
                cout << "Correct! Calculating probabilty..." << endl;
                if (prob1 < 3)
                {
                    score++;
                    score++;
                    score++;
                    cout << "You scored! You now have " << score << " points!" << endl;
                }
                else
                {
                    cout << "You missed!" << endl;
                }
            }
            else
            {
                cout << "You missed!" << endl;
            }
            break;
        }
    }
}
