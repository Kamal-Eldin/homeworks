#include <iostream>
#include <string>
#include <utility>
#include<array>
#include <unordered_map>
#include <stdio.h>

using std::string;
using std::printf;
using std::cin;
using std::cout;
using std::endl;
using std::array;
using std::unordered_map;

// <NAME>, the <ADJECTIVE> <NOUN> that <ENDING>
int main (){
    // using std::string_literals::operator""s;
    string name; string user_season;
    array<string, 2> adjectives;
    const unordered_map<string, string> seasons= {{"spring","STL guru"},
                                            {"summer", "C++ expert"},
                                            {"autumn", "coding beast"},
                                            {"winter", "software design hero"}};

    const array<string, 3> endings= {"eats UB for breakfast",
                                    "finds errors quicker than the compiler",
                                    "is not afraid of C++ error messages"};
  
    printf("Welcome to the fortune teller program!\nPlease enter your name:\n");
    cin >> name;
    printf("Please enter another adjective:\n");
    cin >> adjectives.at(0);
    printf("Please enter another adjective:\n");
    cin >> adjectives.at(1);
    printf("Please enter the time of year when you were born:\n(pick from 'spring', 'summer', 'autumn', 'winter')\n");
    cin >> user_season;

    int adj_index= name.size() %  adjectives.size();
    int ending_index= name.size() %  endings.size();
    string select_adjective= adjectives.at(adj_index);
    string select_ending= endings.at(ending_index);
    string select_noun= seasons.at(user_season);
    
    cout << name << ',' << "the " << select_adjective << " " << select_noun << " " << "that " << select_ending;
    return 0;
}