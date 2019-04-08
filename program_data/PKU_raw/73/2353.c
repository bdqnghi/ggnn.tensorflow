int main()
{
	int a[5][5],i,j,m,n,t,k,l,p,z=1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	for(m=0;m<5;m++)
	{
		t=a[m][0];
		p=0;
		for(n=0;n<5;n++)
		{
			if(a[m][n]>t)
			{
			t=a[m][n];
			p=n;
			}
		}
		k=1;
		for(l=0;l<5;l++)
		{
			if(a[l][p]<t)
			{
				k=0;break;
			}
		}
		if(k){
			printf("%d %d %d",m+1,p+1,a[m][p]);z=0;}
	}
	if(z)
		printf("not found");
	return 0;
}