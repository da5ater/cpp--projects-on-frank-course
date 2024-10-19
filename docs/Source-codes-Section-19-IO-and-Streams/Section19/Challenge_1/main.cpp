// Section 19
// Challenge 1
// Formatting output
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct City {
  std::string name;
  long population;
  double cost;
};

// Assume each country has at least 1 city
struct Country {
  std::string name;
  std::vector<City> cities;
};

struct Tours {
  std::string title;
  std::vector<Country> countries;
};

void ruler() {
  cout << "01234567890123456789012345678901234567890123456789" << endl;
};

int main() {
  Tours tours{
      "Tour Ticket Prices from Miami",
      {
          {
              "Colombia",
              {{"Bogota", 8778000, 400.98},
               {"Cali", 2401000, 424.12},
               {"Medellin", 2464000, 350.98},
               {"Cartagena", 972000, 345.34}},
          },
          {
              "Brazil",
              {{"Rio De Janiero", 13500000, 567.45},
               {"Sao Paulo", 11310000, 975.45},
               {"Salvador", 18234000, 855.99}},
          },
          {
              "Chile",
              {{"Valdivia", 260000, 569.12}, {"Santiago", 7040000, 520.00}},
          },
          {"Argentina", {{"Buenos Aires", 3010000, 723.77}}},
      }};

  ruler();
  cout << "--------------------------------------------------" << endl;
  cout << endl;
  std::cout << setw(10) << "  " << tours.title << std::endl;
  cout << endl;

  cout << setw(15) << left << "country" << setw(15) << left << "city"
       << setw(15) << left << "population" << setw(15) << left << "price"
       << endl;
  cout << "--------------------------------------------------" << endl;
  for (auto country : tours.countries) { // loop through the countries
    std::cout << setw(15) << left << country.name;
    for (auto city :
         country.cities) { // loop through the cities for each country
      std::cout << setw(15) << left << city.name << setw(15) << left
                << city.population << setw(15) << left << city.cost << std::endl
                << setw(15) << left << " ";
    }
    cout << std::endl;
  }

  std::cout << std::endl << std::endl;
  return 0;
}