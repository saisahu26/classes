#include <iostream>
#include <cstring>
#include "Movie.h"

using namespace std;

Movie :: Movie(char* titleMedia, int yearMedia, char* directorMov, int ratingMov, int durationMov) : Media(titleMedia, yearMedia) {
  strcpy(titleMedia, titleMedia);
  strcpy(director, director);
  int year = yearMedia;
  int duration = durationMov;
  int rating = ratingMov;
									       }

char* Movie :: getDirector() {
  return director;
}

int Movie :: getDur() {
  return duration;
}

int Movie :: getRating() {
  return rating;
}
