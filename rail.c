#include <stdio.h>

struct ticket {
    char name[50];
    int age;
    float amount;
    char gender[10];
    char trainname[50];
};

int main() {
    struct ticket RT;

    printf("Enter name: ");
    scanf("%s", RT.name);
    
    printf("Enter gender: ");
    scanf("%s", RT.gender);
    
    printf("Enter age: ");
    scanf("%d", &RT.age);
    
    printf("Enter amount: ");
    scanf("%f", &RT.amount);
    
    printf("Enter train name: ");
    scanf("%s", RT.trainname);
    
    printf("\n************* RAILWAY BOOKING *************\n");
    printf("Name: %s\n", RT.name);
    printf("Gender: %s\n", RT.gender);
    printf("Age: %d\n", RT.age);
    printf("Amount: %.2f\n", RT.amount);
    printf("Train Name: %s\n", RT.trainname);  
    return 0;
}
