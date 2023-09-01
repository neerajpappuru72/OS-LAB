#include<stdio.h>
int main()
{
	int wt[20],bt[20],tat[20],i,n;
	float wtavg,tatavg;
	printf("Enter the number of processes -- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\nEnter burst time for process %d -- ",i);
		scanf("%d",&bt[i]);
	}
	wt[0]=wtavg=0;
	tat[0]=tatavg=bt[0];
	for(i=1;i<=n;i++){
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=tat[i-1]+bt[i];
		wtavg=wtavg+wt[i];
		tatavg=tatavg+tat[i];
	}
	printf("\tPROCESS \tBURST TIME\t WAITING TIME\t TURNAROUND TIME\n");
	for(i=1;i<=n;i++){
		printf("\n\tP%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
	}
	printf("\nAverage Waiting time --%f",wtavg/n);
	printf("\nAverage TurnAround time --%f\n",tatavg/n);
}

