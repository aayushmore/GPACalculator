#include<stdio.h>
#include<stdlib.h>

struct GPA
{
    char sub[50];
    char grd;
    int cred;
}g[9];

void main()
{
    int i,n;
    int total=0;
    int tc=0;
    float f;
    printf("Enter number of subjects: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Subject: ");
        scanf("%s",&g[i].sub);
        printf("Enter Grade: ");
        scanf("%s",&g[i].grd);
        printf("Enter Credits: ");
        scanf("%d",&g[i].cred);
    }

    for(i=0;i<n;i++)
    {
        if(g[i].grd=='+')
        {
            total+=g[i].cred*10;
            tc+=g[i].cred;
        }
        else if(g[i].grd=='A'|| g[i].grd=='a')
        {
            total+=g[i].cred*9;
            tc+=g[i].cred;
        }
        else if(g[i].grd=='B'|| g[i].grd=='b')
        {
            total+=g[i].cred*8;
            tc+=g[i].cred;
        }
        else if(g[i].grd=='C'|| g[i].grd=='c')
        {
            total+=g[i].cred*7;
            tc+=g[i].cred;
        }
        else if(g[i].grd=='D'|| g[i].grd=='d')
        {
            total+=g[i].cred*6;
            tc+=g[i].cred;
        }
        else if(g[i].grd=='E'|| g[i].grd=='e')
        {
            total+=g[i].cred*5;
            tc+=g[i].cred;
        }
    }
    f=total/tc;
    printf("\nTotal Points: %d",total);
    printf("\nTotal Credits: %d",tc);
    printf("\nGPA: %f",f);

}
