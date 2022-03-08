#ifndef FUNC_H
#define FUNC_H

#include<string>
#include<time.h>
#include<vector>
#include<random>
#include<fstream>
#include<iostream>

using namespace std;

//game functions
string randomWord();
string creteAns();
bool checkAns(char c, string &s);
void youWin();
void youLose();
char getUserGuessChar();
void updateGame(string ans);

//global variables
static string secretWord=randomWord();
static string ans=creteAns();
static string userGuessed="";
static const int timesLimit=7;
static int userGuessTimes=0;

#endif