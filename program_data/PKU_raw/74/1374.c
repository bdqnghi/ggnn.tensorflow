void main()
{
	int m,n,i,j,a[1000],b[1000],t,e,sum1=0,sum2=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		t=i;
		e=0;
        while(t!=0)
		{
			e=(e*10+t%10);
			t/=10;
		}
		if(e==i) 
		{
			a[sum1]=i;
			sum1++;
		}
	}
	for(i=0;i<sum1;i++)
	{
		for(j=2;j<=sqrt(a[i]);j++)
		{
			if(a[i]%j==0) break;
		}
		if(j>sqrt(a[i])) 
		{
			b[sum2]=a[i];
			sum2++;
		}
	}
	if(sum2==0) printf("no\n");
	else
	{
		printf("%d",b[0]);
		for(i=1;i<sum2;i++)
			printf(",%d",b[i]);
		printf("\n");
	}
}