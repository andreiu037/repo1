#include <stdio.h>
void bubble_sort(int *v,int nr)
{
    int i,issorted,change,temp;
    while(issorted==0)
    {
        issorted=1;
        for(i=0;i<nr-1;i++)
        {
            if(v[i]>v[i+1])
            {
                temp=v[i+1];
                v[i+1]=v[i];
                v[i]=temp;
                issorted=0;
            }
        }
    }
}
int main()
{
    int nr,i,j;
    scanf("%d",&nr);
    int *v=malloc(nr*sizeof(int));
    bubble_sort(v,nr);
    
}