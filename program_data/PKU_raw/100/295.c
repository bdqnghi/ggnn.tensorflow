void main()
{
	int i,j,n,t,num,k,xiaoxie,zero,NUM[300];
	char c,Original[300],A[300],B[300],C[300];
	c='a';
	for (i=0;c!='\n';i++)
	{
		c=getchar();
		Original[i]=c;
		A[i]=c;
	}
	n=i;
	xiaoxie=0;
	for (i=0;i<=n-1;i++)
	{
		if ((Original[i]>=97)&&(Original[i]<=122))
		{
			xiaoxie=1;
		}
	}
	for (i=0,k=0;i<=n-1;i++)
	{
		if ((A[i]>=97)&&(A[i]<=122))
		{
			B[k]=A[i];
			k=k+1;
		}
	}
	n=k;
	k=0;
	for (i=0;i<300;i++)
		NUM[i]=1;
	for (i=0;i<=n-1;i++)
	{
		if (B[i]!=0)
		{
			for (j=i+1;j<=n-1;j++)
			{
				if (B[i]==B[j])
				{
					B[j]=0;
					NUM[k]=NUM[k]+1;
				}	
			}
			k=k+1;
		}
	}
		for (j=0;j<=n-1;j++)
		{

		for (i=0;i<n-1-j;i++)
		{
			if (B[i]==0)
			{
				zero=B[i];
				B[i]=B[i+1];
				B[i+1]=zero;
			}
		}
		}
		for (i=0;i<k;i++)
		{
			C[i]=B[i];
		}	
		for (j=0;j<k;j++)
		{
			for (i=0;i<k-j;i++)
			{
				if (C[i]<C[i+1])
				{
					c=C[i];
					C[i]=C[i+1];
					C[i+1]=c;
					t=NUM[i];
					NUM[i]=NUM[i+1];
					NUM[i+1]=t;
				}
			}
		}

		if (xiaoxie==0)
			printf("No\n");
		else
		{
			for (i=k-1;i>=0;i--)
			{
				printf("%c=%d\n",C[i],NUM[i]);
			}
		}
}
	

				

				








