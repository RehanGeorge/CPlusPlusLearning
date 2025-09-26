#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to the carpet cleaning service" << endl;
        
    const int price_per_small_room {25};
    const int price_per_large_room {35};
    const float tax_rate{0.06};
    const int estimate_expiry{30};
    
    cout << "How many small rooms($" << price_per_small_room << ") do you need cleaned?" <<  endl;
    
    int small_rooms {0};
    cin >> small_rooms;
    

    cout << "How many large rooms($" << price_per_large_room << ") do you need cleaned? " << endl;
    
    int large_rooms{0};
    cin >> large_rooms;
    
    cout << "Estimate for carpet cleaning service\n";
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    
    int total_cost {(small_rooms * price_per_small_room) + (large_rooms * price_per_large_room)};
    cout << "Cost: $" << total_cost << endl;
    cout << "Tax: $" << total_cost * tax_rate << endl;
    
    cout << "====================================" << endl;
    cout << "Total estimate: $" << total_cost + (total_cost * tax_rate) << endl;
    cout << "This estimate is valid for " << estimate_expiry << "days" << endl;
    
    return 0;
}