#include <iostream>
#include <random>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::string_literals::operator""s;
using std::uniform_real_distribution;
using std::random_device;
using std::mt19937;

int main(){
    random_device device;
    mt19937 engine{device()};
    float low_bound{};
    float high_bound{};
    int guess{};

    printf("Welcome to the GUESSING GAME!\nI will generate a number and you will guess it!\n");
    cout << "Please provide the smallest number: "s << endl;
    cin >> low_bound;
    cout << "Please provide the largest number: "s << endl;
    cin >> high_bound;

    uniform_real_distribution dist{low_bound, high_bound};
    int rand= dist(engine);
    cout << "I've generated a number. Try to guess it!"s << endl;
    string asking_message= "Please provide the next guess:\n"s;

    cout << asking_message;
    int counter {1};
    cin >> guess;
    
    while (guess != rand){

        if (guess < rand){
            cout << "Your number is too small. Try again!\n";
            }
        else if (guess > rand ){
            cout << "Your number is too big. Try again!\n";
        }
        ++counter;
        cin >> guess;
        
    }
    printf("You've done it! You guessed the number %d in %d guesses!\n", rand, counter);
    
    return 0;
}