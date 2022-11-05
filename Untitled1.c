#include<stdio.h>
int main()
{
    FILE *file;
    char name[25];
    int score;
    file=fopen("score.txt","a");
    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");




        {
            printf("Enter Gamer Name : ");
            scanf("%s",&name);
            printf("Enter Gamer score : ");
            scanf("%d",&score);

            fprintf(file,"\n%s\t\t%d\t\n",name,score);

        }
        printf("File is written successfully\n");

        fclose(file);
    }
    getch();
}
