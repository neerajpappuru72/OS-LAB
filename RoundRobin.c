#include<stdio.h>
int main()
{
	int i,j,n,bt[20],wt[20],tat[20],t,ct[20],max;
	float awt=0,att=0,temp=0;
	printf("Enter number of Processes -- ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter burst Time for Process %d -- ",i+1);
		scanf("%d",&bt[i]);
		ct[i]=bt[i];
	}
	printf("\nEnter the size of time slice -- ");
	scanf("%d",&t);
	max=bt[0];
	for(i=1;i<n;i++)
	if(max<bt[i])
	max=bt[i];
	for(j=0;j<(max/t)+1;j++)
	for(i=0;i<n;i++)
	if(bt[i]!=0)
	if(bt[i]<=t) {
		tat[i]=temp+bt[i];
		temp=temp+bt[i];
		bt[i]=0;
	}
	else {
		bt[i]=bt[i]-t;
		temp=temp+t;
	}
	for(i=0;i<n;i++){
		wt[i]=tat[i]-ct[i]; 
		att+=tat[i];
		awt+=wt[i];
	}
	printf("\tPROCESS \tBURST TIME\t WAITING TIME\t TURNAROUND TIME\n");
	for(i=0;i<n;i++)
	{
		printf("\n\tP%d\t\t%d\t\t%d\t\t%d",i+1,ct[i],wt[i],tat[i]);
	}
	printf("\nAverage Waiting Time -- %f",awt/n);
	printf("\nAverage TurnAround Time -- %f",att/n);
}
