#include <iostream> 


using namespace std;

int main()
{    
    /*
     * prompt the user for the number of small and large rooms they want to create
     * cout the numbers the user wanted
     * prompt the estimated price of small and large room
     * prompt the cost of the order
     * prompt the cost of taxing
     * prompt the price
     * prompt the expiring date
     */
     
     
     cout << "Hello, this is Frank's carpet cleaning service \n";
     cout << "how many large rooms you would like to book ? \n";
      int LargeRoom {0};
     cin >> LargeRoom;
     cout << "how many small rooms you would like to book ? \n";
      int SmallRoom {0};
     cin >> SmallRoom;
     
     cout << "=============================";
     const int SmallRoomCharge {25};
     const int LargeRoomCharge {35};
     const double tax {0.06};
     
     cout << "\nEistmate for carpet cleaning service \n";
     cout << "number of large rooms reserved : " << LargeRoom << endl;
     cout << "number of Small rooms reserved : " << SmallRoom << endl;
     int cost =(SmallRoom * SmallRoomCharge) + (LargeRoom * LargeRoomCharge);
     cout << "cost : " << cost <<endl;
     double TaxRate = cost * tax;
     cout << "Tax : " << TaxRate << endl;
     
     cout << "============================= \n";
     
     cout << "Total : " << cost + TaxRate ; 
     
     
     
    
    return 0;
}