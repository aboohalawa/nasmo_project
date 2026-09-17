#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <array>
#include <vector>

using namespace std;

vector<string> g = {
    "apple"
};


bool onetime;


void add();
void wanna_add();
void see();

int main() {
<<<<<<< HEAD
    cin.tie(0);
    cin.sync_with_stdio(0);
    onetime = true;
=======
   // cin.tie(0);
    //cin.sync_with_stdio(0);

    tal = true;
>>>>>>> add_exit

    see();

    

    return 0;
}


void add() {
    cout << "what is it?" << endl;
    string v;
    cin >> v;
    g.push_back(v);

    wanna_add();
}

void wanna_add() {
    cout << endl << "wanna add or wanna see the array" << endl;
<<<<<<< HEAD
    if (onetime) {
         cout << "answer add if you wanna add or see if you wanna see the array" << endl;
         onetime = false;
=======
    if (tal) {
         cout << endl << "answer add if you wanna add " << endl 
         << "or see if you wanna see the array" << endl 
         << "type anything if you wanna exit" << endl;
         tal = false;
>>>>>>> add_exit
    }
   
    string v;
    cin >> v;
    if (v=="add") {
        add();
    }
    else if (v=="see") {
        see();
    }
    else {
        return;
    }
    
}

void see() {
    cout << endl;
    
     for (int i = 0; i < g.size(); i++) {
         cout << g[i] << endl;
     }
    
    wanna_add();
}

