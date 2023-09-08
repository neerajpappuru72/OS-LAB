#include<stdio.h>
void main()
{
	int buffer[10],buffsize,in,out,produce,consume,choice;
	choice=0,in=0,out=0,buffsize=10;
	while(choice!=3)
	{
		printf("1.Produce\t2.Consume\t3.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: if((in+1)%buffsize==out)
				{
					printf("Buffer is Full\n");
				}
				else
				{
					printf("Enter the value:");
					scanf("%d",&produce);
					buffer[in]=produce;
					in=(in+1)%buffsize;
				}
				break;
			case 2: if(in==out)
				{
					printf("Buffer is Empty\n");
				}
				else
				{
					consume=buffer[out];
					printf("Enter consumed value is %d\n",consume);
					out=(out+1)%buffsize;
				}
				break;
		}
	}
}
					
