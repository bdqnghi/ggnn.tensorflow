main()
{
int i,n,m,j,k;
int A[100];
int P1=0,P2=0,P3=0,P4=0,P5=0,P6=0;

scanf("%d",&n);

P1=n/100;n=n-(P1*100);
P2=n/50;n=n-(P2*50);
P3=n/20;n=n-(P3*20);
P4=n/10;n=n-10*P4;
P5=n/5;n=n-5*P5;
P6=n;


printf("%d\n%d\n%d\n%d\n%d\n%d",P1,P2,P3,P4,P5,P6);










/*for(i=0;i<n;i++)
{
	scanf("%d",&A[i]);
}

for(i=0;i<n;i++)
{
	if(A[i]<=18) P1++;
	if((A[i]>=19)&&(A[i]<=35)) P2++;
	if((A[i]>=36)&&(A[i]<=60)) P3++;
	if(A[i]>=61) P4++;
}

printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",
(double)100*P1/n,(double)100*P2/n,(double)100*P3/n,(double)100*P4/n);
*/
return 0;
}