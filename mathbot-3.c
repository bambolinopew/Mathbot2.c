#include <stdio.h>

float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);
int is_prime(int number);
float calculate_cgpa(float grades[], int size);
void configuration(int password);

int main(void)
{
    int choice;
    int password = 1234;

    printf("========================================\n");
    printf("          WELCOME TO MATHBOT\n");
    printf("========================================\n");
    printf("Hello! I am MathBot.\n");
    printf("I am your personal mathematical assistant.\n");
    printf("What can I help you calculate today?\n\n");

    do
    {
        printf("============== MAIN MENU ==============\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Prime Number Checker\n");
        printf("6. CGPA Calculator\n");
        printf("0. Configuration\n");
        printf("7. Exit\n");
        printf("========================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        if (choice == 1)
        {
            float a, b;
            printf("ADDITION\n");
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            printf("Answer = %.2f\n\n", addition(a, b));
        }
        else if (choice == 2)
        {
            float a, b;
            printf("SUBTRACTION\n");
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            printf("Answer = %.2f\n\n", subtraction(a, b));
        }
        else if (choice == 3)
        {
            float a, b;
            printf("MULTIPLICATION\n");
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            printf("Answer = %.2f\n\n", multiplication(a, b));
        }
        else if (choice == 4)
        {
            float a, b;
            printf("DIVISION\n");
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            if (b == 0)
            {
                printf("MathBot cannot divide by zero!\n\n");
            }
            else
            {
                printf("Answer = %.2f\n\n", division(a, b));
            }
        }
        else if (choice == 5)
        {
            int n;
            printf("PRIME NUMBER CHECKER\n");
            printf("Enter an integer: ");
            scanf("%d", &n);
            if (is_prime(n))
            {
                printf("%d is a PRIME number.\n\n", n);
            }
            else
            {
                printf("%d is NOT a prime number.\n\n", n);
            }
        }
        else if (choice == 6)
        {
            int courses;
            printf("CGPA CALCULATOR\n");
            printf("How many courses do you have? ");
            scanf("%d", &courses);

            float grades[courses];

            for (int i = 0; i < courses; i++)
            {
                printf("Enter grade for course %d: ", i + 1);
                scanf("%f", &grades[i]);
            }

            printf("\nYour grades:\n");
            for (int i = 0; i < courses; i++)
            {
                printf("Course %d = %.2f\n", i + 1, grades[i]);
            }

            printf("\nYour CGPA = %.2f\n\n", calculate_cgpa(grades, courses));
        }
        else if (choice == 0)
        {
            configuration(password);
        }
        else if (choice == 7)
        {
            printf("Exiting MathBot...\n\n");
        }
        else
        {
            printf("Invalid choice!\n");
            printf("Please select an option from the menu.\n\n");
        }
    } while (choice != 7);

    printf("========================================\n");
    printf("Thank you for using MathBot!\n");
    printf("Goodbye! Keep calculating!\n");
    printf("========================================\n");

    return 0;
}

float addition(float a, float b)
{
    return a + b;
}

float subtraction(float a, float b)
{
    return a - b;
}

float multiplication(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    return a / b;
}

int is_prime(int number)
{
    if (number < 2)
    {
        return 0;
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

float calculate_cgpa(float grades[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += grades[i];
    }
    return sum / size;
}

void configuration(int password)
{
    int entered;
    int choice;

    printf("Enter the configuration password: ");
    scanf("%d", &entered);

    while (entered != password)
    {
        printf("Incorrect password!\n");
        printf("Try again: ");
        scanf("%d", &entered);
    }

    printf("Access Granted!\n\n");

    do
    {
        printf("========== CONFIGURATION ==========\n");
        printf("1. Bot information\n");
        printf("2. Return to main menu\n");
        printf("===================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        if (choice == 1)
        {
            printf("========== BOT INFORMATION ==========\n");
            printf("Name: MathBot\n");
            printf("Version: 1.0\n");
            printf("Purpose: Mathematical Assistant\n\n");
            printf("Available functions:\n");
            printf("- Addition\n");
            printf("- Subtraction\n");
            printf("- Multiplication\n");
            printf("- Division\n");
            printf("- Prime Number Checker\n");
            printf("- CGPA Calculator\n");
            printf("=====================================\n\n");
        }
        else if (choice == 2)
        {
            printf("Returning to main menu...\n\n");
        }
        else
        {
            printf("Invalid configuration choice!\n\n");
        }
    } while (choice != 2);
}
