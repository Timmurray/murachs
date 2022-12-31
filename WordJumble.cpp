#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    cout << "Let's play Word Jumble!\n"
         << "\n"
         << "Enter 'hint' for a hint.\n"
         << "Enter 'exit' to exit.\n\n";
    //define a vector of potential words
    vector<string>words {"frost", "three", "horse", "monkey", "cubicle", "choices", "indomitable", "snowball", "language"};

    //get random word from a vector
    srand(time(nullptr));
    int index = rand() % words.size();
    string word = words[index];

    //jumble the word
    string jumbled_word = word;
    auto length = word.size();
    for (int index1 = 0; index1 < length; ++index1){
        int index2 = rand() % length;
        char temp = jumbled_word[index1];
        jumbled_word[index1] = jumbled_word[index2];
        jumbled_word[index2] = temp;
    }

    //display the jumbled word
    cout << "The Jumble is...";
    for(char c : jumbled_word){
        cout << static_cast<char>(toupper(c));
    }
    cout << "\n\n";

    //loop until the user guesses the jumble of enters 'exit'
    int hint_count = 1;
    string guess = "";
    while(true){
        cout << "Your guess: ";
        cin >> guess;
        cin.ignore(1000, '\n');
        if(guess == word){
            cout << "Congratulations! You guessed it!\n\n";
            break;
        }
        else if(guess == "hint"){
            cout << "Hint: ";
            for(int i = 0; i < word.length(); ++i){
                if(i < hint_count){
                    cout << static_cast<char>(toupper(word[i])) << ' ';
                }
                else{
                    cout << '_' << ' ';
                }
            }
            cout << "\n\n";
            ++hint_count;
        }
        else if(guess =="exit"){
            cout << "Bye! Lets play again soon.\n\n";
            break;
        }
        else{
            cout << "Nope. Try Again!\n\n";
        }
    }
}