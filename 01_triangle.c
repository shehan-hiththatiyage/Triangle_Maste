#include <stdio.h>

int main() {
    int s1, s2, s3;
    char choice;
    int count = 1;

    do {
        printf("\nEnter the length of the sides for a triangle:\n");
        printf("Side 1 = ");
        scanf("%d", &s1);
        printf("Side 2 = ");
        scanf("%d", &s2);
        printf("Side 3 = ");
        scanf("%d", &s3);

        printf("\nTriangle number %d:\n", count);
        printf("Side 1 = %d\nSide 2 = %d\nSide 3 = %d\n", s1, s2, s3);

        if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) {
            printf("Type = Not a triangle\n");
        } else if (s1 == s2 && s2 == s3) {
            printf("Type = Equilateral triangle\n");
        } else if ((s1*s1 + s2*s2 == s3*s3) ||
                   (s1*s1 + s3*s3 == s2*s2) ||
                   (s2*s2 + s3*s3 == s1*s1)) {
            printf("Type = Right triangle\n");
        } else if (s1 == s2 || s2 == s3 || s1 == s3) {
            printf("Type = Isosceles triangle\n");
        } else {
            printf("Type = Scalene triangle\n");
        }

        count++;
        printf("\nInput another? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
