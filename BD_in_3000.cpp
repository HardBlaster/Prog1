#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int fuge(int year, int day) {
  while(year<3000) {
    year++;
    if(((year % 4) == 0) && ((year % 100) == 0) || (year % 400) == 0 ) {day = (day + 3 ) % 7 } 
    else { year = (year + 2) % 7; }
    }
  return year;
  }

int main() {
  int year = 2000, mm = 7, day = 25;
  tm time_in = {0,0,0, day, mm-1, year-1900};
  time_t time_temp = std::mktime(&time_in);
  const std::tm * time_out = std::localtime(&time_temp);
  string dd;
  switch (fuge(year,static_cast<int>(time_out->tm_wday)))
  {
    case 0: dd="Sunday";
    break;
    case 6: dd="Saturday";
    break;
    case 5: dd="Friday";
    break;
    case 4: dd="Thursday";
    break;
    case 3: dd="Wednesday";
    break;
    case 2: dd="Tuesday";
    break;
    case 1: dd="Monday";
    break;
  }
  cout<<"BD in 3000: "<< dd <<"\n";

  return 0;
}
