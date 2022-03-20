#include <stdio.h>

// Function to Generate Pascal's Triangle
void printPascal(int n)
{
    // For loop that will iterate over line or rows
    for (int line = 0; line < n; line++) 
    {
        int C, space;
        // Second For Loop that will manage space between the digits
        for (space = 1; space <= n - line; space++)
        {
            printf("  ");
        }

        // Third For Loop that will print the digit as per the condition
        for (int j = 0; j <= line; j++) 
        {
            // Using If condition to check whether to print 1 or not
            if (j == 0 || line == 0)
            {
                C = 1;
            }
            
            // Computing the value if not 1
            else
            {
                C = C * (line - j + 1) / j;
            }
         
            printf("%4d", C);
        }
        // New line after a row
        printf("\n");
    }

}


// Driver code

int main()
{

    int n = 5;

    // Function call to print pascal triangle
    printPascal(n);

    return 0;

}

