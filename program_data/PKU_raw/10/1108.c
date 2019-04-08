int main()
{ 
	int m,t,j,i;
	scanf("%d",&m);
	int *a,*b;
	a=(int *)malloc(sizeof(int)*m);
	b=(int *)malloc(sizeof(int)*m);
	for(i=0;i<m;i++) scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	{
		b[i]=0;
		for(j=0;j<i;j++)
		{
			if(a[j]>=a[i])
			   if(b[j]>b[i])   b[i]=b[j];
		}
		b[i]=b[i]+1;
	}
	t=0;
    for(i=0;i<m;i++)
		if(b[i]>t) t=b[i];
	printf("%d\n",t);
}