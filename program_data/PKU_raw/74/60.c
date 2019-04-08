void main()
{
	int m,n,a[10000],i,j,k=0;
	int p=0,q=0,t;
	int b[100];
	b[0]=-1;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<=i;j++)
			if(i%j==0)break;
		if(i==j)
		{
			a[k]=i;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		t=a[i];
		while(t>0)
		{
			p=p*10+t%10;
			t/=10;
		}
		if(p==a[i])
		{
			b[q]=a[i];
			q++;
		}
		p=0;
	}	
	if(b[0]>0)	
	{
		for(i=0;i<q-1;i++)
			printf("%d,",b[i]);
		printf("%d",b[q-1]);
	}
	else printf("no");
}