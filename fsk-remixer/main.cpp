//
//  main.cpp
//  fsk-remixer
//
//  Created by Macintosh HD on 21/07/20.
//  Copyright © 2020 leapbtw. All rights reserved.
//

#include <iostream>
using namespace std;
//done
string ritornellop1[10] = {"e sai che ho detto '", "negro siamo ", "catene ", "ma non con il ", "solo toc-toc, ", "penso alla ", "la bagno come ", "Ta-ta-taxi e FSK uguale a ", "E dentro il bomber di ", "Uno, due, tre, "};
string ritornellop2[10] = {" stop'", " pura", ", non credo in Jesus", " levo la vita agli infami", " in pigggiama", " tu che parli?", ", si", " in Italia", " che fa più luce il polo nord", " stop"};


string versipre[3] = {" nella Cuki", " Vanno pazzi per il cuoco", " sono benzodiazapina, ehi"};
string versiIntegri[6] = {"Non fotterò piu' con quella merda di Xanax", "No, tu non sei come me, ha", "Da noi è sempre mezzogiorno", "Sapo in tasca ha una pistola (attento)", "Sta piovendo cash (ok)"};
string versipost[5] = {"siamo nel Club con dieci ", "Sapo in tasca ha ", "Ciabattine Armani, Taxi B, Gucci e ", "Spostavamo pacchi, ora alziamo ", "Sai che lo faccio col gang, mica lo faccio con "};

//done
string nomi[20] = {"la coca", "la neve", "il cash", "la tua tipa", "lammafia", "ollare", "ollare", "un mitra", "il ferro", "un chilo di ganja", "puttana", "cookie", "drughi", "ansia", "il polo nord", "il bomber di moncler", "la crack", "FSK", "la mia gang", "la mafia"};
string writers[7] = {"FSK ", "gang ", "ollare ollare ollare ", "ollare ", "4L, si ", "ollare the gang ", "fareshi "};


int main() {
    srand(time(NULL));
    cout << endl << endl << endl;
    //intro
    cout << writers[rand()%7] << writers[rand()%7] << endl << writers[rand()%7] << endl << writers[rand()%7] << endl << endl;
    
    //verso 1
    bool gangbang = true;
    if ((rand()%10)< 4) gangbang = false;
    cout << nomi[rand()%20] << versipre[rand()%3] << endl;
    cout << versipost[rand()%5] << nomi[rand()%20] << endl;
    cout <<ritornellop1[rand()%10] << nomi[rand()%20] << ritornellop2[rand()%10] << endl;
    cout << versipost[rand()%5] << nomi[rand()%20];
    if (gangbang == false) cout << " BANG!" << endl;
    else cout << endl;
    cout << nomi[rand()%20] << versipre[rand()%3];
    if (gangbang == false) cout << ", gang!" << endl;
    else cout << endl;
    
    //ritornello
    int versiIntegro1 = rand()%6;
    int ritornelloN = rand()%10;
    int ritornelloN2 = rand()%10;
    int ritornelloN3 = rand()%10;
    int ritornelloN4 = rand()%10;
    int nomiN = rand()%20;
    cout << endl << versiIntegri[versiIntegro1] << endl;
    cout << ritornellop1[ritornelloN] << nomi[nomiN] << ritornellop2[ritornelloN2] << endl;
    cout << versiIntegri[rand()%6] << endl;
    cout << ritornellop1[ritornelloN] << nomi[nomiN] << ritornellop2[ritornelloN2] << endl;
    cout << versiIntegri[versiIntegro1] << endl;
    cout << ritornellop1[ritornelloN3] << nomi[nomiN] << ritornellop2[ritornelloN4] << endl;
    
    
    cout << endl << endl;
    //verso 2
    cout << nomi[rand()%20] << versipre[rand()%3] << endl;
    cout << writers[rand()%7] << writers[rand()%7] << endl;
    cout <<ritornellop1[rand()%10] << nomi[rand()%20] << ritornellop2[rand()%10] << endl;
    cout << versipost[rand()%5] << nomi[rand()%20] << "?"<< endl;
    if ((rand()%10) > 5) cout << "ollare ollare ollare gang" << endl;
    else cout << versipost[rand()%5] << nomi[rand()%20] << endl;
    cout << nomi[rand()%20] << ", " << nomi[rand()%20] << endl;
    cout << versipost[rand()%5] << nomi[rand()%20] << "!" << endl;
    
    //ritornello2
    cout << endl << versiIntegri[versiIntegro1] << endl;
    cout << ritornellop1[ritornelloN] << nomi[nomiN] << ritornellop2[ritornelloN2] << endl;
    cout << versiIntegri[rand()%6] << endl;
    cout << ritornellop1[ritornelloN] << nomi[nomiN] << ritornellop2[ritornelloN2] << endl;
    cout << versiIntegri[versiIntegro1] << endl;
    cout << ritornellop1[ritornelloN3] << nomi[nomiN] << ritornellop2[ritornelloN4] << endl;
    
    //
    cout << endl << endl;
    //pre ritornello
    cout << nomi[rand()%20] << versipre[rand()%3] << endl;
    cout << versipost[rand()%5] << nomi[rand()%20] << endl;
    cout <<ritornellop1[rand()%10] << nomi[rand()%20] << ritornellop2[rand()%10] << endl;
    //semi ritornello finale
    cout << versiIntegri[rand()%6] << endl;
    cout << ritornellop1[ritornelloN] << nomi[nomiN] << ritornellop2[ritornelloN2] << endl;
    cout << versiIntegri[versiIntegro1] << endl;
    cout << ritornellop1[ritornelloN3] << nomi[nomiN] << ritornellop2[ritornelloN4] << endl;
    
    
    //end
    cout << endl << endl << endl;
}

