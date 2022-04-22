#include<stdio.h>

int lcm(int, int);  

int main()
{
    int a, b, result;
    printf("Enter 2 integers to find LCM of:");
    scanf("%d%d", &a, &b);
    result = lcm(a,b);
    printf(" LCM of %d and %d is: %d", a, b, result);
    return 0;
}

int lcm(int a, int b) 
{
    static int x = 1;    
    if(x%a == 0 && x%b == 0)
    {
        return x;
    }
	else
    {
        x++;
        lcm(a,b);
        return x;
    }
}
   
