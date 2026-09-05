// Print armstrong numbers in the given range 1 to n.

#include<stdio.h>
#include<math.h>

int main()
{
    int num,temp,r1,sum=0,n=1,count=0;
    printf("Enter the range :");
    scanf("%d",&num);

    
    while (n <= num)
    {    
        temp = n;
        while (temp != 0)
        {
            count++;
            temp = temp / 10;
        }
        
        while (temp != 0)
        {   
            r1 = temp % 10;
            sum = sum + pow(r1,count);
            temp = temp / 10;    
        }
         
        if (sum == n)
        {
            printf("\n %d is an Armstrong number",n);
        }
    
    n++;
    }

    return 0;
}




