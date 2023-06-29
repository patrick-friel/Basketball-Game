// BasketballChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

using namespace std;

// add a delay after 'calculating...'
// add defense
// add visuals to show angles and distance
// add switch
// add header file
// start organizing with functions
// add for loop
// add templated function and recursion


int main()
{
    int answer;
    double answer2;
    int score = 0;
    bool isCorrect;
    srand((unsigned int)time(0));
    int rand1 = 1 + rand() % 11;
    int prob1 = 1 + rand() % 6;
    

    // game begins with player having the ball
    cout << "The game begins! You are " << rand1 << " feet away from the basket and your teammate passes you the ball.You step back 2 feet and take a shot." << endl; 
    cout << "How far away from the goal in feet are you ? "  << endl;
    cin >> answer;
    if (answer == rand1 + 2)
    {
        isCorrect = true;
        if (isCorrect)
        {
            score++;
            cout << "You scored! You now have " << score << " point." << endl;
        }
    }
    else
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
    else
    {
        isCorrect = false;
        if (!isCorrect)
        {
            cout << "You missed! Your score remains at " << score << " points." << endl;
        }
    }

    // add two options for the player with while loop and probability for optioni 1
    cout << "You have been given the ball at the top of the 3 point line which is 22 feet from the basket. You can either shoot and score 3 points with a probability of making it at 20%, or dribble forward 2 feet and right 2 feet with a 80% chance of making it but only scoring 2 point. (and dont forget you will have to calculate the distance of the new position)" << endl;
    cout << "Do you wish to go with option 1 or 2? ";
    cin >> answer;
    while (answer != 1 && answer != 2)
    {
        cout << "Please try again. ";
        cin >> answer;        
    }
    if (answer == 1)
    {
        cout << "Calculating probability..." << endl;
        if (prob1 == 1)
        {
            score++;
            score++;
            score++;
            cout << "You scored! You now have " << score << " points." << endl;
        }
        else
        {
            cout << "You missed!" << endl;
        }
    }
    if (answer == 2)
    {
        cout << "You have dribbled to the new position and take the shot. What distance are you from the basket in feet? (please include 1 decimal in your answer.)";
        cin >> answer2;
        if (answer2 == 20.1)
        {
            cout << "You are correct! Calculating probability..." << endl;
            if (prob1 != 1)
            {
                score++;
                score++;
                cout << "You score! You now have " << score << " points." << endl;
            }
            else
            {
                cout << "You missed!" << endl;
            }
        }
        else
        {
            cout << "Incorrect! Your score remains at " << score << " points." << endl;
        }
    }
       
}

