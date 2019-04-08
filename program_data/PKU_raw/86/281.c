
int main()
{
	int j=0,n, m, y[100], a[63], b[10];
	for (int t=0;t<63;t++)
		a[t]=1;
	
	for (int s=0;s<10;s++)
		b[s]=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{    y[i]=0;
		scanf("%d", &m);
		for( j=0;j<m;j++)
		{
			scanf("%d", &b[j]);
		
		
			a[b[j]+3*j+1] = 0;
			a[b[j]+2+3*j] = 0;
			a[b[j]+3*j] = 0;
		}
		for(int k=0;k<60;k++)
		{
			y[i] += a[k];
		}
	
	
		for (int t=0;t<63;t++)
		a[t]=1;
	for (int s=0;s<10;s++)
		b[s]=0;
		
	}
	for (int l=0;l<n;l++)
		printf("%d\n",y[l]);
	return 0;
}

