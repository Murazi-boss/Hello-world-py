

#include <iostream>
#include <cmath>

const double PI = 3.141592653589793;

double toRadians(double degrees) {
    return degrees * PI / 180.0;
}

double toDegrees(double radians) {
    return radians * 180.0 / PI;
}

int main() {
    // Given values
    double BC = 7.1;    // distance from BANANA to CARROT
    double AC = 9.5;    // distance from APPLE to CARROT
    double angleB = 63; // angle at BANANA in degrees
    
    // Convert angleB to radians for computation
    double angleB_rad = toRadians(angleB);

    // Step 1: Calculate AB using Law of Cosines
    double AB = sqrt(AC * AC + BC * BC - 2 * AC * BC * cos(angleB_rad));

    // Step 2: Calculate angle A using Law of Sines
    double angleA_rad = asin((BC * sin(angleB_rad)) / AB);
    double angleA = toDegrees(angleA_rad);

    // Step 3: Calculate angle C
    double angleC = 180.0 - (angleA + angleB);

    // Display results
    std::cout << "Side AB: " << AB << " cm" << std::endl;
    std::cout << "Angle A: " << angleA << " degrees" << std::endl;
    std::cout << "Angle C: " << angleC << " degrees" << std::endl;

    return 0;
}



