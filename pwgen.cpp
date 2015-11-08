#include <iostream>
#include <cstdlib>

using namespace std;

class Gen {
public:
  int map[59];
  char* getPsw(int l, char t) {
    char pw;

    for (int j = 0; j < l; j++) {
      srand(time(NULL)-j);
      pw = char(rand()%62);
      //pw = char((double)(rand())/RAND_MAX * 127);
      cout << (char)map[pw];
      //return pw;
    }
    cout << endl;
  }
};

int main(int argc, char* argv[]) {
  Gen gen;
  int l = 12;
  int t = 'a';
  int c = 0;

/*  switch (t) {
    case 0:
    {
      gen.map if int pw = (i > 47 & i < 58);
      break;
    }
    case 'a':
    {
      int pw = (i > 47 & i < 58 or i > 96 & i < 123);
      break;
    }
    case 'A':
    {
      int pw = (i > 47 & i < 58 or i > 64 & i < 91 or i > 96 & i < 123);
      break;
    }
  }*/

  for (int i = 0; i < 123 ; i++) {
    if (i > 47 & i < 58 or i > 64 & i < 91 or i > 96 & i < 123) {
      gen.map[c] = i ;
      c++;
    }
  }

  char* pswd = gen.getPsw(l,t);
  return 0;
  }
