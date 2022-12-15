#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    cout << "The Test scores program\n\n";

    cout << "Enter test scores between 0 and 100.\n";
    cout << "To end the program enter -1.\n\n";

    vector<int>scores;
    int score = 0;
    while (score != -1){
        cout << "enter score: ";
        cin >> score;

        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid number. Try again.\n";
        }
        else if(score > 100){
            cout << "Score must be from 0 to 100. Try again.\n";
        }
        else if(score < -1){
            cout<< "Score must be from 0 to 100. Try again.\n";
        }
        else if(score > -1){
            scores.push_back(score);
        }
    }

    if(scores.empty()){
        cout << "\nNo scores entered\n.";
    }
    else{
        int total = 0;
        for(int score : scores){
            total += score;
        }
    
        auto score_count = scores.size();
        double average = static_cast<double>(total) / score_count;
        average = round(average * 10) / 10;

        cout << "\n" 
             << "Score count:   " << score_count << endl
             << "Score total:   " << total << endl
             << "Average Score: " << average << endl << endl;
    }
}