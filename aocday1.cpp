#include <fstream>
#include <iostream>
using namespace std;

int main() {
  int total = 0;
  string myText;
  int highest = 0;

  ifstream numFile("AOC22DAY1.txt"); //reading from input file

  while (getline(numFile, myText)) {
    if (myText.empty()) {
      return total;
    } else {
      total += stoi(myText);
    }
    
    if (total > highest) {
      highest = total;
    }
  }
  cout << highest;
  return 0; //success indicator 
}