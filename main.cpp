#include "func.h"
#include "graphics.h"

int main(){
    system("cls");
    while(userGuessTimes<=timesLimit){
        renderGame(userGuessTimes);
        if(userGuessTimes==timesLimit){
            youLose();
            break;
        }
        updateGame(ans);
        char userGuessChar = getUserGuessChar();
        if(!checkAns(userGuessChar, ans))
            userGuessTimes++;
        if(ans==secretWord){
            system("cls");
            renderGame(userGuessTimes);
            youWin();
            break;
        }
        system("cls");
    }
    return 0;
}