#include <iostream>
#include <cstring>
#include "VideoGame.h"

using namespace std;

VideoGame :: VideoGame (char* titleMedia, int yearMedia, char* publisherVideoGame, int ratingVideoGame) : Media(titleMedia, yearMedia) {
  titleMedia = new char [80];
  strcpy(titleMedia, titleMedia);
  yearMedia = yearMedia;
  publisher = new char[80];
  strcpy(publisher, publisherVideoGame);
  rating = ratingVideoGame;
}

char* VideoGame :: getPublisher() {
  return publisher;
}

int VideoGame :: getRating() {
  return rating;
}

void VideoGame :: print() {
  cout << "title: " << title << endl;
  cout << "year: " << year << endl;
  cout << "publisher: " << publisher << endl;
  cout << "rating: " << rating << endl;
 

}

VideoGame :: ~VideoGame () {

}
