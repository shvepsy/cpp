#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

int main() {
  char a[40];
  while (1)  {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    srand(t);
    //a = localtime(&t);
    int r = (rand() % 100000) ;
    cout << t << " ";
    strftime(a, sizeof(a), "[%H:%M:%S %D]", tm);
    cout << a << endl;
    usleep(r);
    // exit(0);
    // a++;
    // if (a == 100) break;
  }
  // int usleep(1000000);
  return 0;
}
