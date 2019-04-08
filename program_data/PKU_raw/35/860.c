void main()
{
	int a[8][8]={0};
	int m,n,i,j,k=0,s=0,r,l,q=0,t=0;
	scanf("%d,%d",&m,&n);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
	{
		k=a[i][0];
		s=0;
		for(j=1;j<n;j++)
		{
			if(a[i][j-1]<a[i][j])
			{
				k=a[i][j];
				s=j;//????s???
			}
		}
		l=a[0][s];
		q=0;
		for(r=1;r<m;r++)
		{
			if(a[r-1][s]>a[r][s])
			{
				l=a[r][s];
			    q=r;
			}
		}
		if(k==l)
		{
			printf("%d+%d",q,s);
			t=1;
		}

	}
	if(t==0)
	printf("No");
}