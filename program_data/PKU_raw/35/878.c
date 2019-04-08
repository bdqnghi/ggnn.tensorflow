void main()
{
	int m,n,i,j,k,t,flag,hang,lei;
	int max;
	int a[8][8];
	flag=1;
	hang=1;

	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	for(i=0;i<m;i++)
	{
		max=a[i][0];
		for(j=1;j<n;j++)
			if(a[i][j]>a[i][j-1])
				max=a[i][j];

			
		for(j=0;j<n;j++)
			if(a[i][j]==max)
				break;
			
		for(k=0;k<i;k++)
			if(a[k][j]<a[i][j])
			flag=0;
			if(flag!=0)
			{
				for(k=i+1;k<m;k++)
					if(a[k][j]<a[i][j])
						flag=0;
			}
			if(flag!=0)
			{
				hang=0;
				printf("%d+%d",i,j);
				break;
			}
	}
	if(hang!=0)
		printf("No");


		


}
