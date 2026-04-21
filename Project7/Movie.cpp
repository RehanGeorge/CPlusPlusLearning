#include "Movie.h"
#include <iostream>

std::string get_rating_string(Rating rating)
{
    switch (rating)
    {
    case Rating::G:
        return "G";
    case Rating::PG:
        return "PG";
    case Rating::PG_13:
        return "PG-13";
    case Rating::R:
        return "R";
    default:
        return "Unknown";
    }
}

Movie::Movie(std::string name, Rating rating, int watched)
    :name{name}, rating{rating}, watched{watched}
{

}

Movie::~Movie()
{
}

std::string Movie::get_name() const
{
    return name;
}

int Movie::get_watch_count() const
{
    return watched;
}

std::string Movie::get_rating() const
{
    return get_rating_string(rating);
}

void Movie::display() const
{
    std::cout << name << ", " << get_rating_string(rating) << ", " << watched << std::endl;
}

void Movie::increment_watch_count()
{
    ++watched;
}