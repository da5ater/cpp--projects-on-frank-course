// Section 19
// Challenge 2
// Automated Grader
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int calc_degree(string test, string sol) {
  int degree = 0;
  for (size_t i = 0; i < sol.size(); i++) {
    if (sol[i] == test[i])
      degree++;
  }
  return degree;
}

int main() {
  ifstream in_file{"responses.txt"};
  string line;

  if (!in_file) {
    std::cerr << "error/n";
    return 1;
  }

  string sol;
  getline(in_file, sol);

  cout << std::setw(10) << "student" << std::setw(10) << right << "mark"
       << endl;

  cout << "----------------------\n";
  int count = 0;
  string stud;
  string test;
  while (!in_file.eof()) {
    if (count % 2 == 0) {
      in_file >> stud;
      cout << setw(10) << left << stud;
    } else {
      in_file >> test;
      cout << setw(10) << right << calc_degree(test, sol) << endl;
    }
    count++;
  }

  return 0;
}
