#include <vector>
#include <iostream>

using namespace std;

int main() {
//    vector <char> vowels; // empty
//    vector <char> vowels (5); // 5 initialized to 0
//    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
//    
//    cout << vowels[0] << endl;
//    cout << vowels[4] << endl;
//    
//    cout << vowels.size();
//    
//    cout << vowels.at(4);

    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "Elements in vector 1: " << vector1.at(0) << " & " << vector1.at(1) << endl;
    cout << "Size of vector 1: " << vector1.size() << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "Elements in vector 2: " << vector2.at(0) << " & " << vector2.at(1) << endl;
    cout << "Size of vector 2: " << vector2.size() << endl;
    
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "Elements in vector 2d: " << vector_2d.at(0).at(0) << " & " << vector_2d.at(0).at(1) << endl;
    cout << "Elements in vector 2d: " << vector_2d.at(1).at(0) << " & " << vector_2d.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;
    
    cout << "Elements in vector 2d: " << vector_2d.at(0).at(0) << " & " << vector_2d.at(0).at(1) << endl;
    cout << "Elements in vector 2d: " << vector_2d.at(1).at(0) << " & " << vector_2d.at(1).at(1) << endl;
    
    cout << "Elements in vector 1: " << vector1.at(0) << " & " << vector1.at(1) << endl;
}