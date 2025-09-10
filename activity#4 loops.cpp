#include <iostream>
using namespace std;

int main() {
    // dito is For loop 
    cout<<"Checking attendance\n";
    for (int i = 1; i <= 5; i++) {
        cout<<"Student "<< i <<" is present.\n";
    }

    //dito is While loop
    cout<<"\nCounting late students\n";
    int late = 1;
    while (late <= 3) {
        cout<<"Late student "<<late <<" just arrived.\n";
        late++;
    }

    //dito is Do-while loop
    cout<<"\nReminders\n";
    int reminder = 1;
    do {
        cout<<"Reminder "<<reminder<<": Submit your Assignment!\n";
        reminder++;
    } while (reminder <= 2);

    return 0;
}