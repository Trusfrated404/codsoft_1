#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num;
    int guess;
    int attempts = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "     NUMBER GUESSING GAME    "<<endl;
    do
    {
        cout << "Enter a guess (1-100) : "<<endl;
        cin >> guess;
        attempts++;

        if (guess > num)
        {
            cout << "Too high!!"<<endl;
        }
        else if (guess < num)
        {
            cout << "Too low!!"<<endl;
        }
        else
        {
            cout << "CONGRATS!!" << endl;
            cout << "No. of attempts : " << attempts << endl;
        }
    } while (guess != num);
    return 0;
}