
#ifndef DELTA
#define DELTA
#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class VideoGame : public Media {

 public:
  VideoGame();
  VideoGame(char* titleMedia, int yearMedia, char*publisherVideoGame, int ratingVideoGame);
  char* getPublisher();
  int getRating();
  void print();
  ~VideoGame();
 protected:
  char* publisher;
  int rating;

};

#endif // DELTA
