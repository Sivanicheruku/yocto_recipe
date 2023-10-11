#include "calculator.h"

double divide(double a, double b) {
    if (b == 0) {
        // Handle division by zero
        return 0.0; // You can choose to return an error code or handle this differently.
    }
    return a / b;
}

