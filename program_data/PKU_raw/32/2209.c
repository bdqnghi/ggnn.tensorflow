
void subtraction (char big[100], char small[100], int n)
{
	int i;
	for (i=n;i>=0;i--)
	{
		if (big[i]-small[i]>=0)
			big[i]=big[i]-small[i]+'0';
		else
		{
			big[i]=big[i]-small[i]+10+'0';
			small[i-1]=small[i-1]+1;
		}
	}
}

void main ()
{
	char numbig[100], numsmall[100];
	int i,j,lennumbig,lennumsmall,n,k;

	scanf("%d",&n);
	for (k=0;k<n;k++)
	{
		scanf ("%s",&numbig);
		scanf ("%s",&numsmall);
		getchar();

		lennumbig=strlen(numbig);
		lennumsmall=strlen(numsmall);

		for (i=lennumbig,j=lennumsmall;i>=lennumbig-lennumsmall;i--,j--)
			numsmall[i]=numsmall[j];
		for (i=0;i<lennumbig-lennumsmall;i++)
			numsmall[i]='0';
		
		subtraction(numbig,numsmall,lennumbig-1);

		puts(numbig);
	}
}