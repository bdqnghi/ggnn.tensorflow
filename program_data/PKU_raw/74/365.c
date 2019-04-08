void main()
{
	int m,n,i,temp,p,k,x=0,j;
	int a[100];
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		j=2;
		while(i%j!=0&&j<i)
			j++;
		if(j==i)
		{
			temp=i;
			p=0;
			while(temp>0)
			{ 
				k=temp%10;
			    p=p*10+k;
			    temp=temp/10;
			}
			if(i==p)
			{
				a[x]=i;
				x++;
			}
		}
	}
	if(x==0)
		printf("no\n");
	else
	{
		for(i=0;i<x-1;i++)

			printf("%d,",a[i]);
			printf("%d\n",a[x-1]);

	}
}