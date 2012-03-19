#include "TakeAGuess.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "TakeAGuess.h"
using namespace std;

TakeAGuess::TakeAGuess()
{

    cin>> c;
    if (c==c)
    {
    srand(time(0));
    number = (1+ (rand()%100));
    cout<< "This is where you guess for a number :D \n";

    bo=0;
    guesses=0;
    while (bo<1)
    {
        cout<<"Take a guess: ";
        cin>> guess;
        guesses++;

            if (guess<number)
            {
             cout<<"a little low \n\n";
            }

            if(guess>number)
            {
            cout<<"Too big \n\n";
            }

            if(guess==number)
            {
             cout<<"You guessed the rigt number YYHEEEEEEEEEEEEY :D \n";
             cout<<"guesses: " << guesses << "\n";

            if (guesses== 1)
            {
                cout<<"That was awesome :D bet you can't do it again! \n \n \n";
                bo++;
            }
            if (guesses==2 || guesses==3)
            {
                cout<<"Thats a good score! \n \n \n";
                bo++;
            }
            if (guesses==4 || guesses==5)
            {
                cout<<"Seen better but still good! \n \n \n";
                bo++;
            }
            if(guesses==7|| guesses==8 || guesses==9 || guesses==10)
            {
                cout<<"normal score \n \n \n";
                bo++;
            }
            if(guesses>10)
            {
                cout<<"OK! You aren't a good player! \n \n \n";
                bo++;
            }
            }
            }

        }
}
