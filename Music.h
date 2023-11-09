#ifndef GAMMA
#define GAMMA
#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Music : public Media {

 public:
  Music();
  Music(char* titleMedia, int yearMedia, char* artistMusic, char* publisherMedia, int durationMusic);
  char* getArtist();
  int getDuration();
  char* getPublisher();
  void print();
  ~Music();
 protected:
  char* artist;
  int duration;
  char* publisher;

};

#endif // GAMMA 
