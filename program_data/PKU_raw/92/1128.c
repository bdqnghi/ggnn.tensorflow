int main()
{
	int n;
	int a[1000],b[1000];                    //a????b???
	int circle,i,j;
	int i1,i2,j1,j2;
	int count,win;
	int t;
	for(circle=0;;circle++)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
				if(a[j]<a[j+1])
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
				if(b[j]<b[j+1])
				{
					t=b[j];
					b[j]=b[j+1];
					b[j+1]=t;
				}
		}
		win=0;
		count=0;
		i1=0;
		i2=n-1;
		j1=0;
		j2=n-1;
		while(count<n)
		{
			for(;i1<=n-1-(n-1-i2);i1++,j1++)
			{
				if(a[i1]>b[j1])
				{
					win++;
					count++;
				}
				else
				{
					j1++;
					break;
				}
			}              //??
			if(count==n)
				break;
			for(;j2>=0;i2--,j2--)
			{
				if(a[i2]>b[j2])
				{
					win++;
					count++;
				}
				else
				{
					i2--;
					break;
				}
			}                       //??
			if(count==n)
				break;
			if(a[i2+1]<b[j1-1])
				win--;                 //?a[t2]?b[t1]?
			count++;
		}
		printf("%d\n",win*200);
	}
	return 0;
}