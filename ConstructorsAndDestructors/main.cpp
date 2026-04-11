#include <stdio.h>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    // Overloaded Constructors
    Player() {
        cout << "No args constructor called" << endl;
    }
    Player(std::string name) {
        cout << "String arg constructor called" << endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called" << endl;
    }
    ~Player() {
        cout << "Destructor called for " << name << endl;
    }
}

int main(int argc, char **argv)
{
	printf("hello world\n");
	return 0;
}
