#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<string.h>

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
char copy[10]={'1','2','3','4','5','6','7','8','9'};

int player;
int choice;

void winBoard();
int checkForWin();
void displayBoard();
void markBoard(char mark, int choice);
void removeElement(char array[], char elementToRemove);
int generateRandomNumber(int start, int end);

int main()
{
    printf("\n\nTic Tac Toe Game\n\n");
    printf("Your move (X) - Computer's move (O)\n\n\n");
    int i = -1;
    char mark;
    player = 1;
    while (i == -1)
    {
        if (player == 1)
        {
            displayBoard();
            printf("Your turn, enter the your choice: ");
            scanf("%d", &choice);
            mark = 'X';
            markBoard(mark,choice);
        }
        else
        {
            int index=generateRandomNumber(0,strlen(copy)-1);
            char computerChoice = copy[index];
            printf("Computer's turn finished\n\n\n");
            mark = 'O';
            markBoard(mark, computerChoice - '0');
        }
        i = checkForWin();
        if (i == -1)
            player = (player % 2) + 1;
    }
    if (i == 1)
        {
            printf("\n");
            printf("    GAME OVER\n");
            winBoard();
            if(player==1)
                printf("Winner:User");
            else
                printf("Winner:Computer");
        }
    else
        printf("It's a draw!\n");
    printf("\nEnd of the game!\n");
    return 0;
}

void displayBoard()
{
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c\n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c\n", square[7], square[8], square[9]);
    printf("     |     |     \n\n");
}

void markBoard(char mark,int choice)
{
    removeElement(copy,choice+'\0');
    if (choice == 1 && square[1] == '1')
        square[1] = mark;
    else if (choice == 2 && square[2] == '2')
        square[2] = mark;
    else if (choice == 3 && square[3] == '3')
        square[3] = mark;
    else if (choice == 4 && square[4] == '4')
        square[4] = mark;
    else if (choice == 5 && square[5] == '5')
        square[5] = mark;
    else if (choice == 6 && square[6] == '6')
        square[6] = mark;
    else if (choice == 7 && square[7] == '7')
        square[7] = mark;
    else if (choice == 8 && square[8] == '8')
        square[8] = mark;
    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
    else
    {
        if (player == 1)
            printf("Invalid move. Try again.\n");
        else
            printf("Computer made an invalid move.\n");
        if (player == 1)
            player--;
    }
}

void removeElement(char array[], char elementToRemove)
{
    int i, j;
    for (i = 0, j = 0; array[i] != '\0';++i)
        {
        if (array[i] != elementToRemove)
            array[j++] = array[i];
        }
    array[j] = '\0';
}

int generateRandomNumber(int start, int end)
{
    srand(time(NULL));
    int random_number = rand() % (end - start + 1) + start;
    return random_number;
}

void winBoard()
{
    printf(" _________________\n");
    printf("|                 |\n");
    printf("|  %c  |  %c  |  %c  |\n", square[1], square[2], square[3]);
    printf("|_____|_____|_____|\n");
    printf("|     |     |     |\n");
    printf("|  %c  |  %c  |  %c  |\n", square[4], square[5], square[6]);
    printf("|_____|_____|_____|\n");
    printf("|     |     |     |\n");
    printf("|  %c  |  %c  |  %c  |\n", square[7], square[8], square[9]);
    printf("|_________________|\n");
}

int checkForWin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' &&
             square[5] != '5' && square[6] != '6' && square[7] != '7' &&
             square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
}
