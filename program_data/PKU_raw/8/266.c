int n,m,N[100],M[100];
void scan()
{int i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&N[i]);
	for(i=0;i<m;i++)
		scanf("%d",&M[i]);
}
void sort(int q,int a[])
{
	int i,j,k,t;
	for(i=0;i<q-1;i++)
	{k=i;
		for(j=i+1;j<q;j++)
			if(a[j]<a[k])  k=j;
		if(k!=i)
		{t=a[i];
		a[i]=a[k];
		a[k]=t;}
	}
}
void print()
{int i;
    printf("%d",N[0]);
	for(i=1;i<n;i++)
		printf(" %d",N[i]);
	for(i=0;i<m;i++)
		printf(" %d",M[i]);
	printf("\n");
}
void main()
{
	scan();
	sort(n,N);
	sort(m,M);
	print();
}