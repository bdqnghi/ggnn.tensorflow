int main()
{
	int k;
	for(k=0;;k++)
	{
		int a[300]={0},i=0,j=0,n=0,m=0,t=0,f=0;
	scanf("%d%d",&n,&m);
	if((n==0)&&(m==0))
		break;
	if(n==1)
		printf("1\n");
	else
	{
		for(i=0;i<n;i++)
		a[i]=i+1;
		for(i=0;;i++)
		{  
			f=i;
			if(i>n-1)
				f=i%n;
			if(a[f]>0)
				t=t+1;
			if(t%m==0)
				a[f]=0;
			if(t==(n-1)*m)
				break;
		}
	for(i=0;i<n;i++)
		if(a[i]>0)
			printf("%d\n",a[i]);
	}}
			return 0;
}