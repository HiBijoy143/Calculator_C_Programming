#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
float a,b,c,d;
char o ;
int main()
{
    do
    {
        printf("\n\t\t\t\t*** < CALCULATOR >***\n\n\t");
        printf("\t1.  Arithmetic Calculation.\n\n\t");
        printf("\t2.  Trigonometric & Logical calculations.\n");
        printf("\n\t\t3.  Area calculation.\n");
        printf("\n\t\t4.  Base  calculation.\n");
        printf("\n\t\t5. About us.\n");
        printf("\nEnter your Choice: ");
        scanf("\n%c",&o);
        system("cls");
        switch(o)
        {
        case '1':
            ari();
            break;
        case '2':
            trig();
            break;
        case '3':
            area();
            break;
        case '4':
            base();
            break;
        case '5':
            about();
            break;
        default:
            printf(" ");
        }
        printf("\n\nDo you want to continue:\t press (y)\n\t");
        scanf("\n\n%c",&o);
        system("cls");
    }
    while(o == 'y');
}
ari()
{
    printf("\n\tArithmetic Calculation (+,-,*,/)\n\n");
    printf("Enter a number : \n");
    scanf("\n%f",&a);
    printf("Select an operation : +,-,*,/\n");
    scanf("\n%c",&o);
    printf("Enter another number : \n");
    switch(o)
    {
    case '+':
        scanf("\n%f",&b);
        c = a + b;
        printf("= %.2f\n",c);
        break;
    case '-':
        scanf("\n%f",&b);
        c = a - b;
        printf("= %.2f\n",c);
        break;
    case '*':
        scanf("\n%f",&b);
        c = a * b;
        printf("= %.2f\n",c);
        break;
    case '/':
        scanf("\n%f",&b);
        c = a / b;
        printf("= %.2f\n",c);
        break;
    default:
        printf("Check the operator or invalid operation\n\n");
    }
}

