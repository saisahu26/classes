#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

Media::Media() {
  
}

Media::Media(char* titleMedia, int yearMedia) {
  title = new
    char [80];
  strcpy(title, titleMedia);
  year = yearMedia;
}

char* Media::getTitle() {
  return title;
}

int Media::getYear() {
  return year;
}
