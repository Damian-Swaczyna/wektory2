#ifndef VECTOR_H
#define VECTOR_H

#include <vector>
#include <iostream>
#include <stdexcept>

class Vector {
private:
    std::vector<double> elements;

public:
    Vector(size_t size);

    size_t size() const;
    double& at(size_t index);
    const double& at(size_t index) const;

    void display() const;
    void input();
};

Vector addVectors(const Vector& v1, const Vector& v2);
Vector subtractVectors(const Vector& v1, const Vector& v2);
Vector multiplyVectorByScalar(const Vector& v, double scalar);

#endif // VECTOR_H

