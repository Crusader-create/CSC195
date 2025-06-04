#pragma once

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <stdexcept>
#include <numeric>

namespace mathlib {

    template<typename T>
    class Fraction {
    private:
        T numerator;
        T denominator;

        void simplify() {
            T gcd = std::gcd(numerator, denominator);
            numerator /= gcd;
            denominator /= gcd;
            if (denominator < 0) {
                numerator *= -1;
                denominator *= -1;
            }
        }

    public:
        Fraction(T num = 0, T denom = 1) : numerator(num), denominator(denom) {
            if (denominator == 0) {
                throw std::invalid_argument("Denominator cannot be zero");
            }
            simplify();
        }

        T getNumerator() const { return numerator; }
        T getDenominator() const { return denominator; }

        double toDouble() const {
            return static_cast<double>(numerator) / static_cast<double>(denominator);
        }

        // Arithmetic Operators
        Fraction operator+(const Fraction& other) const {
            return Fraction(numerator * other.denominator + other.numerator * denominator,
                denominator * other.denominator);
        }

        Fraction operator-(const Fraction& other) const {
            return Fraction(numerator * other.denominator - other.numerator * denominator,
                denominator * other.denominator);
        }

        Fraction operator*(const Fraction& other) const {
            return Fraction(numerator * other.numerator, denominator * other.denominator);
        }

        Fraction operator/(const Fraction& other) const {
            if (other.numerator == 0) throw std::invalid_argument("Division by zero fraction");
            return Fraction(numerator * other.denominator, denominator * other.numerator);
        }

        
        bool operator==(const Fraction& other) const {
            return numerator == other.numerator && denominator == other.denominator;
        }

        bool operator!=(const Fraction& other) const {
            return !(*this == other);
        }

        bool operator<(const Fraction& other) const {
            return numerator * other.denominator < other.numerator * denominator;
        }

        bool operator>(const Fraction& other) const {
            return other < *this;
        }

        bool operator<=(const Fraction& other) const {
            return !(*this > other);
        }

        bool operator>=(const Fraction& other) const {
            return !(*this < other);
        }

        friend std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
            os << frac.numerator << '/' << frac.denominator;
            return os;
        }

        friend std::istream& operator>>(std::istream& is, Fraction& frac) {
            T num, denom;
            is >> num >> denom;
            if (denom == 0) {
                is.setstate(std::ios::failbit);
                return is;
            }
            frac = Fraction(num, denom);
            return is;
        }

        void Simplify() { simplify(); }
    };

} 

#endif
