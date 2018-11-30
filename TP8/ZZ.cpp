#include "ZZ.h"

ZZ::ZZ(string prenom, string nom, double note) : prenom_(prenom), nom_(nom), note_(note) {}

bool operator<(const ZZ &Pelo1, const ZZ &Pelo2){
    return Pelo1.note_ < Pelo2.note_ ; 
} 

ostream & operator<<(ostream &flux, const ZZ &unPelo){
    flux << unPelo.prenom_ << " " << unPelo.note_;
}