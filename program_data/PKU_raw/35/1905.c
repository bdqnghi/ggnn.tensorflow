int main()
{
    int i,j,n,m,max,min,k=0;
	int a[10][10],r1[10],l1[10],r2[10],l2[10];
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{   max=a[i][0];
	    r1[i]=i;
        l1[i]=0;
		for(j=1;j<m;j++)
		{   
			if(a[i][j]>max)
			{
				max=a[i][j];
				r1[i]=i;l1[i]=j;
			}
		}
	}
	for(j=0;j<m;j++)
	{
		min=a[0][j];
		r2[j]=0;
		l2[j]=j;
		for(i=0;i<n;i++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				r2[j]=i;l2[j]=j;
			}
		}
	}
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(r1[i]==r2[j]&&l1[i]==l2[j])
			{   k=1;
				printf("%d+%d\n",r1[i],l2[j]);
			}
				
		}
	if(k==0) printf("No\n");
}

	



