int main()
{
	int a[5][5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)scanf("%d",&a[i][j]);
	}
	int c[100]={0};
	int m;
	int t=0;
	for(i=0;i<5;i++)
	{
		m=0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]>a[i][m])m=j;
		}
		c[10*i+m]++;
	}
	for(j=0;j<5;j++)
	{
		m=0;
		for(i=0;i<5;i++)
		{
			if(a[i][j]<a[m][j])m=i;
		}
		c[10*m+j]++;
	}
	for(i=0;i<100;i++)
	{
		if(c[i]>1){printf("%d %d %d\n",i/10+1,i%10+1,a[i/10][i%10]);t=1;}
	}
	if(t==0)printf("not found\n");
	return 0;

}