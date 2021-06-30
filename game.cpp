#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
   int n;

   srand(time(0));
   int c = (rand() % (20 + 1));

   cout << "\n\n***** WELCOME TO NUMBER GUESSING GAME *****\n";

   for(int i = 0; i < 6; i++){
      if(i >= 0 && i < 5){
         cout << "\nYou have " << 5 - i << " chances left.\n";
         cout << "Enter your guess: ";
         cin >> n;

         if (n > c)
            cout << "Sorry " << n << " is wrong. The number is less than that.\n";
         else if (n < c)
            cout << "Sorry " << n << " is wrong. The number is more than that.\n";
         else if (n == c){
            cout << "\n\nCongratulations. You guessed it!\n\n";
            break;
         }
      }
      else
         cout << "\n\nSorry, You Lost!\n\n";
   }
return 0;
}

