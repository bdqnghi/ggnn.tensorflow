void main()
{
	int m,n,i,j,a[8][8],point,max[8],min[8],flag=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
		{
			max[i]=a[i][0];
			for(j=0;j<n;j++)
				if(a[i][j]>max[i]) max[i]=a[i][j];
		}
	for(j=0;j<n;j++)
		{
			min[j]=a[0][j];
			for(i=0;i<m;i++)
				if(a[i][j]<min[j]) min[j]=a[i][j];
		}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(max[i]==min[j])
				{printf("%d+%d",i,j);flag=1;}
			if(flag==0) printf("No");
}
