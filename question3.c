#include <stdio.h>

int main() {
    float mass, acceleration, force;

    // Input mass
    printf("Enter mass (in kg): ");
    scanf("%f", &mass);

    // Input acceleration
    printf("Enter acceleration (in m/s^2): ");
    scanf("%f", &acceleration);

    // Calculate force
    force = mass * acceleration;

    // Display result
    printf("Force = %.2f N\n", force);

    return 0;
}
