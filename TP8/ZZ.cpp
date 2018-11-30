#include "ZZ.h"

ZZ::ZZ(string prenom, string nom, double note) : prenom_(prenom), nom_(nom), note_(note) {}

/*
bool operator<(const ZZ &Pelo1, const ZZ &Pelo2){
    return Pelo1.note_ < Pelo2.note_ ; 
}
*/ 

bool operator<(const ZZ &Pelo1, const ZZ &Pelo2){
    string nom1 ;
    string nom2 ;

    nom1 = Pelo1.prenom_+Pelo1.nom_;
    nom2 = Pelo2.prenom_+Pelo2.nom_;

    return nom1 < nom2 ;
}

ostream & operator<<(ostream &flux, const ZZ &unPelo){
    flux << unPelo.prenom_ << " "<< unPelo.nom_ << " " << unPelo.note_;
    return flux;
}

