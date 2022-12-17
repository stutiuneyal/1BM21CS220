#include <stdio.h>

int mini(int a,int b)
 {
     if(a<b)
     return(a);
     else
     return(b);
 }
void main()
{
    int height[100000],n,i,c1=0,j,count[100000],c2,min,max,k;
    printf("Enter the no of people \n");
    scanf("%d",&n);
     printf("Enter the heights of people \n");
     for(i=0;i<n;i++)
     {    printf("Enter the heights of person %d \n",(i+1));
         scanf("%d",&height[i]);
       for(j=0;j<i;j++)
       {
           if(height[j]==height[i])
           {
               printf("Dont repeat heights");
               i--; c1=1;
               break;
           }
       }
       if(c1==1)
       {
           continue;
       }

     }
     for(i=0;i<n;i++)
     { count[i]=0;
         if(i==(n-1))
         { count[i]=0 ;break;}
        count[i]++;
        for(j=(i+2);j<n;j++)
        {
         min=mini(height[i],height[j]);max=height[i+1];
         for(k=i+1;k<=(j-1);k++)
         {
            if(height[k]>max)
            {
                max=height[k];
            }

         }
         if(min>max)
        {

            count[i]++;
        }
        }

     }
     for(i=0;i<n;i++)
     {
         printf("%d",count[i]);
     }

}
