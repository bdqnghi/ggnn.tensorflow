int main()
{
	int n,sum=0;
	int h,l,a[100][100],i,j,m;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%d%d",&h,&l);
		for(i=0;i<h;i++)
		{
			for(j=0;j<l;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
                 if(h<2&&l<2)
                   {printf("%d",a[0][0]);
                      continue;}
		for(j=0;j<l;j++)
		{
			sum+=a[0][j];
			sum+=a[h-1][j];
		}
		for(i=0;i<h;i++)
		{
			sum+=a[i][0];
			sum+=a[i][l-1];
		}
		sum=sum-a[0][0]-a[0][l-1]-a[h-1][0]-a[h-1][l-1];
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}


