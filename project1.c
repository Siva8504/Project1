#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char you, computer, result;

    srand(getpid());
    n = rand() % 100;

    if (n < 33)
        computer = 's'; 
    else if (n < 66)
        computer = 'p'; 
    else
        computer = 'c'; 

    printf("enter s for STONE, p for PAPER and c for SCISSOR\n");
    scanf("%c", &you);

    if (you == computer) {
        result = -1; 
    }
    else if (you == 's' && computer == 'p') {
        result = 0; 
    }
    else if (you == 'p' && computer == 's') {
        result = 1; 
    }
    else if (you == 's' && computer == 'c') {
        result = 1; 
    }
    else if (you == 'c' && computer == 's') {
        result = 0;
    }
    else if (you == 'p' && computer == 'c') {
        result = 0; 
    }
    else if (you == 'c' && computer == 'p') {
        result = 1; 
    }

    if (result == -1) {
        printf("Game Draw\n");
    }
    else if (result == 1) {
        printf(" You have won the game\n");
    }
    else { 
        printf(" You have lost the game\n");
    }
    printf("Your choose : %c and Computer choose : %c\n", you, computer);

    return 0;
}