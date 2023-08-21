#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32

 void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
int main()
{
    int row ,col ,value;
    int size;
    do
    {
        printf("Enter an odd number ONLY for the size: ");
        scanf("%d", &size);
    } while (size % 2 == 0);

    row=1;
    col=(size+1)/2;
    value =1;

   do{
     gotoxy (col*5, row) ;
     printf ("%5d", value);
    if (value%size==0)
        row++;
    else
        row--;
        col--;
    if (row==0)
        row=size;
    if (col==0)
        col=size;
    value++;
   }while(value <= size*size);
}
