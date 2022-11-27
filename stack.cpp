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
        s.T[s.top].waifu = "";
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
    while(i <= s.top){
        cout << s.T[i].waifu << endl;
        cout << endl;
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
    cout << "0. Sudahi saja" << endl;
    cout << "========================" << endl;
    cout << endl;
    cout << "Masukan Nomor: ";
    cin >> pilih;
    cout << endl;

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
    /* - penentuan push berdasarkan nomor rarity dan karakter yang didapat
    - penentuan pemilihan rarity didapat dari nomor kolom yang didapat, jika 0 maka SSR, jika 1 maka SR
    - nunggu algoritma perhitungan gacha untuk mendapatkan nomor baris dan kolom
    - nomor kolom dan baris didapat dari kalkulasi perhitungan gacha
    */
}
