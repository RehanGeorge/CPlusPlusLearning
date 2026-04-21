#include "Movies.h"
#include <iostream>

Movies::Movies() {}
Movies::~Movies() {}

void Movies::add_movie(const std::string& name, Rating rating, int watched) {
	// Check if movie already exists by name
	for (Movie &movie : movies) {
		if (movie.get_name() == name) {
			std::cout << "Movie already exists: " << name << std::endl;
			return;
		}
	}
	movies.emplace_back(name, rating, watched);
	std::cout << "Added movie: " << name << std::endl;
}

void Movies::increment_watch_count(const std::string& name) {
	for (Movie &movie : movies) {
		if (movie.get_name() == name) {
			movie.increment_watch_count();
			std::cout << "Incremented watch count for: " << name << std::endl;
			return;
		}
	}
	std::cout << "Movie not found: " << name << std::endl;
}

void Movies::display() const {
	if (movies.empty()) {
		std::cout << "No movies to display." << std::endl;
		return;
	}
	for (const auto& movie : movies) {
		movie.display();
	}
}

