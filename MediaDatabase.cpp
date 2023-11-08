#include <iostream>
#include <cstring>
#include "Movie.h"
#include "Music.h"
#include "VideoGame.h"
#include <vector>

using namespace std;


void addMedia(vector<Media*> &MediaLs);
void printMedia(vector<Media> &MediaLs);

int main() {
  char input[80];
  vector<Media*> MediaLs;
  cout <<"Enter print or remove" << endl;
  cin >> input;
  cin.ignore(256, '\n');
  if(strcmp(input, "add") == 0){
  addMedia(MediaLs);
  }
  else if (strcmp(input, "print") == 0) {
      printMedia(MediaLs);
    }
  return 0;
}


void add (vector<Media*> &MediaLs) { //the class that hold the information assigned to each student (name, id, and gpa)
  char mediaVar[80];
  cout << "what type of media do you want to add?" << endl;
  cin.getline(mediaVar, 80);
  if (strcmp(mediaVar, "movie") == 0) {

    char* title;
    char* direct;
    int year = 0;
    int dur = 0;
    int rate = 0;
    cout << "enter title" << endl;
    cin >> title;
    cin.ignore(256, '\n');
    cout << "enter director" << endl;
    cin >> direct;
    cin.ignore(256, '\n');
    cout << "enter year" << endl;
    cin >> year;
    cin.ignore(256, '\n');
    cout << "enter duration" << endl;
    cin >> dur;
    cin.ignore(256, '\n');
    cout <<"enter a rating" << endl;
    cin >> rate;
    cin.ignore(256, '\n');
    Movie* mov = new Movie(title, year, direct, rate, dur);
    MediaLs.push_back(mov);
  }
  else if (strcmp(mediaVar, "music") == 0) {

    char* title;
    char* artist;
    int year = 0;
    int dur = 0;
    int publisher = 0;
    cout << "enter title" << endl;
    cin >> title;
    cin.ignore(256, '\n');
    cout << "enter artist" << endl;
    cin >> artist;
    cin.ignore(256, '\n');
    cout << "enter year" << endl;
    cin >> year;
    cin.ignore(256, '\n');
    cout << "enter duration" << endl;
    cin >> dur;
    cin.ignore(256, '\n');
    cout <<"enter a pubslisher" << endl;
    cin >> publisher;
    cin.ignore(256, '\n');
    Music* mus = new Music(title, year, artist, publisher, dur);
    MediaLs.push_back(mus);
  }

    else if (strcmp(mediaVar, "videogames") == 0) {

    char* title;
    int year = 0;
    int rate = 0;
    int publisher = 0;
    cout << "enter title" << endl;
    cin >> title;
    cin.ignore(256, '\n');
    cout << "enter year" << endl;
    cin >> year;
    cin.ignore(256, '\n');
    cout << "enter rating" << endl;
    cin >> rate;
    cin.ignore(256, '\n');
    cout <<"enter a publisher" << endl;
    cin >> publisher;
    cin.ignore(256, '\n');
    VideoGame* vd = new VideoGame(title, year, publisher, rate);
    MediaLs.push_back(vd);
  }


  
}
  //  void search(vector<Media*


