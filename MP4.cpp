//*[A] Push Data
//[B] Pop Data
//[C] Show Top
//[D] Show Size
//[E] Quit
//EnterChoice:

#include <iostream>
#include <stack>
using namespace std;

void showMenu() {
    cout << "[A] Push Data" << endl;
    cout << "[B] Pop Data" << endl;
    cout << "[C] Show Top" << endl;
    cout << "[D] Show Size" << endl;
    cout << "[E] Quit" << endl;
}
 
int main() {
    stack <string> a;
    char choice;
    string anime;

    while(true) {
        showMenu;
        cout << "Enter Choice: ";
        cin >> choice;
        
        switch(choice) {
case 'A':
case 'a':
    cout << "Enter anime to push: ";
    cin >> anime;
    a.push(anime);
    cout << "Anime pushed: " << anime << endl;
    break;
case 'B':
case 'b':
    if (!a.empty()) {
        cout << "Anime popped: " << a.top() << endl;
        a.pop();
    } else {
        cout << "Stack is empty, cannot pop." << endl;
    }
    break;
case 'C':
case 'c':
    if (!a.empty()) {
        cout << "Top anime: " << a.top() << endl;
    } else {
        cout << "Stack is empty." << endl;
    }
    break;
case 'D':
case 'd':
    cout << "Stack size: " << a.size() << endl;
    break;
case 'E':
case 'e':
    cout << "Exiting program." << endl;
    return 0;
default:
    cout << "Invalid choice. Please try again." << endl;
    break;
}
}
return 0;