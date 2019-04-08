void main()
{
	int m,n,i,j,k,a[10][10],max,s=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;)
	{
		max=0;
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				k=j;
			}
		}
	    for(j=0;j<m;j++)
			if(a[j][k]<a[i][k])
				goto a1;
		printf("%d+%d",i,k);
		s=1;
		break;
a1:     i++;
	}
	if(s==0)
		printf("No");
}