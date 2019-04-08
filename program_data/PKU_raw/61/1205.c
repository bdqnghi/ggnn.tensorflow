int f(int n)
{
	int i;
	int A[20];
	A[1]=1;
	A[2]=1;
     for(i=3;i<=n;i++)
	 {
		 A[i]=A[i-1]+A[i-2]; 
	 }
	return A[n];
}

int main()
{
	int n,i,p,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		s=f(p);
		printf("%d\n",s);
	}

	return 0;
}

