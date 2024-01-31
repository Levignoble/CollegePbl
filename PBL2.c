#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void matrixoperation(int x)
{
    int r, c;
    printf("enter rows and columns");
    scanf("%d%d", &r, &c);
    int *arr[r];
    for (int i = 0; i < r; i++)
    {
        arr[i] = (int *)malloc(c * sizeof(int));
    }
    int *arr1[r];
    for (int i = 0; i < r; i++)
    {
        arr1[i] = (int *)malloc(c * sizeof(int));
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter value at %d row and %d  column", i + 1, j + 1);
            scanf("%d", (*(arr + i) + j));
            fflush(stdin);
        }
    }
    printf("\n enter values of second matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter value at %d row and %d  column", i + 1, j + 1);
            scanf("%d", (*(arr1 + i) + j));
            fflush(stdin);
        }
    }
    int *final[r];
    for (int i = 0; i < r; i++)
    {
        final[i] = (int *)malloc(c * sizeof(int));
    }
    if (x == 1)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                final[i][j] = arr[i][j] + arr1[i][j];
            }
        }
        for (int i = 0; i < r; i++)
        {
            printf("\n");
            for (int j = 0; j < c; j++)
            {
                printf("%d ", final[i][j]);
            }
        }
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                final[i][j] = arr[i][j] - arr1[i][j];
            }
        }
        for (int i = 0; i < r; i++)
        {
            printf("\n");
            for (int j = 0; j < c; j++)
            {
                printf("%d ", final[i][j]);
            }
        }
    }
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int permutation(int n, int r)
{
    int denominator = factorial(n);
    int numerator = factorial(n - r);
    return (denominator / numerator);
}
int combination(int n, int r)
{
    int denominator = factorial(n);
    int numerator = (factorial(r) * factorial(n - r));
    return (denominator / numerator);
}
float sine(float angleradian)
{
    return sin(angleradian);
}
float cose(float angleradian)
{
    return cos(angleradian);
}
float tane(float angleradian)
{
    return tan(angleradian);
}
float hsine(float angleradian)
{
    return sinh(angleradian);
}
float hcose(float angleradian)
{
    return cosh(angleradian);
}
float htane(float angleradian)
{
    return tanh(angleradian);
}
float logarithm(float t)
{
    return log(t);
}
float logarithm10(float t1)
{
    return log10(t1);
}
float exponent(int t2)
{
    return exp(t2);
}
float inverselog(float t3)
{
    return pow(10, t3);
}
float sum1(float arr[], int x1, float sum)
{
    for (int i = 0; i < x1; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
float sub(float arr[], int x1, float subtraction)
{
    for (int i = 1; i < x1; i++)
    {
        subtraction = subtraction - arr[i];
    }
    return subtraction;
}
float mul(float arr[], int x1, float multiplication)
{
    for (int i = 0; i < x1; i++)
    {
        multiplication = multiplication * arr[i];
    }
    return multiplication;
}
float divi(float arr[], int x1, float division)
{
    for (int i = 1; i < x1; i++)
    {
        division = division / arr[i];
    }
    return division;
}
int mod(int arr[], int x1, int modulus)
{
    for (int i = 1; i < x1; i++)
    {
        modulus = modulus % arr[i];
    }
    return modulus;
}
int decimaltobinary(int decinum)
{
    int r = 0;
    int d;
    int f = 1;
    while (decinum != 0)
    {
        d = decinum % 2;
        r = r + d * f;
        f = f * 10;
        decinum = decinum / 2;
    }
    return r;
}
int binarytodecimal(int binnum)
{
    int d;
    int r = 0;
    int i = 0;
    while (binnum != 0)
    {
        d = binnum % 10;
        r = r + pow(2, i) * d;
        binnum = binnum / 10;
        i++;
    }
    return r;
}
int decimaltooctal(int decinum1)
{
    int d;
    int r = 0;
    int f = 1;
    while (decinum1 != 0)
    {
        d = decinum1 % 8;
        r = r + d * f;
        f = f * 10;
        decinum1 = decinum1 / 8;
    }
    return r;
}
int octaltodecimal(int octnum1)
{
    int r = 0;
    int d;
    int i = 0;
    while (octnum1 != 0)
    {
        d = octnum1 % 10;
        r = r + pow(8, i) * d;
        i++;
        octnum1 = octnum1 / 10;
    }
    return r;
}
char decimaltohexadecimal(int decinum2)
{
    int d = 0;
    ;
    int r = 0;
    char arr[1000];
    int i = 0;
    while (decinum2 != 0)
    {
        d = decinum2 % 16;
        if (d <= 10)
        {
            arr[i] = 48 + d;
            i++;
        }
        else
        {
            arr[i] = 55 + d;
            i++;
        }
        decinum2 = decinum2 / 16;
    }
    for (int j = 0; j < i; j++)
    {
        printf("%c", arr[j]);
    }
}
int hexadecimaltodecimal(char hex1[])
{
    char a[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int a1[] = {10, 11, 12, 13, 14, 15};
    int b[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int len = strlen(hex1);
    char ch6[len];
    int z[20];
    int k4 = 0;
    int ch = 0;
    int hex[strlen(ch6)];
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (hex1[i] == a[j])
            {
                z[k4] = a1[j];
                k4++;
            }
        }
        for (int j1 = 0; j1 < 10; j1++)
        {
            if (hex1[i] == b[j1])
            {
                z[k4] = j1;
                k4++;
            }
        }
    }
    int lo = len - 1;
    for (int i = 0; i < len; i++)
    {
        ch = ch + pow(16, lo) * z[i];
        lo--;
    }
    return ch;
}
struct teacher
{
    int enroll;
    int maths;
    int physics;
    int english;
    int sdf;
    int bridge;
    int sdflab;
};
int search(int a2[], int x, int n)
{
    int c = -1;
    for (int i = 0; i < n; i++)
    {
        if (a2[i] == x)
        {
            return i;
            c = i;
        }
    }
    if (c < 0)
    {
        return -1;
    }
}
int marking(struct teacher a[], int x, int n, int a2[])
{
    int l = search(a2, x, n);
    if (l == -1)
    {
    }
    else
    {
        int a1[6];
        int k;
        a1[0] = a[l].maths;
        a1[1] = a[l].physics;
        a1[2] = a[l].english;
        a1[3] = a[l].sdf;
        a1[4] = a[l].bridge;
        a1[5] = a[l].sdflab;
        printf("\nENTER 1 TO FIND SUM OF MARKS IN ALL SUBJECTS \n");
        printf("ENTER 2 TO FIND AVERAGE MARKS \n");
        printf("ENTER 3 TO FIND PERCENTAGE \n");
        printf("ENTER 4 TO FIND HIGHEST MARKS SCORED \n");
        printf("ENTER 5 TO FIND LOWEST MARKS SCORED \n");
        printf("ENTER CHOICE\n");
        int ch;
        scanf("%d", &ch);
        float sum = 0;
        float avg = 0, percent = 0;
        int l = 0, s = 100;
        switch (ch)
        {
        case 1:
        {
            sum = sum + a[l].maths + a[l].physics + a[l].sdf + a[l].sdflab + a[l].english + a[l].bridge;
            printf("THE SUM IS %f\n", sum);
        }
        break;
        case 2:
        {
            sum = 0;
            sum = sum + a[l].maths + a[l].physics + a[l].sdf + a[l].sdflab + a[l].english + a[l].bridge;
            avg = sum / 6;
            printf("THE AVERAGE MARKS IS %f\n", avg);
        }
        break;
        case 3:
        {
            sum = 0;
            avg = 0;
            sum = sum + a[l].maths + a[l].physics + a[l].sdf + a[l].sdflab + a[l].english + a[l].bridge;
            avg = sum / 6;
            percent = avg;
            printf("THE PERCENTAGE MARKS ARE %f PERCENT\n", percent);
        }
        break;
        case 4:
        {
            for (int j = 0; j < 6; j++)
            {
                if (a1[j] > l)
                {
                    l = a1[j];
                }
            }
            printf("HIGHEST MARKS SCORED %d\n", l);
        }
        break;
        case 5:
        {
            for (int j = 0; j < 6; j++)
            {
                if (a1[j] < s)
                {
                    s = a1[j];
                }
            }
            printf("LOWEST MARKS SCORED %d\n", s);
        }
        break;
        }
        printf("\nENTER NEXT ENROLLMENT NUMBER \nOR\nENTER MINUS 1 TO END\n");
        scanf("%d", &k);
        marking(a, k, n, a2);
    }
}
void matrixmulti()
{
    int **b;
    int n, m;
    printf("enter number of rows and columns of first matrix\n");
    scanf("%d%d", &m, &n);
    b = (int **)malloc(sizeof(int *) * m);
    for (int i = 0; i < m; i++)
    {
        b[i] = (int *)malloc(sizeof(int) * n);
    }
    printf("enter first matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", (*(b + i) + j));
        }
    }
    printf("first matrix is\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", *(*(b + i) + j));
        }
        printf("\n");
    }
    int **c;
    int n1, m1;
    printf("enter number of rows and columns of second matrix\n");
    scanf("%d%d", &m1, &n1);
    c = (int **)malloc(sizeof(int *) * m1);
    for (int i = 0; i < m1; i++)
    {
        c[i] = (int *)malloc(sizeof(int) * n1);
    }
    printf("enter second matrix\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", (*(c + i) + j));
        }
    }
    printf("matrix is\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("%d  ", *(*(c + i) + j));
        }
        printf("\n");
    }
    if (n == m1)
    {
        int **a;
        int k = 0;
        a = (int **)malloc(sizeof(int *) * m);
        for (int i = 0; i < m; i++)
        {
            a[i] = (int *)malloc(sizeof(int) * n1);
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                *(*(a + i) + j) = 0;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    (*(*(a + i) + j)) = (*(*(a + i) + j)) + ((*(*(b + i) + k)) * (*(*(c + k) + j)));
                }
            }
        }
        printf("product of matrix is\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("%d  ", *(*(a + i) + j));
            }
            printf("\n");
        }
    }
    else
    {
        printf("product not possible");
    }
}
void convertor()
{
    char ch[30], cht[30], chu[40], d[30];
    printf("ENTER 'length' TO ACCESS LENGTH CONVERTOR\nENTER 'mass' TO ACCESS MASS CONVERTOR\nENTER 'currency' TO ACCESS TIME CONVERTOR\nENTER 'time' TO ACCESS TIME CONVERTOR");
    printf("=====================================================================================================================================\n");
    scanf("%s", &ch);
    printf("=====================================================================================================================================\n");
    strcpy(cht, ch);
    strcpy(chu, ch);
    strcat(cht, ".txt");
    strcat(chu, "unit.txt");
    strupr(ch);
    FILE *f, *fu;
    f = fopen(cht, "r");
    fu = fopen(chu, "r");
    float g;
    int n = 14, k = 0;
    char c1;
    char s[20], du[20];
    float a[n];
    char u[n][20];
    while (!feof(fu))
    {
        fscanf(fu, "%s", u[k]);
        k++;
    }
    k = 0;
    while (!feof(f))
    {
        fscanf(f, "%f", &a[k]);
        k++;
    }
    printf("ACCEPTED UNITS AND THEIR FORMATS ARE :\n");
    for (int z = 0; z < n; z++)
    {
        printf("%s \n", u[z]);
    }
    printf("=====================================================================================================================================\n");
    printf("ENTER %s AND UNIT\n", ch);
    scanf("%f \n %s", &g, &s);
    printf("ENTER UNIT IN WHICH YOU UNIT IS TO BE CONVERTED\n");
    scanf("%s", &du);
    printf("=====================================================================================================================================\n");
    int c = 0, dp = 0, q = 0, gp = 0;
    for (int j = 0; j < n; j++)
    {
        c = strcmp(u[j], du);
        if (c == 0)
        {
            dp = j;
            break;
        }
    }
    for (int j = 0; j < n; j++)
    {
        q = strcmp(u[j], s);
        if (q == 0)
        {
            gp = j;
            break;
        }
    }
    float r = g * a[gp];
    r = r / a[dp];
    printf("DESIRED VALUE IS :\n%f\t%s", r, du);
    fclose(f);
    fclose(fu);
}
int main()
{
    int choice1;
    int choice2;
    int choice3;
    int choice4;
    int choice5;
    int choice6;
    int choice7;
    int start = 1, co;
    printf("\n=====================================================================================================================================\n");
    printf("*************************************************WELCOME TO INTERFACE****************************************************************");
    printf("\n=====================================================================================================================================\n");
    while (start == 1)
    {
        printf("ENTER 1 FOR CALCULATOR \nENTER 2 FOR CONVERTOR\n");
        printf("=====================================================================================================================================\n");
        scanf("%d", &co);
        switch (co)
        {
        case 1:
        {
            printf("Enter 1 for basic mathematical calculations\nEnter 2 for algebraic operations\nEnter 3 for trigonometric functions\nEnter 4 for exponential functions\nEnter 5 for number system conversion\nEnter 6 to access teacher mode\nEnter 7 for matrix operations\n");
            printf("=====================================================================================================================================\n");
            scanf("%d", &choice1);
            printf("\n=====================================================================================================================================\n");
            switch (choice1)
            {
            case 1:
                printf("On how many numbers do you want to perform the operation\n");
                int x1;
                scanf("%d", &x1);
                printf("Enter 1 for addition\nenter 2 for subtraction\nenter 3 for multiplication\nenter 4 for division\nenter 5 for modulus\n");
                printf("=====================================================================================================================================\n");
                scanf("%d", &choice2);
                printf("=====================================================================================================================================\n");
                if (choice2 == 1)
                {
                    float sum;
                    sum = 0;
                    float arr[1000];
                    printf("Enter the numbers\n");
                    for (int i = 0; i < x1; i++)
                    {
                        scanf("%f", &arr[i]);
                    }
                    printf("The sum of numbers you entered is %f\n", sum1(arr, x1, sum));
                }
                else if (choice2 == 2)
                {
                    float subtraction;
                    float arr1[1000];
                    printf("Enter the numbers\n");
                    for (int i = 0; i < x1; i++)
                    {
                        scanf("%f", &arr1[i]);
                    }
                    subtraction = arr1[0];
                    printf("The subtraction of numbers you enteres is %f\n", sub(arr1, x1, subtraction));
                }
                else if (choice2 == 3)
                {
                    float multiplication;
                    multiplication = 1;
                    float arr2[1000];
                    printf("Enter the numbers\n");
                    for (int i = 0; i < x1; i++)
                    {
                        scanf("%f", &arr2[i]);
                    }
                    printf("The multiplication of numbers you entered is %f\n", mul(arr2, x1, multiplication));
                }
                else if (choice2 == 4)
                {
                    float division;
                    float arr3[1000];
                    printf("Enter the numbers\n");
                    for (int i = 0; i < x1; i++)
                    {
                        scanf("%f", &arr3[i]);
                    }
                    division = arr3[0];
                    printf("The division of numbers you entered is %f\n", divi(arr3, x1, division));
                }
                else if (choice2 == 5)
                {
                    int modulus;
                    int arr4[1000];
                    printf("Enter the numbers\n");
                    for (int i = 0; i < x1; i++)
                    {
                        scanf("%d", &arr4[i]);
                    }
                    modulus = arr4[0];
                    printf("The modulus of the numbers that you entered is %d\n", mod(arr4, x1, modulus));
                }
                else
                {
                    printf("Invalid input\n");
                }
                break;
            case 2:
                printf("\nEnter 1 for factorial\nEnter 2 for power\nEnter 3 for permutation and combination\n");
                printf("=====================================================================================================================================\n");
                scanf("%d", &choice3);
                printf("=====================================================================================================================================\n");
                switch (choice3)
                {
                case 1:
                    printf("Enter the number to find the factorial\n");
                    int n;
                    scanf("%d", &n);
                    printf("%d \n", factorial(n));
                    break;
                case 2:
                    printf("Enter the base and exponent\n");
                    int b, e;
                    scanf("%d %d", &b, &e);
                    int p;
                    p = pow(b, e);
                    printf("%d to the power %d is %d", b, e, p);
                    break;
                case 3:
                    printf("Enter the value of n and r\n");
                    int n1, r;
                    scanf("%d %d", &n1, &r);
                    printf("Enter 1 for permutation and 2 for combination\n");
                    int x;
                    scanf("%d", &x);
                    if (x == 1)
                        printf("%d", permutation(n1, r));
                    else if (x == 2)
                        printf("%d", combination(n1, r));
                    else
                        printf("Invalid input\n");
                    break;
                default:
                    printf("Invalid input");
                    break;
                }
                break;
            case 3:
                printf("\nEnter 1 for sin\nenter 2 for cosine\nenter 3 for tangent\nenter 4 for hyperbolic sin\nenter 5 for hyperbolic cosine\nenter 6 for hyperbolic tangent\n");
                printf("=====================================================================================================================================\n");
                scanf("%d", &choice4);
                printf("=====================================================================================================================================\n");
                printf("Enter the angle in degrees\n");
                float angle;
                scanf("%f", &angle);
                float angleradian;
                angleradian = angle * (3.14 / 180);
                switch (choice4)
                {
                case 1:
                    printf("%f", sine(angleradian));
                    break;
                case 2:
                    printf("%f", cose(angleradian));
                    break;
                case 3:
                    printf("%f", tane(angleradian));
                    break;
                case 4:
                    printf("%f", hsine(angleradian));
                    break;
                case 5:
                    printf("%f", hcose(angleradian));
                    break;
                case 6:
                    printf("%f", htane(angleradian));
                    break;
                default:
                    printf("Invalid input");
                    break;
                }
                break;
            case 4:
                printf("\nEnter 1 for lagarithm\nenter 2 for logarithm with base 10\nenter 3 for calculating e^x\nenter 4 for inverse log\n");
                printf("=====================================================================================================================================\n");
                scanf("%d", &choice5);
                printf("=====================================================================================================================================\n");
                switch (choice5)
                {
                case 1:
                    printf("Enter the value for which logarithm is to be calculated\n");
                    float t;
                    scanf("%f", &t);
                    printf("%f", logarithm(t));
                    break;
                case 2:
                    printf("Enter the value for which log is to be calculated\n");
                    float t1;
                    scanf("%f", &t1);
                    printf("%f", logarithm10(t1));
                    break;
                case 3:
                    printf("Enter the value of x in e^x\n");
                    int t2;
                    scanf("%d", &t2);
                    printf("%f", exponent(t2));
                    break;
                case 4:
                    printf("Enter the value for which anti log is to be calculated\n");
                    float t3;
                    scanf("%f", &t3);
                    printf("%f", inverselog(t3));
                    break;
                default:
                    printf("Invalid input");
                    break;
                }
                break;
            case 5:
            {
                printf("\nEnter 1 for decimal to binary\nEnter 2 for binary to decimal\nEnter 3 for decimal to octal conversion\nEnter 4 for octal to decimal conversion\nEnter 5 for decimal to hexadecimal conversion\nEnter 6 for hexadecimal to decimal conversion\n");
                printf("=====================================================================================================================================\n");
                scanf("%d", &choice6);
                printf("=====================================================================================================================================\n");
                switch (choice6)
                {
                case 1:
                    printf("Enter the number in decimal form\n");
                    int decinum;
                    scanf("%d", &decinum);
                    printf("Entered number in binary form for is %d\n", decimaltobinary(decinum));
                    break;
                case 2:
                    printf("Enter the number in binary form\n");
                    int binnum;
                    scanf("%d", &binnum);
                    printf("Entered number in decimal form is %d\n", binarytodecimal(binnum));
                    break;
                case 3:
                    printf("Enter the number decimal form\n");
                    int decinum1;
                    scanf("%d", &decinum1);
                    printf("Entered number in octal form is %d\n", decimaltooctal(decinum1));
                    break;
                case 4:
                    printf("Enter the number in octal form\n");
                    int octnum1;
                    scanf("%d", &octnum1);
                    printf("Entered number in decimal form is %d\n", octaltodecimal(octnum1));
                    break;
                case 5:
                    printf("Enter the number in decimal form\n");
                    int decinum2;
                    scanf("%d", &decinum2);
                    printf("Entered number in hexadecimal form is ");
                    printf("%s\n", decimaltohexadecimal(decinum2));
                    break;
                case 6:
                    printf("Enter the number in hexadecimal form\n");
                    char hex1[100];
                    scanf("%s", &hex1);
                    printf("%d", hexadecimaltodecimal(hex1));
                    break;
                }
            }
            break;
            case 6:
            {
                printf("\nENTER NUMBER OF STUDENTS\n");
                int n;
                scanf("%d", &n);
                struct teacher a[n];
                int a2[n];
                for (int i = 0; i < n; i++)
                {
                    printf("\nENTER ENROLLMENT NUMBER OF STUDENT\n");
                    scanf("%d", &a[i].enroll);
                    printf("ENTER MARKS OF STUDENT IN MATHS\n");
                    scanf("%d", &a[i].maths);
                    printf("ENTER MARKS OF STUDENT IN PHYSICS\n");
                    scanf("%d", &a[i].physics);
                    printf("ENTER MARKS OF STUDENT IN ENGLISH\n");
                    scanf("%d", &a[i].english);
                    printf("ENTER MARKS OF STUDENT IN SOFTWARE DEVELOPMENT FUNDAMENTALS\n");
                    scanf("%d", &a[i].sdf);
                    printf("ENTER MARKS OF STUDENT IN BRIDGE COURSE\n");
                    scanf("%d", &a[i].bridge);
                    printf("ENTER MARKS OF STUDENT IN SOFWARE DEVELOPMENT LAB\n");
                    scanf("%d", &a[i].sdflab);
                }
                for (int i = 0; i < n; i++)
                {
                    a2[i] = a[i].enroll;
                }
                int x;
                printf("\n\nENTER ENROLLMENT NUMBER OF STUDENT WHOSE DATA IS TO CALCULATED\n");
                scanf("%d", &x);
                marking(a, x, n, a2);
            }
            break;
            case 7:
            {
                int c7;
                printf("ENTER 1 FOR MATRIX MULTIPLICATION\nENTER 2 FOR MATRIX ADDITION\nENTER 3 FOR MATRIX SUBSTRACTION\n");
                printf("=====================================================================================================================================\n");
                scanf("%d", &c7);
                printf("=====================================================================================================================================\n");
                switch (c7)
                {
                case 1:
                {
                    matrixmulti();
                    break;
                }
                case 2:
                {
                    matrixoperation(1);
                    break;
                }
                case 3:
                {
                    matrixoperation(2);
                    break;
                }
                }
            }
            break;
            }
        }
        break;
        case 2:
        {
            convertor();
        }
        }
        printf("\n=====================================================================================================================================");
        printf("\nEnter 1 for main menu ");
        printf("\n=====================================================================================================================================\n");
        scanf("%d", &start);
    }
}
