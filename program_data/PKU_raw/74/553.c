void main()
{
	int m,n,i=0,j=0,k=0,b[100],a[12],s=0,h;double l;
	scanf("%d%d",&m,&n);
	for(;m<=n;m++)
	{i=0;k=m;
		while(m)
		{
			a[i]=m%10;
			m=m/10;
			i++;
		}h=i;m=k;
		for(i=0;i<h;i++)
		{    l=(double)(h-1-i);
			s=s+a[i]*pow(10.0,l);
		}
		if(m==s)
		{k=0;
			for(i=2;i<s;i++)
			{
				if(s%i==0)
					k=1;
			}
			if(k==0)
			{
				b[j]=s;j++;
			}
		}s=0;
	}
	k=j;
	if(j==0)printf("no");
	else{
		if(j==1)
		{
			printf("%d",b[0]);
		}
		else{
	for(j=0;j<k-1;j++)
	{
		printf("%d,",b[j]);
	}
	printf("%d",b[j]);}
	}
}






