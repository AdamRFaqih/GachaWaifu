#include "stack.h"

int main()
{
    stacks s;
    s = createArray();
    infotype r;
    int token, pilihan, genbaris, gencolom, b, c;
    token = 10;
    string p[2][5] = {
        /*SSR*/ {"Elysia", "Raiden Mei", "Kiana", "Bronya"},
        /*SR*/ {"Kevin", "Eden", "Ei", "Astolfo" }
    };

    pilihan = menu();
    while (pilihan != 0){
        switch(pilihan){
    case 1:
        listWaifu(p);
        break;
    case 2:
        show(s);
        break;
    case 3:
        if (token != 0){
            gacha(s, p, b, c);
            token--;
        }else{
            cout << "Token Habis" << endl;
        }
        break;
    case 4:
        cout << "Jumlah Token: "<< token << endl;
        break;
    case 5:
        pop(s, r);
        cout << "Divorce with " << r.waifu << endl;
        break;
        }

    pilihan = menu();
    }
    cout << "Game Ended" << endl;
}
