#include <iostream>
using namespace std;
int main() 
{
    int guess;
    int secret = 7;   

    do 
    {
        cout << "Guess number (1-20): ";
        cin >> guess;
    
    } while (guess != secret);
    
    cout << "Congratulations! you guessed the number." << endl;

    return 0;
}
