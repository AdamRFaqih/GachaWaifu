#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

const int idx = 13;

struct data{
    string waifu;
    string rarity;
};

typedef struct data infotype;
typedef int adr;

struct stacks{
    infotype T[idx];
    adr top;
};


stacks createArray();
void push(stacks &s, infotype r);
void pop(stacks &s, infotype &r);
bool isEmpty(stacks s);
bool isFull(stacks s);
void show(stacks s);
int menu();
void listWaifu(string p[2][5]);
void gacha(stacks &s, string p[2][5], int &b, int &r);


#endif // STACK_H_INCLUDED
