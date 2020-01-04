#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main()
{
// instruction on how to play games
    printf("Welcome to treasure hunt, please enter direction and steps you would like to go and the computer will guide you to the treasure you want.\n");
    char d;
    int x, y, d1;
    //getting random number
    x = 1+ rand() % 100;
    y = 1+ rand() % 100;
    //starting the loop
    while (x!=0 || y!=0)
    {
        printf("Enter the direction(E,W,N,S) and number: ");
        scanf("%c %d", &d, &d1);
        //starting switch to check cases
        switch (d)
        {
            case 'E' :
            {
                x =x + d1;
                if (x == 0 && y >0)
                printf("Head north \n");
                else if(x==0 && y < 0)
                printf("Head south\n");
                else if(y==0 && x > 0)
                printf("Head west\n");
               else if(y==0 && x < 0)
               printf("Head east\n");
                else if (x != 0 && x>0)
                printf("Head north west\n");
                else if (x!=0 && x<0)
                printf("Head north east\n");
                break;
            }
            case 'W' :
             {
                 x = x - d1 ;
                if (x == 0 && y >0)
                printf("Head north \n");
                else if(x==0 && y < 0)
                printf("Head south\n");
                else if(y==0 && x > 0)
                printf("Head west\n");
                else if(y==0 && x < 0)
                printf("Head east\n");
                else if (x != 0 && x>0)
                printf("Head north west\n");
                else if (x!= 0 && x<0)
                printf("Head north east\n");
                break;
             }
            case 'S' :
            {
                y = y + d1;
                if (x == 0 && y >0)
                printf("Head north \n");
                else if(x==0 && y < 0)
                printf("Head south\n");
                else if(y==0 && x > 0)
                printf("Head west\n");
                else if(y==0 && x < 0)
                printf("Head east\n");
                else if (y != 0 && y>0)
                printf("Head north west\n");
                else if(y != 0 && y<0 )
                printf("Head south west\n");
                break;
            }
            case 'N' :
            {
                y = y - d1;
                if (x == 0 && y >0)
                printf("Head north \n");
                else if(x==0 && y < 0)
                printf("Head south\n");
                else if(y==0 && x > 0)
                printf("Head west\n");
                else if(y==0 && x < 0)
                
                break;
            }
                default:
                printf("Invalid input\n");
                //this code is to clear buffer if you don't understand this don't i also don't
                while ( getchar() != '\n' );
                break;
        }
    }
    //end of loop you won game 
    printf("Treasure found\n");
    return 0;

}
