int panduan(int t)
{
	int q,c=0,z,po;
	int b[20000];
	po=t;
	for (q=0;t!=0;q++)
	{
	b[q]=t%10;
	t=t/10;
	z=q;
	}
	for (q=0;q<=z;q++)
		c=10*c+b[q];
	if (c==po)
		return 1;
	else return 0;
}

int main()
{
	int m,n,j,i,r,shuzi=0,a[20000]={0};
	scanf("%d %d",&m,&n);
	a[0]=m;
	for (i=0;i<=n-m;i++)
		a[i]=m+i;
	for (j=0;j<=n-m;j++)
	{
		for (i=2;i<a[j];i++)
		{
			if (a[j]%i==0)
			{
				a[j]=0;
				break;
			}
		}
	}
	for (i=0;i<=n-m;i++)
	{
		if(a[i]!=0)
		{
			if (panduan(a[i])==0)
				a[i]=0;
		}
	}

	for (i=0;i<=n-m;i++)
	{
		if (a[i]!=0)
			shuzi++;
	}
	if (shuzi==0)
		printf("no");
	else
	{
		for (i=0;i<=n-m;i++)
		{
			if (a[i]!=0)
			{
				printf("%d",a[i]);
				r=i;
				break;
			}
		}
		for (i=r+1;i<=n-m;i++)
		{	
			if (a[i]!=0)
			{
				printf(",%d",a[i]);
			}
		}
	}


	return 0;
}







	