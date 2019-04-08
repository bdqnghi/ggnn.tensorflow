int main()
{
	int a[1000]={0},i=0,b[1000][2]={0},n=0,j,max;
	char c;
	do
	{
		scanf("%d%c",&b[i][0],&c);
		n++;
		i++;
	}while(c!='\n');
	i=0;
	c=0;
	do
	{
		scanf("%d%c",&b[i][1],&c);
		i++;
	}while(c!='\n');
	for(j=0;j<1000;j++)
	{
		for(i=0;i<n;i++)
		{
			if(j>=b[i][0]&&j<b[i][1]) a[j]++;
		}
	}
	max=a[0];
	for(i=1;i<1000;i++) if(max<a[i]) max=a[i];
	printf("%d %d",n,max);
}