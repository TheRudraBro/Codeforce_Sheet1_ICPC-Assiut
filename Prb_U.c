// This code submitted By TheRudraBro !!

#include<stdio.h>
#include<math.h>
 
int main()
{
    float N;
    scanf("%f", &N);
    
    if (N == (int)N)
    {
        printf("int %d\n", (int)N);
    }
    else
    {
        printf("float %d %.3f\n", (int)N, N - (int)N);
    }
 
    return 0;
}