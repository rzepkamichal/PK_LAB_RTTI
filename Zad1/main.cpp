#include <iostream>
#include "Artist.h"
#include "Musician.h"
#include "Pianist.h"
using namespace std;

int main() {

    Artist* artist = new Artist;
    Artist* musician = new Musician;
    Artist* pianist = new Pianist;

    //przypadki testowe rzutowania
    Musician* p1 = dynamic_cast<Musician*>(musician);
    Pianist* p2 = dynamic_cast<Pianist*>(musician);
    Musician* p3 = dynamic_cast<Musician*>(pianist);
    Musician* p4 = dynamic_cast<Musician*> (artist);
    Pianist* p5 = dynamic_cast<Pianist*>(artist);

    //wypisanie adresów przypisanych do wskaźników przez rzutowanie
    cout << p1 << endl; // oczekiwany poprawny adres
    cout << p2 << endl; // oczekiwany nullptr
    cout << p3 << endl; // oczekiwany poprawny adres
    cout << p4 << endl; // oczekiwany nullptr
    cout << p5 << endl; // oczekiwany nullptr

    return 0;
}