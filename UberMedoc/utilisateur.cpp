#include "utilisateur.h"
#include <iostream>
using namespace std;

Utilisateur::Utilisateur(){}

Utilisateur::Utilisateur(string nomU, string prenomU, string adresseU, string mailU, string mdpU){
    nom = nomU;
    prenom = prenomU;
    adresse = adresseU;
    mail = mailU;
    mdp = mdpU;
}

Utilisateur::~Utilisateur(){}


void Utilisateur::afficherDetails() {
    cout<<endl<< "Nom : " <<nom<<endl;
    cout<< "Prenom : "<<prenom<<endl;
    cout<< "Adresse : "<<adresse<<endl;
    cout<< "Adresse Mail : "<<mail<<endl;
}

string Utilisateur::getNom(){
    return nom;
}

string Utilisateur::getPrenom(){
    return prenom;
}

string Utilisateur::getAdresse(){
    return adresse;
}

string Utilisateur::getMail(){
    return mail;
}

string Utilisateur::getMdp(){
    return mdp;
}
