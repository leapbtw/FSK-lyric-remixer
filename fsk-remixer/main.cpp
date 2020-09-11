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
const int intrit1 = 10;
string ritornellop1[intrit1] = {"e sai che ho detto '", "negro siamo ", "catene ", "ma non con il ", "solo toc-toc, ", "penso alla ", "la bagno come ", "Ta-ta-taxi e FSK uguale a ", "E dentro il bomber di ",
    "Uno, due, tre, "};
const int intrit2 = 11;
string ritornellop2[intrit2] = {" stop'", " pura", ", non credo in Jesus", " levo la vita agli infami", " in pigggiama", " tu che parli?", ", si", " in Italia", " che fa più luce il polo nord", " stop", " cocaleros"};

const int intversipre = 7;
string versipre[intversipre] = {" nella Cuki", " Vanno pazzi per il cuoco", " sono benzodiazepina, ehi", " freddo con il denim", " sei solo uno snitch, te lo leggo in faccia", " e' come un frontale contro un muro", " non sono frocio, lo amo davvero"};
const int intversiIntegri = 11;
string versiIntegri[intversiIntegri] = {"Non fotterò piu' con quella merda di Xanax", "No, tu non sei come me, ha", "Da noi è sempre mezzogiorno", "Sapo in tasca ha una pistola (attento)", "Sta piovendo cash (ok)", "Co-coca-cola, sembra il Monte Everest", "Polka-a-a-a-a, bro, ah", "Erba nel culo, vengo da Amsterdam", "Sembra che ho il cazzo lungo un metro", "Big Mac, mangio tre chopper", "Ballo la polka, faccio tre mosse"};
const int intversipost = 8;
string versipost[intversipost] = {"siamo nel Club con dieci ", "Sapo in tasca ha ", "Ciabattine Armani, Taxi B, Gucci e ", "Spostavamo pacchi, ora alziamo ", "Sai che lo faccio col gang, mica lo faccio con ", "Scrivo cose sopra i treni, sembro ", "Sexboy, sopra al polka sembro ", "Greg Willen mi fa sentire "};

const int intecho = 12;
string echo[intecho] = {" (attento)", " (ok)", " (rosa)", " (denim)", " (swag)", " (c'ho paura)", " (sexy)", " (tu-tu-tu)", " (come un'escort)", " (lunghissimo)", " (cago l'Olanda)", " (snitch, snitch)"};

//done
const int intnomi = 20;
string nomi[intnomi] = {"la coca", "la neve", "il cash", "la tua tipa", "lammafia", "ollare", "ollare", "un mitra", "il ferro", "un chilo di ganja", "puttana", "cookie", "drughi", "ansia", "il polo nord", "il bomber di moncler", "la crack", "FSK", "la mia gang", "la mafia"};
const int intwriters = 7;
string writers[intwriters] = {"FSK ", "gang ", "ollare ollare ollare ", "ollare ", "baing baing baing, si ", "ollare the gang ", "Greg Willen "};

const int intversi = 4;
string versi[intversi] = {"Con i soldi della droga, ehi", "Ho comprato una pistola, ehi", "Sogno settimana al caldo, ohi", "Rischio settimane al gabbio, ohi"};

int main() {
    srand(time(NULL));
    cout << endl << endl << endl;
    //intro
    cout << writers[rand()%intwriters] << writers[rand()%intwriters] << endl << writers[rand()%intwriters] << endl << writers[rand()%intwriters] << endl << endl;
    
    //verso 1
    bool gangbang = true;
    if ((rand()%10)< 4) gangbang = false; //rand se la frase finisce con GANG e BANG
    cout << nomi[rand()%intnomi] << versipre[rand()%intversipre] << endl;
    cout << versipost[rand()%intversipost] << nomi[rand()%intnomi] << endl;
    cout <<ritornellop1[rand()%intrit1] << nomi[rand()%intnomi] << ritornellop2[rand()%intrit2] << endl;
    cout << versipost[rand()%intversipost] << nomi[rand()%intnomi];
    if (gangbang == false) cout << " BANG!" << endl;
    else cout << endl;
    cout << nomi[rand()%intnomi] << versipre[rand()%intversipre];
    if (gangbang == false) cout << ", GANG!" << endl;
    else cout << endl;
    
    //ritornello
    int versiIntegro1 = rand()%intversiIntegri;
    int ritornelloN = rand()%intrit1;
    int ritornelloN2 = rand()%intrit2;
    int ritornelloN3 = rand()%intrit1;
    int ritornelloN4 = rand()%intrit2;
    int nomiN = rand()%intnomi;
    cout << endl << versiIntegri[versiIntegro1] << endl;
    if ((rand()%10) < 5) {
        cout << ritornellop1[ritornelloN] << nomi[nomiN] << ritornellop2[ritornelloN2] << echo[rand()%intecho] << endl;
    }
    else {
        cout << versi[rand()%intversi] << echo[rand()%intecho] << endl;
    }
    cout << versiIntegri[rand()%intversiIntegri] << endl;
    cout << ritornellop1[ritornelloN] << nomi[nomiN] << ritornellop2[ritornelloN2] << echo[rand()%intecho] << endl;
    cout << versiIntegri[versiIntegro1] << endl;
    cout << ritornellop1[ritornelloN3] << nomi[nomiN] << ritornellop2[ritornelloN4] << echo[rand()%intecho] << endl;
    
    
    cout << endl;
    //verso 2
    cout << nomi[rand()%intnomi] << versipre[rand()%intversipre] << endl;
    cout << writers[rand()%intwriters] << writers[rand()%intwriters] << endl;
    cout <<ritornellop1[rand()%intrit1] << nomi[rand()%intnomi] << ritornellop2[rand()%intrit2] << endl;
    cout << versipost[rand()%intversipost] << nomi[rand()%intnomi] << "?"<< endl;
    if ((rand()%10) > 5) cout << "ollare ollare ollare gang" << endl; // idk the rand stuff
    else cout << versipost[rand()%intversipost] << nomi[rand()%intnomi] << endl;
    cout << nomi[rand()%intnomi] << ", " << nomi[rand()%intnomi] << endl;
    cout << versipost[rand()%intversipost] << nomi[rand()%intnomi] << "!" << endl;
    
    //ritornello2
    cout << endl << versiIntegri[versiIntegro1] << endl;
    cout << ritornellop1[ritornelloN] << nomi[nomiN] << ritornellop2[ritornelloN2] << endl;
    cout << versiIntegri[rand()%intversiIntegri] << endl;
    cout << ritornellop1[ritornelloN] << nomi[nomiN] << ritornellop2[ritornelloN2] << endl;
    cout << versiIntegri[versiIntegro1] << endl;
    cout << ritornellop1[ritornelloN3] << nomi[nomiN] << ritornellop2[ritornelloN4] << endl;
    
    //
    cout << endl;
    //pre ritornello
    cout << nomi[rand()%intnomi] << versipre[rand()%intversipre] << endl;
    cout << versipost[rand()%intversipost] << nomi[rand()%intnomi] << endl;
    cout <<ritornellop1[rand()%intrit1] << nomi[rand()%intnomi] << ritornellop2[rand()%intrit2] << endl;
    //semi ritornello finale
    cout << versiIntegri[rand()%intversiIntegri] << endl;
    cout << ritornellop1[ritornelloN] << nomi[nomiN] << ritornellop2[ritornelloN2] << endl;
    cout << versiIntegri[versiIntegro1] << endl;
    cout << ritornellop1[ritornelloN3] << nomi[nomiN] << ritornellop2[ritornelloN4] << endl;
    
    
    //end
    cout << endl << endl << endl;
}

