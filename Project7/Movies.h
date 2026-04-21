#ifndef MOVIES_H
#define MOVIES_H
#include "Movie.h"
#include <vector>

class Movies
{
private:
    std::vector<Movie> movies;
public:
    void add_movie(const std::string& name, Rating rating, int watched);
    void increment_watch_count(const std::string& name);
    void display() const;
    Movies();
    ~Movies();
};

#endif // MOVIES_H
