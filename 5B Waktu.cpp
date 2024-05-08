#include <iostream>
#include <ctime>

using namespace std;

void Waktu() {
   time_t t;
   struct tm * tt;
   time (&t);
   tt = localtime(&t);
   cout << asctime(tt);
}
