#include <iostream> // include standard input-output library
#include <cstring> // include c-string library for string manipulation
#include "media.h" // include media class header file


media::media(){
  title = new char[50];
}//making a new media object

void media::setyear(int y){//function for setting year
  year = y;
}

void media::setname(char* newtitle){//function for setting name
  delete[] title;
  title = new char[50];
  strcpy(title, newtitle);
}

int media::getyear(){ //function for getting year
  return year;
}

char* media::getname(){//function for getting name
  return title;
}
