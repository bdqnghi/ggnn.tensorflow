int main()
{
	int i,j,a[5][5],t[5],m[5],tag=0;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
	t[i]=a[i][0];
	for(j=0;j<5;j++)
	m[j]=a[0][j];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(t[i]<a[i][j])t[i]=a[i][j];
			if(m[i]>a[j][i])m[i]=a[j][i];
		}
	}
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
		if(a[i][j]==t[i]&&a[i][j]==m[j])
		{
			printf("%d %d %d\n",i+1,j+1,a[i][j]);
			tag++;
		}
	}
	if(tag==0)
	printf("not found\n");
	return 0;
}