trig()
{
    printf("\t***Trigonometric & Logical calculations***");
    printf("\ns --: Sin");
    printf("\nc --: Cos");
    printf("\nt --: Tan");
    printf("\nl --: Log");
    printf("\nq --: Square");
    printf("\np --: Power");
    printf("\nr --: Square Root\n\n");
    printf("Enter your Choice: ");
    scanf("\n%c",&o);
    system("cls");

    switch(o)
    {
    case 's':
        printf("Enter value of Sin: ");
        scanf("\n%f",&a);
        b=sin(a);
        printf("\tsin %.0f = %.2f\n",a,b);
        break;
    case 'c':
        printf("Enter value of Cos: ");
        scanf("\n%f",&a);
        b=cos(a);
        printf("\tcos %.0f = %.2f\n",a,b);
        break;
    case 't':
        printf("Enter value of Tan: ");
        scanf("\n%f",&a);
        b=tan(a);
        printf("\ttan %.0f = %.2f\n",a,b);
        break;
    case 'l':
        printf("Enter value of log: ");
        scanf("\n%f",&a);
        b=log10(a);
        printf("\tlog %.0f = %.4f\n",a,b);
        break;
    case 'p':
        printf("Enter two value: ");
        scanf("\n%f%f",&a,&b);
        c=pow(a,b);
        printf("\t%.0f to the Power %.0f = %.2f\n",a,b,c);
        break;
    case 'q':
        printf("Enter value: ");
        scanf("\n%f",&a);
        b=a*a;
        printf("\tSquare = %.2f\n",b);
        break;
    case 'r':
        printf("Enter value: ");
        scanf("\n%f",&a);
        b=sqrt(a);
        printf("\tRoot %.0f = %.2f\n",b);
        break;
    default:
        printf("Check the values or invalid inputs\n\n");
    }
}
area()
{
    float base,height,pi=3.1416,radius,ba,bb,h;
    printf("\t***Area calculations***");
    printf("\ns --: Square Area\n");
    printf("\nt --: Triangle Area\n");
    printf("\nc --: Circle Area\n");
    printf("\nr --: Rectangle Area\n");
    printf("\nz --: Trapezium area\n");
    printf("\nEnter your  Choice: ");
    scanf("\n%c",&o);
    system("cls");
    switch(o)
    {
    case 's':
        printf("Enter one side value : ");
        scanf("\n%f",&a);
        b=a*a;
        printf("\tAria of square is = %.2f\n",b);
        break;
    case 't':
        printf("Enter base & height : ");
        scanf("\n%f%f",&base,&height);
        c=(0.5)*base*height;
        printf("\tAria of triangle is = %.2f\n",c);
        break;
    case 'c':
        printf("Enter radius : ");
        scanf("\n%f",&radius);
        c= pi*(radius*radius);
        printf("\tAria of Circle is = %.2f\n",c);
        break;
    case 'r':
        printf("Enter breadth and length of rectangle: \n");
        scanf("%f%f",&a,&b);
        c= a*b;
        printf("\tArea of rectangle = %.2f\n",c);
        break;
    case 'z':
        printf("Enter the size of two bases and height of trapezium : \n");
        scanf("%f%f%f",&ba,&bb,&h);
        c= 0.5*(ba + bb)*h;
        printf("\tArea of Trapezium = %.2f\n",c);
        break;

    default:
        printf("Check the values or invalid inputs\n\n");
    }
}
base()
{
    int r;
    do
    {
        int decimal,octal,hexa,press;
        long long binary;
        printf("\n\n 1. Press 1 to binary to decimal ");
        printf("\n\n 2. Press 2 to bimary to octal ");
        printf("\n\n 3. Press 3 to binary to hexa ");
        printf("\n\n 4. Press 4 to decimal to binary ");
        printf("\n\n 5. Press 5 to decimal to octal ");
        printf("\n\n 6. Press 6 to decimal to hexa ");
        printf("\n\n 7. Press 7 to octal to binary ");
        printf("\n\n 8. Press 8 to octal to decimal ");
        printf("\n\n 9. Press 9 to octal to hexa");
        printf("\n\n 10. Press 10 to hexa to binary");
        printf("\n\n 11. Press 11 to hexa to decimal");
        printf("\n\n 12. Press 12 to hexa to octal\n\n");
        scanf("%d",&press);
        if(press == 5)
        {
            printf("\n\n\tEnter the decimal number : ");
            scanf("%d", &decimal);
            printf("\n\n%d is  = %d in octal\n", decimal, convertDecimalToOctal(decimal));
        }
        else if(press == 8)
        {
            printf("\n\nEnter the octal number\n");
            scanf("%d", &octal);
            printf("\n\n%d is  = %d in octal", octal, convertOctalToDecimal(octal));
        }
        else if(press == 1)
        {
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            printf("%lld in binary = %d in decimal", binary, convertBinaryToDecimal(binary));
        }
        else if(press == 4)
        {
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            printf("%d in decimal = %d in binary\n", decimal, convertDecimalToBinary(decimal));
        }
        else if(press == 9)
        {
            octaltohexa();
        }
        else if(press == 3)
        {
            binarytohexa();
        }
        else if(press == 7)
        {
            printf("Enter an octal number: ");
            scanf("%d", &octal);
            printf("%d in octal = %d in binary\n", octal, convertOctalToBinary(octal));
        }
        else if(press == 6)
        {
            decimaltohexa();
        }
        else if(press == 2)
        {
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            printf("%lld in binary = %d in octal\n", binary, convertBinarytoOctal(binary));
        }
        else if(press == 10)
        {
            hex();
        }
        else if(press == 12)
        {
            char hex[20],c;
            int n;
            printf("Enter hexadecimal number: ");
            scanf("%s",hex);
            printf("Octal number: %d\n",hex_octal(hex));
        }
        else if(press == 11)
        {
            hextodeci();
        }
        printf("\n\nDo you want to continue ?  ( y )");
        scanf("%d",&r);
    }
    while( r == 'y');
}
int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}
int convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
    i = 1;
    return decimalNumber;
}
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
int convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
int octaltohexa()
{
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long octal, tempOctal, binary, place;
    char hex[65] = "";
    int rem;
    place = 1;
    binary = 0;
    printf("Enter any octal number: ");
    scanf("%lld", &octal);
    tempOctal = octal;
    while(tempOctal > 0)
    {
        rem = tempOctal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        tempOctal /= 10;
        place *= 1000;
    }
    while(binary > 0)
    {
        rem = binary % 10000;
        switch(rem)
        {
        case 0:
            strcat(hex, "0");
            break;
        case 1:
            strcat(hex, "1");
            break;
        case 10:
            strcat(hex, "2");
            break;
        case 11:
            strcat(hex, "3");
            break;
        case 100:
            strcat(hex, "4");
            break;
        case 101:
            strcat(hex, "5");
            break;
        case 110:
            strcat(hex, "6");
            break;
        case 111:
            strcat(hex, "7");
            break;
        case 1000:
            strcat(hex, "8");
            break;
        case 1001:
            strcat(hex, "9");
            break;
        case 1010:
            strcat(hex, "A");
            break;
        case 1011:
            strcat(hex, "B");
            break;
        case 1100:
            strcat(hex, "C");
            break;
        case 1101:
            strcat(hex, "D");
            break;
        case 1110:
            strcat(hex, "E");
            break;
        case 1111:
            strcat(hex, "F");
            break;
        }
        binary /= 10000;
    }
    strrev(hex);
    printf("Octal number: %lld\n", octal);
    printf("Hexadecimal number: %s", hex);
    return 0;
}
int binarytohexa()
{
    int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000,
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};
    long long binary, tempBinary;
    char hex[20];
    int index, i, digit;
    printf("Enter binary number: ");
    scanf("%lld", &binary);
    tempBinary = binary;
    index = 0;
    while(tempBinary!=0)
    {
        digit = tempBinary % 10000;
        for(i=0; i<16; i++)
        {
            if(hexConstant[i] == digit)
            {
                if(i<10)
                {
                    hex[index] = (char)(i + 48);
                }
                else
                {
                    hex[index] = (char)((i-10) + 65);
                }
                index++;
                break;
            }
        }
        /* Remove the last 4 digits as it is processed */
        tempBinary /= 10000;
    }
    hex[index] = '\0';
    strrev(hex);
    printf("Binary number = %lld\n", binary);
    printf("Hexadecimal number = %s", hex);
    return 0;
}
int hextobinary()
{
    char hex[17], bin[65] = "";
    int i = 0;
    printf("Enter any hexadecimal number: ");
    gets(hex);
    for(i=0; hex[i]!='\0'; i++)
    {
        switch(hex[i])
        {
        case '0':
            strcat(bin, "0000");
            break;
        case '1':
            strcat(bin, "0001");
            break;
        case '2':
            strcat(bin, "0010");
            break;
        case '3':
            strcat(bin, "0011");
            break;
        case '4':
            strcat(bin, "0100");
            break;
        case '5':
            strcat(bin, "0101");
            break;
        case '6':
            strcat(bin, "0110");
            break;
        case '7':
            strcat(bin, "0111");
            break;
        case '8':
            strcat(bin, "1000");
            break;
        case '9':
            strcat(bin, "1001");
            break;
        case 'a':
        case 'A':
            strcat(bin, "1010");
            break;
        case 'b':
        case 'B':
            strcat(bin, "1011");
            break;
        case 'c':
        case 'C':
            strcat(bin, "1100");
            break;
        case 'd':
        case 'D':
            strcat(bin, "1101");
            break;
        case 'e':
        case 'E':
            strcat(bin, "1110");
            break;
        case 'f':
        case 'F':
            strcat(bin, "1111");
            break;
        default:
            printf("Invalid hexadecimal input.");
        }
    }
    printf("Hexadecimal number = %s\n", hex);
    printf("Binary number = %s", bin);
    return 0;
}
int convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
    i = 1;
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    return binaryNumber;
}
int decimaltohexa()
{
    long int decimal;
    printf("Enter any decimal number: ");
    scanf("%d",&decimal);
    printf("Equivalent hexadecimal number is: %X",decimal);
    return 0;
}
int convertBinarytoOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;
    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }
    i = 1;
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}
int hex()
{
    char hex[1000];
    int i, j;
    printf("Enter a HexaDecimal Number: ");
    scanf("%s",hex);
    j = strlen(hex);
    printf("Equivalent Binary Number is: ");
    for(i=0; i<j; i++)
    {
        switch(hex[i])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
            printf("1010");
            break;
        case 'B':
            printf("1011");
            break;
        case 'C':
            printf("1100");
            break;
        case 'D':
            printf("1101");
            break;
        case 'E':
            printf("1110");
            break;
        case 'F':
            printf("1111");
            break;
        case 'a':
            printf("1010");
            break;
        case 'b':
            printf("1011");
            break;
        case 'c':
            printf("1100");
            break;
        case 'd':
            printf("1101");
            break;
        case 'e':
            printf("1110");
            break;
        case 'f':
            printf("1111");
            break;
        }
    }
}
int hex_octal(char hex[])
{
    int i,length, decimal=0, octal=0;
    for(length=0; hex[length]!='\0'; ++length)
        ;
    for(i=0; hex[i]!='\0'; ++i,--length)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            decimal+=(hex[i]-'0')*pow(16,length-1);
        }
        if(hex[i]>='A' && hex[i]<='F')
        {
            decimal+=(hex[i]-55)*pow(16,length-1);
        }
        if(hex[i]>='a' && hex[i]<='f')
        {
            decimal+=(hex[i]-87)*pow(16,length-1);
        }
    }
    i=1;
    while(decimal!=0)
    {
        octal+=(decimal%8)*i;
        decimal/=8;
        i*=10;
    }
    return octal;
}
int hextodeci()
{
    char hex[17];
    long long decimal, place;
    int i = 0, val, len;
    decimal = 0;
    place = 1;
    printf("Enter any hexadecimal number: ");
    scanf("%s",&hex);
    len = strlen(hex);
    len--;
    for(i=0; hex[i]!='\0'; i++)
    {

        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }
        decimal += val * pow(16, len);
        len--;
    }
    printf("Hexadecimal number = %s\n", hex);
    printf("Decimal number = %lld", decimal);
}
void about()
{
    printf("1.About us.\n");
    printf("2.Help.\n");
    printf("Enter your Choice: ");
    int choice, choice2;
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\t\t\t\t<<<This Program Created By>>>\n\n\n");
        printf("\t\t\t\t\t<<<Masud Rabbani>>>\n");
        printf("\t\t\t\t\t<<<Atiqur Rahman>>>\n");
        printf("\t\t\t\t\t<<<Md. Hasan Imam Bijoy>>>\n");
        printf("\t\t\t<<<Powered By Daffodil International University>>>\n");
    }
    if(choice==2)
    {
        printf("\t\t\t\tContact us By:hasanimambijoy.cse@gmail.com\n\n\n");
        printf("\t\t\t\t\tContact us By:Facebook\n\n\n");
        printf("\t\t\t\tIf you want to Contact By Facebook Press 0\n\n");
        scanf("%d",&choice2);
        if(choice2==0)
        {
            system("Start http://www.facebook.com/HiBijoy.a2z");
            system("cls");
        }
        else
        {
            system("cls");
        }
    }
    if(choice>2)
    {
        system("cls");
        printf("Invalid Input!!Try again.");
    }
}

