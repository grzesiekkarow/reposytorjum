#include <stdio.h>
int main()
{
    printf("Hello World");
    int a, b;
    int wynik;
    char c;
    printf(" Podaj dwie liczby: ");
    scanf("%i", &a);
    scanf("%i", &b);
    getchar();
    printf("Podaj dzialanie (+, -, *, /, p- pierwiastek, ^): ");
    scanf("%c",&c);
    switch(c)
    {
        case '-':
        wynik=a-b;
            printf("Wynik: %i",wynik);
            break;


    case '+':
        wynik=a+b;
            printf("Wynik: %i", wynik);
        break;

    default:
        break;
    }
    
    getchar();
    return 0;
}
