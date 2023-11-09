#include <iostream>
#include <cstring>
#include "Movie.h"

using namespace std;

Movie :: Movie(char* titleMedia, int yearMedia, char* directorMov, int ratingMov, int durationMov) : Media(titleMedia, yearMedia) {
  strcpy(titleMedia, titleMedia);
  strcpy(director, director);
   year = yearMedia;
   duration = durationMov;
   rating = ratingMov;
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

void Movie :: print() {
  cout << "title: " << title << endl;
  cout << "year: " << year << endl;
  cout << "director: " << director << endl;
  cout << "rating: " << rating << endl;
  cout << "duration: " << duration << endl;

}

Movie :: ~Movie () {

}
