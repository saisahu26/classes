
#ifndef BETA
#define BETA
#include <iostream>
#include <cstring>



using namespace std;

class Media {
  public:
  Media();
  Media(char* titleMedia, int yearMedia);
  char*getTitle();
  int getYear();
  protected:
  char* title;
  int year;

};

#endif // BETA
