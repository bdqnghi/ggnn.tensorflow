
int cross_out(int *q,int n)
{
	int m=0,i,j,k;
	for(i=0;i<n-m;i++)
		for(j=i+1;j<n-m;j++)
		{
			if(*(q+i)==*(q+j))
			{
				for(k=j;k<n-m-1;k++)
					*(q+k)=*(q+k+1);
				j--;
				m++;
			}
		}
	return m;
}

void main()
{
	int m,n,i,a[301],*p=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	m=cross_out(p,n);
	for(i=0;i<n-m-1;i++)
		printf("%d,",*(p+i));
	printf("%d",*(p+i));
	/*printf("%d",m);*/
}