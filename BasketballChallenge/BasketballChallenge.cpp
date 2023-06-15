// BasketballChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int answer;
    int score = 0;
    bool isCorrect;

    // game begins
    cout << "The game begins! You are 2 feet away from the basket and your teammate passes you the ball. You step back 2 feet and take a shot." << endl; 
    cout << "How far away from the goal in feet are you ? "  << endl;
    cin >> answer;
    if (answer == 4)
    {
        isCorrect = true;
        if (isCorrect)
        {
            score++;
            cout << "You scored! You now have " << score << " point." << endl;
        }
    }
    if (answer != 4)
    {
        isCorrect = false;
        if (!isCorrect)
        {
            cout << "You missed! Your score remains at " << score << " points." << endl;
        }       
    }

    // calc the hypotenuse of a right triangle
    cout << "You are 4 feet away form the basket. You dribble 3 feet to the left and take a shot. How far away from the basket are you? ";
    cin >> answer;
    if (answer == 5)
    {
        isCorrect = true;
        if (isCorrect)
        {
            score++;
            cout << "You scored! You now have " << score << " points." << endl;
        }
    }
    if (answer != 5)
    {
        isCorrect = false;
        if (!isCorrect)
        {
            cout << "You missed! Your score remains at " << score << " points." << endl;
        }
    }

    // add an option for the player with probability
    cout << "You have been given the ball at the top of the 3 point line which is 22 feet from the basket. You can either shoot and score 2 points with a probability of making it at 20%, or dribble forward 2 feet and right 2 feet with a 80% chance of making it but only scoring 1 point." << endl;
    cout << "Do you wish to go with option 1 or 2? ";
    cin >> answer;
    if (answer == 1)
    {

    }
    if (answer == 2)
    {

    }
}

