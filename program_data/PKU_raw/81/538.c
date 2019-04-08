int i,j,w;
int n,m;
int a[5][5];/*5!not 4*/
void main()
{
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&n,&m);
	f(n,m,a[5][5]);
	if(w==0) printf("error\n");
	if(w==1)
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
		{
			if(j==0) printf("%d",a[i][j]);
			else printf(" %d",a[i][j]);}
			printf("\n");
		}
}
int f()
{int x,t;
	if(n>4||m>4) w=0;
	else
	{
		w=1;
		for (x=0;x<5;x++)
		{
			
			t=a[n][x];
			a[n][x]=a[m][x];
			a[m][x]=t;
		}

	}
	return w;
}
