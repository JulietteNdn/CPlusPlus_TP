// Fichier Point.hpp
// Il manque les gardiens mais je vous laisse les ajouter,
// c'est comme en C

#ifndef POINT
#define POINT
#include <iostream>

class Point {
   // par défaut, tout est privé dans une "class"

   int x;
   int y;
   
   static int compteur;

 public:
  Point();
  Point(int,int);
  int getX();
  void setX(int);
  int getY();
  void setY(int);
  void DeplacerDe(int, int);
  void DeplacerVers(int, int);
  
  static int getCompteur();

};

#endif
