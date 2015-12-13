#include"stdio.h"  //输入几个数按‘0’直接求和
#define N 100
int main()
{
	int a;
    int i=0;
	int sum=0;
   while(1)
   {
       scanf("%d",&a);
       if(a==0)//为0时跳出循环
               break;
   }
   a=0;
    while(a!=0)
	{
		sum+=a;
        i++;
	}

	printf("the result is %d\n",sum);
       return 0;	

}	
