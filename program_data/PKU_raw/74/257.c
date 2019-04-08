void main()
{
	int reverse(int t);
	int prime(int t);
	int m,n,t,k=0,rev,f=0;
	int a[100000],*p;
	p=a;
	scanf("%d%d",&m,&n);
	for(t=m;t<=n;t++)
	{
		rev=reverse(t);
		if(t==rev)
		{
			f=prime(t);
			if(f==1)
			{
				*p=t;
				p++;
				k++;
				
			}
		}
		
	}

	if(p>a)
	{
	for(p=a;p<a+k-1;p++)
			printf("%d,",*p);
		printf("%d",*p);
	}
	else
		printf("no\n");
	
}
int reverse(int t)
{
	int r=0,b[100000],*q,rev;
	
	for(q=b;t>=1;q++,r++)
	{
		*q=t%10;
		t=t/10;
	}
	q=b;
	for(rev=0;q<b+r;q++)
	{
		rev=rev*10+*q;
	}
	return rev;
}

int prime(int t)
{
	int k,i;
	k=sqrt(t);
	for(i=2;i<=k;i++)
	{
		if(t%i==0)
			break;
	}
	if(i>k) return 1;
	else return 0;
	
}
