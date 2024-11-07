#include <stdio.h>
#include <string.h>

#define MAX_NAME 25
#define MAX_DEPARTMENT 20
#define MAX_EMAIL 50

typedef struct {
    char name[MAX_NAME];
    int id;
    char department[MAX_DEPARTMENT];
    float salary;
    char email[MAX_EMAIL];
} employee;

int main() {
    // Declare a variable of type employee
    employee emp1;

    // Assign values to the fields of the structure
    strcpy(emp1.name, "John Doe");
    emp1.id = 12345;
    strcpy(emp1.department, "Human Resources");
    emp1.salary = 50000.0;
    strcpy(emp1.email, "johndoe@example.com");

    // Print the values of the structure
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Department: %s\n", emp1.department);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Email: %s\n", emp1.email);

    return 0;
}