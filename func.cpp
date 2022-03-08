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

void youWin(){
    cout<<"\nCongrat, you win!!";
    cout<<"\n"<<"Secret word is: "<<secretWord<<"\n";
}

void youLose(){
    cout<<"\nYou lose!!"<<endl;
    cout<<"Secret word is: "<<secretWord;
}

char getUserGuessChar(){
    cout<<"Enter your guess char: ";
    char c;
    cin>>c;
    cin.sync();
    userGuessed+=c;
    return c;
}

string creteAns(){
    string s="";
    for(int i=0; i<secretWord.length(); i++)
        s+="_";
    return s;
}

void updateGame(string ans){
    cout<<"\n"<<ans<<endl;
    cout<<"The letters you guessed: "<<userGuessed<<endl;
}