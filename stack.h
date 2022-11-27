#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

const int idx = 13;
const int idx2 = 50;

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
void push(stacks &s, string r);
void pop(stacks &s, string &r);
bool isEmpty(stacks s);
bool isFull(stacks s);
void show(stacks s);
int menu();
void listWaifu();

#endif // STACK_H_INCLUDED
