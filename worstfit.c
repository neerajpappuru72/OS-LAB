#include<stdio.h>
//#include<conio.h>
#define max 25
void main()
{
	int frag[max],f[max],b[max],i,j,nf,nb,temp,highest=0;
	static int bf[max],ff[max];
	printf("\n\tMemory Management Scheme - Worst Fit");
	printf("\nEnter no. of blocks:");
	scanf("%d",&nb);
	printf("Enter no. of files:");
	scanf("%d",&nf);
	printf("\nEnter the size of Blocks:-\n");
	for(i=1;i<=nb;i++)
	{
		printf("Block %d:",i);
		scanf("%d",&b[i]);
	}
	printf("\nEnter size of Files:-\n");
	for(i=1;i<=nf;i++)
	{
		printf("File %d:",i);
		scanf("%d",&f[i]);
	}
	for(i=1;i<=nf;i++)
	{
		for(j=1;j<=nb;j++)
		{
			if(bf[j]!=1)
			{
				temp=b[j]-f[i];
				if(temp>=0)
				{
					if(highest<temp)
					{
						ff[i]=j;
						highest=temp;
					}
				}
			}
		}
		frag[i]=highest;
		bf[ff[i]]=1;
		highest=0;
	}
	printf("file_no:\tfile_size:\tblock_no:\tblock_size:\tfragment:\n");
	for(i=1;i<=nf;i++)
	printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,f[i],ff[i],b[ff[i]],frag[i]);
}
						
					
	
	
