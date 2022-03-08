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
void printResult();
char getUserGuessChar();
void renderGame(int cnt);

//global variables
static string secretWord=randomWord();
static string ans=creteAns();
static const int timesLimit=7;

#endif