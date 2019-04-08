int main()
{
	int N,i,j;
	scanf("%d",&N);
	int a[100],b[100],max=0;
	memset(b,0,sizeof(b));
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]<=a[j])
				b[i]=(b[j]+1)>b[i]?(b[j]+1):b[i];
		}
		max=max>b[i]?max:b[i];
	}
	printf("%d",max+1);
}
