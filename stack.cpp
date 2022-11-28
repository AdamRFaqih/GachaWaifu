#include "stack.h"

stacks createArray(){
    stacks p;
    p.top = -1;
    return p;
}

void push(stacks &s, infotype r){
    if(isFull(s) == true){
        s.top++;
        s.T[s.top] = r;
    }else{
        cout << "Penuh" << endl;
    }
}
void pop(stacks &s, infotype &r){
    if(isEmpty(s) == true){
        r = s.T[s.top];
        s.top--;
    }else{
        cout << "Habis" << endl;
    }
}
bool isEmpty(stacks s){
    bool k;
    k = false;
    if (s.top >= 0){
        k = true;
    }
    return k;
}
bool isFull(stacks s){
    bool k;
    k = false;
    if (s.top <= idx){
        k = true;
    }
    return k;
}
void show(stacks s){
    int i;
    cout <<"Waifu Anda: " <<endl;
    while(i <= s.top){
        cout << "["<<s.T[i].rarity <<"] "<<s.T[i].waifu << endl;
        i++;
    }
}

int menu(){
    int pilih;
    cout << "==========Menu==========" << endl;
    cout << "1. List Waifu" << endl;
    cout << "2. Waifu Kamu" << endl;
    cout << "3. Gacha Waifu" << endl;
    cout << "4. Cek Token Gacha" << endl;
    cout << "5. Ceraikan waifu terakhir" << endl;
    cout << "0. Sudahi saja" << endl;
    cout << "========================" << endl;
    cout << endl;
    cout << "Masukan Nomor: ";
    cin >> pilih;
    cout << "========================" << endl;

    return pilih;
}

void listWaifu(string p[2][5]){

    for(int i = 0; i < 2; i++){
            if(i == 0){
                cout << "SSR" <<endl;
            }else{
                cout << "SR" << endl;
            }

            for(int j = 0;j<4;j++){
                cout << p[i][j] << endl;
            }
            cout << endl;
    }
}

void gacha(stacks &s, string p[2][5], int &genbaris, int &gencolom){
    char tentu;
    infotype r;
    srand (time(NULL));
    genbaris = rand() % 4;
    gencolom = rand() % 2;

    r.rarity = "SSR";
    if (gencolom == 1){
        r.rarity = "SR";
    }
    r.waifu = p[gencolom][genbaris];

    cout << "You got: " << endl;
    cout << "["<<r.rarity <<"] "<<r.waifu <<endl;
    cout << "(Marry Me? " << "[Y]/[N] = ";
    cin >> tentu;
    cout << endl;

    if (tentu == 'Y' or tentu == 'y'){
        push(s, r);
        cout <<"You are married with " << r.waifu << endl;
    }else{
        cout <<"As you wish My Lord" << endl;
    }


}


