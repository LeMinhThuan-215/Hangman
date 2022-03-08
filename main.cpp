#include "func.h"

int main(){
    system("cls");
    int userGuessTimes=0;
    do {
        renderGame(userGuessTimes);
        cout<<"\n"<<ans<<endl;
        char userGuessChar = getUserGuessChar();
        if(!checkAns(userGuessChar, ans))
            userGuessTimes++;
        if(ans==secretWord){
            printResult();
            break;
        }
        system("cls");
    } while(userGuessTimes<timesLimit);
    if(userGuessTimes==7){
        renderGame(7);
        cout<<"\nYou lose!!"<<endl;
        cout<<"Secret word is"<<secretWord;
    }
    return 0;
}