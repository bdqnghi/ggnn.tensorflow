int main()
{
	int m,n,i,k,j=0,t=0,flag,r,b,c[10000]={0},a[10000]={0},d[10000]={0},s=0,l;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		flag=0;
		k=2;
		while(k<sqrt(n))
		{
			r=i%k;
			if(r==0)
			{
				flag=1;
				break;
			}
			else k++;
		}
		if(flag==0)
		{
			a[j]=i;
			j++;
		}
	}
	l=j;
	for(j=0;j<l;j++)
	{
		b=a[j];
		i=0;
		flag=0;
		while(b>0)
		{		
			c[i]=b%10;
			b=(b-c[i])/10;
			i++;
		}
		k=i;
		for(i=0;i<k/2;i++)
			if(c[i]!=c[k-i-1])
			{
				flag=1;
				break;
			}
			if(flag==0)
			{				
				d[s]=a[j];
				s++;
				t++;
			}
	}
	if(t>0)
	{
		for(i=0;i<s-1;i++)
		printf("%d,",d[i]);
		printf("%d",d[s-1]);
	}
	if(t==0)printf("no");
	return 0;
}

