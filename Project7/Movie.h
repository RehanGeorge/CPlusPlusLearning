#ifndef MOVIE_H
#define MOVIE_H
#include <string>

enum class Rating { G, PG, PG_13, R };

class Movie
{
private:
    std::string name;
    Rating rating;
    int watched;
public:
    std::string get_name() const;
    std::string get_rating() const;
    int get_watch_count() const;
    void increment_watch_count();
    void display() const;
    
    Movie(std::string name = "None", Rating rating = Rating::G, int watched = 0);
    ~Movie();

};

#endif // MOVIE_H
