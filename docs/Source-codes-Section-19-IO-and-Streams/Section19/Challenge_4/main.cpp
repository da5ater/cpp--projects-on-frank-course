// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  ifstream in_file{"romeoandjuliet.txt"};
  ofstream out_file{"copy"};

  if (!in_file) {
    cerr << "error in input\n";
    return 1;
  }

  if (!out_file) {
    cerr << "error in output file \n";
    return 1;
  }

  string line;
  int count = 0;

  while (getline(in_file, line)) {
    if (!line.empty()) {
      count++;
      out_file << std::setw(10) << left << to_string(count) << right << line
               << endl;
    }
  }

  return 0;
}
