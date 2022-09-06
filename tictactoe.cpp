#include <iostream>
#include <vector>
#include <string>

using namespace std;

//create hashtable to store indeces and values, search and insert in O(n)
//search, insert functions
//score, play again, cpu

vector<string> gameboard{" 1 | 2 | 3 ",
                            "---|---|---",
                            " 4 | 5 | 6 ",
                            "---|---|---",
                            " 7 | 8 | 9 "};
bool players2 = false;
bool p1 = true;


void printBoard(){
    for(auto i: gameboard){
        cout << i << endl;
    }
}

void clearBoard(){
    for(int i = 0; i<gameboard.size(); i+=2){
            int ind[] = {2, 6, 10};
            for(int j: ind){
                gameboard[i][j] = ' ';
            }
    }
    
}

int promptGame(){
    while(true){
        if(p1){
            cout << "Player 1: ";
        }else if(!p1 && players2){
            cout << "Player 2: ";
        }
        cout << "Enter a space (1-9)" << endl;
        string ans;
        getline(cin, ans);
        if(stoi(ans) >= 1 && stoi(ans) <= 9){
            if(p1 && players2){
                p1 = false;
            }else{
                p1 = true;
            }
            return stoi(ans);
        }
    }
    
    
}

void setupGame(){
    cout << "Tic-Tac-Toe" << endl;
    while(true){
        string players;
        cout << "How many players? (1 or 2)" << endl;
        getline(cin, players);
        if(players == "1"){
            break;
        }else if(players == "2"){
            players2 = true;
            break;
        }
    }
    printBoard();
    clearBoard();
}

int main(int arc, char* argv[0]){
    
    setupGame();
    for(int i=0; i<5; i++){
        promptGame();
        printBoard();
    }
    

}






