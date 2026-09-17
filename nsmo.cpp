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

bool tal;


void add();
void wanna_add();
void see();

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    tal = true;

    see();
    wanna_add();

    

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
    if (tal) {
         cout << "answer add if you wanna add or see if you wanna see the array" << endl;
         tal = false;
    }
   
    string v;
    cin >> v;
    if (v=="add") {
        add();
    }
    else if (v=="see") {
        see();
    }
    
}

void see() {
    cout << endl;
    
     for (int i = 0; i < g.size(); i++) {
         cout << g[i] << endl;
     }
    
    wanna_add();
}

