
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char p[100],q[100];
		int j,lp,lq,l;
		int a[100],b[100];
		scanf("%s%s",p,q);
		lp=strlen(p);
		lq=strlen(q);
		l=lp-lq;
		for(j=0;j<lp;j++)
		{
			if (p[j]<='9' && p[j]>=0) a[j]=p[j]-48;
		}

		for(j=0;j<lq;j++)
		{
			if (q[j]<='9' && q[j]>=0) b[j]=q[j]-48;
		}

		for (j=lq-1;j>=0;j--)
		{
			int c;
			c=a[j+l]-b[j];
			if(c>=0) a[j+l]=c;
			else 
			{
				a[j+l]=10+c;
				a[j+l-1]=a[j+l-1]-1;
			}
		}

		for(j=0;j<lp;j++)
		{
			p[j]=a[j]+48;
		}

		printf("%s\n",p);
	}


return 0;
}