#include<stdio.h>
int main()
{
	int i,s,top;
	printf("enter the size of the stack :");
	scanf("%d",&s);
	printf("enter the number of elements present in the stack :");
	scanf("%d",top);
	printf("enter the numbers in the stack :");
    for(i=0;i<top;i++)
    {
    	scanf("%d",stack[i]);
    	
	}
	
	
}
void push(int value)
{
	if(top==s-1)
	{
		printf("stack full");
		
	}
	else
	{
		top++
		
	}

}
