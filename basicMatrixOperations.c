#include <stdio.h>

int matInput(int matrix[10][10], int li)
{
    for (int k = 0; k < li; k++)
    {
        for (int l = 0; l < li; l++)
        {
            scanf("%d", &matrix[k][l]);
        }
        printf("\n");
    }
}

int matOutput(int matrix[10][10], int li)
{
    for (int k = 0; k < li; k++)
    {
        for (int l = 0; l < li; l++)
        {
            printf("%d\t", matrix[k][l]);
        }
        printf("\n");
    }
}

int main()
{
    int matA[10][10], matB[10][10], opt, sum[10][10], diff[10][10], mul[10][10], tra[10][10], holdA[10][10], holdB[10][10];
    int a, i, j, lim;

    while (1 > 0) // loop to make the program until when you want to stop
    {
        printf("What operation would you like to perform? \n1-Matrix Addition \n2-Matrix Substraction \n3-Matrix Multiplication \n4-Matrix Transpose \n5-End Program \n");
        scanf("%d", &opt);

        if (opt == 1) // Addition
        {
            printf("\nYou chose Matrix Addition, is that correct?\nEnter 1 to confirm\nPress any other integer key if wrong\n");
            scanf("%d", &a);

            if (a == 1)
            {
                printf("\nEnter the limit of the square matrix (maximum 10): ");
                scanf("%d", &lim);

                printf("Enter the Values of the First Matrix:\n");
                matInput(matA, lim);

                printf("Enter the Values of the Second Matrix:\n");
                matInput(matB, lim);

                printf("Your First Matrix: \n");
                matOutput(matA, lim);

                printf("\nYour Second Matrix: \n");
                matOutput(matB, lim);

                for (i = 0; i < lim; i++)
                {
                    for (j = 0; j < lim; j++)
                    {
                        sum[i][j] = matA[i][j] + matB[i][j];
                    }
                }

                printf("\nThe sum of your Matrix Addition:\n");
                matOutput(sum, lim);

                printf("\n");
            }
            else
            {
                continue;
            }
        }
        else if (opt == 2) // Substraction
        {
            printf("\nYou chose Matrix Substraction, is that correct?\nEnter 1 to confirm\nPress any other integer key if wrong\n");
            scanf("%d", &a);

            if (a == 1)
            {
                printf("\nEnter the limit of the square matrix (maximum 10): ");
                scanf("%d", &lim);

                printf("Enter the Values of the First Matrix:\n");
                matInput(matA, lim);

                printf("Enter the Values of the Second Matrix:\n");
                matInput(matB, lim);

                printf("Your First Matrix: \n");
                matOutput(matA, lim);

                printf("\nYour Second Matrix: \n");
                matOutput(matB, lim);

                for (i = 0; i < lim; i++)
                {
                    for (j = 0; j < lim; j++)
                    {
                        diff[i][j] = matA[i][j] - matB[i][j];
                    }
                }

                printf("\nThe sum of your Matrix Addition:\n");
                matOutput(diff, lim);

                printf("\n");
            }
            else
            {
                continue;
            }
        }
        else if (opt == 3) // Multiplication
        {
            printf("\nYou chose Matrix Multiplication, is that correct?\nEnter 1 to confirm\nPress any other integer key if wrong\n");
            scanf("%d", &a);

            if (a == 1)
            {
                printf("\nEnter the limit (maximum 10): ");
                scanf("%d", &lim);

                printf("Enter the Values of the First Matrix:\n"); // input
                matInput(matA, lim);

                printf("Enter the Values of the Second Matrix:\n"); // input
                matInput(matB, lim);

                printf("Your First Matrix:\n");
                matOutput(matA, lim);

                printf("Your Second Matrix:\n44");
                matOutput(matB, lim);

                printf("Product of the Matrix:\n");
                for (i = 0; i < lim; i++)
                {
                    for (j = 0; j < lim; j++)
                    {
                        mul[i][j] = 0;
                        for (int k = 0; k < lim; k++)
                        {
                            mul[i][j] = mul[i][j] + (matA[i][k] * matB[k][j]);
                        }
                    }
                }
                matOutput(mul, lim);
                printf("\n");
            }
            else
            {
                continue;
            }
        }
        else if (opt == 4) // Transpose

        {
            printf("\nYou chose Matrix Transpose, is that correct?\nEnter 1 to confirm\nPress any other integer key if wrong\n");
            scanf("%d", &a);

            if (a == 1)
            {
                printf("\nEnter the limit of the Square Matrix (maximum 10): ");
                scanf("%d", &lim);

                printf("Enter the Values of the Matrix:\n"); // input
                matInput(matA, lim);

                printf("Your Matrix:\n"); // output
                matOutput(matA, lim);

                printf("Transpose of your Matrix:\n");
                for (i = 0; i < lim; i++)
                {
                    for (j = 0; j < lim; j++)
                    {
                        tra[j][i] = matA[i][j];
                    }
                }
                matOutput(tra, lim);
                printf("\n");
            }
            else
            {
                continue;
            }
        }
        else if (opt == 5) // Determinent
        {
            printf("\nYou chose Determinentof a Matrix, is that correct?\nEnter 1 to confirm\nPress any other integer key if wrong\n");
            scanf("%d", &a);

            if (a == 1)
            {
                printf("Enter the Values of the 3x3 Matrix:\n"); // input
                matInput(matA, lim);

                int det;
                det = (matA[0][0] * ((matA[1][1] * matA[2][2]) - (matA[1][2] * matA[2][1]))) - (matA[0][1] * ((matA[1][0] * matA[2][2]) - (matA[1][2] * matA[2][0]))) + (matA[0][2] * ((matA[1][0] * matA[2][1]) - (matA[1][1] * matA[2][0])));
            }
            else
            {
                continue;
            }
        }
        else if (opt == 6) // Program End
        {
            break;
        }
        else // Error Key
        {
            printf("Please select from the given options!!! \n\n");
        }
    }
    return 0;
}
