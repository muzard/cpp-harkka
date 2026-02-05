#include "Point3d.hpp"
#include "Vector3d.hpp"
#include <iostream>

class Vector3d;

Point3d::Point3d(double x, double y, double z)
    : m_x{x}, m_y{y}, m_z{z}
    {}

void Point3d::print() const
{
	std::cout << "Point(" << m_x << ", " << m_y << ", " << m_z << ")\n";
}

void Point3d::moveByVector(const Vector3d& v)
{
    this->m_x += v.m_x;
    this->m_y += v.m_y;
    this->m_z += v.m_z;
}
