#include <iostream>
#include "Movies.h"

int main() {
	Movies my_movies;

	my_movies.add_movie("Inception", Rating::PG_13, 5);
	my_movies.add_movie("The Lion King", Rating::G, 3);
	my_movies.add_movie("Inception", Rating::PG_13, 5); // Duplicate, should not add

	my_movies.increment_watch_count("Inception");
	my_movies.increment_watch_count("Avatar"); // Not found

	std::cout << "\nAll movies:" << std::endl;
	my_movies.display();

	return 0;
}
