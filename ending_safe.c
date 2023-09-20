#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))



long long n;
int w[100240],score[100240];//分别表示安全指标的重要程度 和 小菜同学该项的得分；


long long i,j;



int main()
{    long long sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)scanf("%d %d",&w[i],&score[i]);
    for(i=1;i<=n;i++)
    {
        sum+=w[i]*score[i];
    
    
    
        
    }
    if(sum>0)
        printf("%d",sum);
    else
        printf("%d",0);
    
    
    
    
    
    return 0;
    
    
}
