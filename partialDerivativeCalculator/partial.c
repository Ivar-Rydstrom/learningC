#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[20];
    printf("Input Term [A]x^[B]y^[C]z^[D] as space separated list : A B C D");
    fgets(input, 20, stdin);

    int coeff;
    int exp[3];

    sprintf($coeff,  "%.*s", 1, input    );
    sprintf($exp[0], "%.*s", 1, input + 2);
    sprintf($exp[1], "%.*s", 1, input + 3);
    sprintf($exp[2], "%.*s", 1, input + 4);

    int coeff_xout;
    int coeff_yout;
    int coeff_zout;
    int exp_xout[3];
    int exp_yout[3];
    int exp_zout[3];

    // x-derivative
    exp_xout[0] = exp[0] - 1;
    exp_xout[1] = exp[1];
    exp_xout[2] = exp[2];
    coeff_xout = coeff * exp[0];

    // y-derivative
    exp_yout[0] = exp[0];
    exp_yout[1] = exp[1] - 1;
    exp_yout[2] = exp[2];
    coeff_yout = coeff * exp[1];
    
    // z-derivative
    exp_zout[0] = exp[0];
    exp_zout[1] = exp[1];
    exp_zout[2] = exp[2] - 1;
    coeff_zout = coeff * exp[2];

    printf("X-Partial > coeff: %d | exp_x: %d | exp_y: %d | exp_z: %d\n", coeff_xout, exp_xout[0], exp_xout[1], exp_xout[2]);
    printf("Y-Partial > coeff: %d | exp_x: %d | exp_y: %d | exp_z: %d\n", coeff_yout, exp_yout[0], exp_yout[1], exp_yout[2]);
    printf("Z-partial > coeff: %d | exp_x: %d | exp_y: %d | exp_z: %d\n", coeff_zout, exp_zout[0], exp_zout[1], exp_zout[2]);
    return 0;
};