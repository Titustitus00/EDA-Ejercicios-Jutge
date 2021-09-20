#include <iostream>
#include <queue>

using namespace std;



int main() {
    priority_queue<int> cola;


    char input;
    while ( cin >> input ) {

        //Store
        if ( input == 'S' ) {
            int x;
            cin >> x;

            cola.push(x);

        }

        //Greatest number
        else if ( input == 'A' ) {
            if ( cola.empty() ) cout << "error!" << endl;
            else {
                cout << cola.top() << endl;
            }
        }

        //Remove
        else if ( input == 'R' ) {
            if ( cola.empty() ) cout << "error!" << endl;
            else {
                cola.pop();
            }
        }

        //Increase
        else if ( input == 'I' ) {
            int x;
            cin >> x;

            if ( cola.empty() ) cout << "error!" << endl;
            else {
                x += cola.top();
                cola.pop();
                cola.push(x);
            }

        }

        //Decrease
        else if ( input == 'D' ) {
            int x;
            cin >> x;

            if ( cola.empty() ) cout << "error!" << endl;
            else {
                x = cola.top() - x;
                cola.pop();
                cola.push(x);
            }

        }



    }

}