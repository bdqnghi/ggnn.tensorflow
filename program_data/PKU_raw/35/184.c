void main()
{
	int a[9][9],m,n,i,r,j,max_l,temp,f=0,h=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			f=0;
			for(r=0;r<n;r++)
				if(a[i][j]<a[i][r])
				{
					f=1;
					
				}
			for(r=0;r<m;r++)
				if(a[i][j]>a[r][j])
					f=1;
			if(f==0)
			{

				printf("%d+%d",i,j);
				h=1;
			}

		}
	if(h==0)
		printf("No");


}
