#include "Vector.h"

Vector::Vector(size_t size) : elements(size) {}

size_t Vector::size() const {
    return elements.size();
}

double& Vector::at(size_t index) {
    if (index >= elements.size()) {
        throw std::out_of_range("poza zakresem");
    }
    return elements[index];
}

const double& Vector::at(size_t index) const {
    if (index >= elements.size()) {
        throw std::out_of_range("poza zakresem");
    }
    return elements[index];
}

Vector addVectors(const Vector& v1, const Vector& v2) {
    if (v1.size() != v2.size()) {
        throw std::invalid_argument("wektory muszą mieć ten sam rozmiar");
    }
    Vector result(v1.size());
    for (size_t i = 0; i < v1.size(); ++i) {
        result.at(i) = v1.at(i) + v2.at(i);
    }
    return result;
}

Vector subtractVectors(const Vector& v1, const Vector& v2) {
    if (v1.size() != v2.size()) {
        throw std::invalid_argument("wektory musza miec ten sam rozmiar");
    }
    Vector result(v1.size());
    for (size_t i = 0; i < v1.size(); ++i) {
        result.at(i) = v1.at(i) - v2.at(i);
    }
    return result;
}

Vector multiplyVectorByScalar(const Vector& v, double scalar) {
    Vector result(v.size());
    for (size_t i = 0; i < v.size(); ++i) {
        result.at(i) = v.at(i) * scalar;
    }
    return result;
}

void Vector::display() const {
    std::cout << "{ ";
    for (const auto& element : elements) {
        std::cout << element << " ";
    }
    std::cout << "}" << std::endl;
}

void Vector::input() {
    std::cout << "Podaj " << elements.size() << " elementy: ";
    for (auto& element : elements) {
        std::cin >> element;
    }
}
