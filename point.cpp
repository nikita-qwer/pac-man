#include "point.hpp"
#include <tuple> // pentru std::tie

Point::Point(int _x, int _y) : x(_x), y(_y) {}

Point::Point(const Point& other) = default;

Point& Point::operator=(const Point& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

bool Point::operator==(const Point& other) const noexcept {
    return std::tie(x, y) == std::tie(other.x, other.y);
}

bool Point::operator<(const Point& other) const noexcept {
    return std::tie(x, y) < std::tie(other.x, other.y);
}

std::istream& operator>>(std::istream& in, Point& point) {
    in >> point.x >> point.y;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
    out << "(" << point.x << ", " << point.y << ")";
    return out;
}
