void main()
{
	int a[10][10]={0},p,q,i,j,maxi,maxj,max,t,time,m;

	scanf("%d,%d",&p,&q);
	
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
			scanf("%d",&a[i][j]);

	
		m=0;
	for(i=0;i<p;i++)
	{
		max=a[i][0];
		maxi=i;
		maxj=0;
		time=0;
		for(j=0;j<q;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				maxj=j;
				maxi=i;
			}
		}
		for(t=0;t<p;t++)
		{
			if(a[t][maxj]<max)
				break;
			else
				time++;
		}
		if(time==p)
		{
			printf("%d+%d",maxi,maxj);
			m=1;
		}
	}
	if(m==0)
		printf("No");

}