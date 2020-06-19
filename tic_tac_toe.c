#include <stdio.h>
#include <stdlib.h>
char a[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int k=0, end=1;
void draw()
{
    printf("\n\t\t      %c    |       %c      |       %c",a[0], a[1], a[2]);
    printf("\n\t\t-----------------------------------------");
    printf("\n\t\t      %c    |       %c      |       %c",a[3], a[4], a[5]);
     printf("\n\t\t-----------------------------------------");
    printf("\n\t\t      %c    |       %c      |       %c",a[6], a[7], a[8]);
}
void getinput()
{
    char ch;
    int i;
    printf("\nenter position\t");
    scanf("%c", &ch);
    if (k==0)
    {
        for (i=0; i<=8; i++)
    {
        if (a[i] == ch)
        {
            a[i] = 'x';
            k=1;
            break;
        }
    }
}
    else
    {
        for (i=0; i<=8; i++)
    {
        if (a[i] == ch)
        {
            a[i] = 'o';
            k=0;
            break;
        }
    }
}
}
int gameover()
{
    if (a[0] == 'x' && a[1] == 'x' && a[2] == 'x')
        return 1;
   else if (a[0] == 'x' && a[3] == 'x' && a[6] == 'x')
        return 1;
   else if (a[0] == 'x' && a[4] == 'x' && a[8] == 'x')
        return 1;
   else if (a[1] == 'x' && a[4] == 'x' && a[7] == 'x')
        return 1;
   else if (a[2] == 'x' && a[5] == 'x' && a[8] == 'x')
        return 1;
   else if (a[2] == 'x' && a[4] == 'x' && a[6] == 'x')
        return 1;
   else if (a[3] == 'x' && a[4] == 'x' && a[5] == 'x')
        return 1;
   else if (a[6] == 'x' && a[7] == 'x' && a[8] == 'x')
        return 1;

    if (a[0] == 'o' && a[1] == 'o' && a[2] == 'o')
        return 2;
     else if (a[0] == 'o' && a[3] == 'o' && a[6] == 'o')
        return 2;
    else if (a[0] == 'o' && a[4] == 'o' && a[8] == 'o')
        return 2;
    else if (a[1] == 'o' && a[4] == 'o' && a[7] == 'o')
        return 2;
     else if (a[2] == 'o' && a[5] == 'o' && a[8] == 'o')
        return 2;
   else if (a[2] == 'o' && a[4] == 'o' && a[6] == 'o')
        return 2;
   else if (a[3] == 'o' && a[4] == 'o' && a[5] == 'o')
        return 2;
   else if (a[6] == 'o' && a[7] == 'o' && a[8] == 'o')
        return 2;
    else
        return 3;
}
void final()
{
    int var;
    var = gameover();
    if (var == 1)
    {
        printf("\nplayer %d won", var);
        end=0;
    }
    if (var == 2)
    {
        printf("\nplayer %d won", var);
        end=0;
    }
    else;
}
void main()
{
    char c;
    system("cls");
    label:
    draw();
    while (end)
    {
    getinput();
    system("cls");
    draw();
    final();
    }
    printf("\ndo you want to play again? press y or Y for yes\t");
    fflush(stdin);
    scanf("%c", &c);
    if (c == 'y' || c == 'Y')
    {
            a[0] = '1'; a[1] = '2'; a[2] = '3';
            a[3] = '4'; a[4] = '5'; a[5] = '6';
            a[6] = '7'; a[7] = '8'; a[8] = '9';
            k=0;
            end=1;
          goto label;
    }
}
