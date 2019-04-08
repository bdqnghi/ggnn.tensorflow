void cool(int n ,char A[100],char a)
{
	int i,j;
	for (i=0;i<n-1;i++)
	{
		if(A[i]!=-1)
		{
		for (j=i+1;j<n;j++)
		{
	        if(A[j]==-1)
				goto loap1;
			if (A[i]==A[j])
				break;
			if (A[i]!=A[j] && A[i]==a)
			{
				printf("%d %d\n",i,j);
				A[i]=-1;
				A[j]=-1;
				goto loap2;
loap1:;
			}
		}
		}
	}
loap2:;
	for (i=0;i<n;i++)
	{
		if (A[i]!=-1)
		{
			cool(n,A,a);
			break;
		}
	}
	return;
}
int main()
{
	char A[100],a;
	int n;
	gets(A);
	n=strlen(A);
	a=A[0];
	cool(n,A,a);
	return 0;
}
