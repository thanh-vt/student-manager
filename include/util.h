#pragma once
#include <array>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <dos.h>
#include <windows.h>


#define Enter 13
//const int WHITE=15;
#define PASSWORD "abcdef"

//const int WHITE=15;
std::array<char, 5> Pwd();

int CheckPwd();

void gotoxy(short x, short y);

short wherex();

short wherey();

void clreol();

void SetColor(WORD color);

void SetBGColor(WORD color);

inline void clrscr() {
    system("cls");
}
