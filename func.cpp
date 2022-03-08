#include "func.h"

string randomWord(){
    ifstream f("sourceWord.txt");
    srand(time(NULL));
    vector<string> row;
    string s;
    while(f>>s) row.push_back(s);
    return row[rand()%row.size()];
}

bool checkAns(char c, string &s){
    bool check=false;
    for(int i=0; i<secretWord.length(); i++)
        if(c==secretWord[i] && s[i]=='_'){
            s[i]=c;
            check=true;
        }
    return check;
}

void printResult(){
    system("cls");
    cout<<"\nCongrat, you win!!";
    cout<<"\n"<<"Secret word is: "<<secretWord<<"\n";
}

char getUserGuessChar(){
    cout<<"Enter your guess char: ";
    char c;
    cin>>c;
    cin.sync();
    return c;
}

string creteAns(){
    string s="";
    for(int i=0; i<secretWord.length(); i++)
        s+="_";
    return s;
}

void renderGame(int cnt){
    switch(cnt){
        case 0:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//            "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 1:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 2:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 3:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||             |  "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 4:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||            /|  "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 5:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||            /|\\"<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 6:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||            /|\\"<<endl;
            cout<<"  ||            /   "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 7:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||            /|\\"<<endl;
            cout<<"  ||            / \\"<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
    }
}