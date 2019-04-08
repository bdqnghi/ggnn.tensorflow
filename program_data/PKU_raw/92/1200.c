
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
}

void main()
{
	int n,i,a[1000],b[1000],qa,ra,qb,rb,sum;
	while(scanf("%d",&n) && n!=0)
	{
		sum=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		sort(a,n);
		sort(b,n);
		ra=0;rb=0;qa=n-1;qb=n-1;
		while(ra<=qa)
		{
			if(a[qa]>b[qb]) sum+=200,qa--,qb--;
			else if(a[ra]>b[rb]) sum+=200,ra++,rb++;
			else
			{
				if(a[ra]<b[qb]) sum-=200;
				ra++,qb--;
			}
		}
		printf("%d\n",sum);
	}
}