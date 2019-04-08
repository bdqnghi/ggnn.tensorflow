int main()
{
	int n,num=0,amin, bmax,i,maxb=0;
	int a[10000];
	int b[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(int j=n-1;j>0;j--)
	{
		for(int k=0;k<j;k++)
		{
			if(a[k]>a[k+1])
			{
			    int tmp,tmpx;
			    tmp=a[k+1];
				tmpx=b[k+1];
			    a[k+1]=a[k];
				b[k+1]=b[k];
				a[k]=tmp;
				b[k]=tmpx;
			}

		}
	}
	for(int m=0;m<n;m++)
	{
		if(m==0)
		{
			maxb=b[0];
		}
		else
		{
			if(b[m]>b[m-1])
			{
				maxb=b[m];
			}
		}
		if(a[m+1]>maxb)
		{
			printf("no");
			num++;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			if(b[k]>b[k+1])
			{
				int tmpy;
				tmpy=b[k+1];
				b[k+1]=b[k];
				b[k]=tmpy;
			}
		}
	}
	amin=a[0];
	bmax=b[n];
	if(num==0)
	{
		printf("%d %d",amin,bmax);
	}
	return 0;
}