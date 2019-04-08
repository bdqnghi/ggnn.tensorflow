
int findmin(int *a, int n, int step)
{
	int min = 32767;
	while(n>0)
	{
		if(min>*a) min=*a;
		a+=step;
		n--;
	}
	return min;
}

void main()
{
	int n,k,a[100][100],i,j,l, sum,t;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		sum=0;
		for(i=n;i>=2;i--)
		{
			for(j=0;j<i;j++)
			{	
				t=findmin(a[j],i,1);
				for(l=0;l<i;l++)
					a[j][l]-=t;
			}
			for(j=0;j<i;j++)
			{
				t=findmin(&a[0][j],i,100);
				for(l=0;l<i;l++)
					a[l][j]-=t;
			}

			sum+=a[1][1];
			
			for(j=1;j<i-1;j++)
			{
				for(l=0;l<i;l++)
					a[j][l]=a[j+1][l];
				for(l=0;l<i;l++)
					a[l][j]=a[l][j+1];
			}
		}
		printf("%d\n",sum);
	}
}