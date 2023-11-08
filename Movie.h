
#ifndef ALPHA
#define ALPHA

#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Movie: public Media {
 public:
  Movie();
  Movie(char* titleMedia, int yearMedia, char* directorMov, int ratingMov,int durationMov);
  char* getDirector();
  int getDur();
  int getRating();
 protected:
  char*director;
  int duration;
  int rating;
  
};

#endif // ALPHA
