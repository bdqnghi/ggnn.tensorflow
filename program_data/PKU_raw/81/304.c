int pand(int y,int z);
void main()
{
	int a[5][5],n,m,i,l,t;
	for(i=0;i<5;i++)
	{
	scanf("%d %d %d %d %d\n",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
	}
	scanf("%d %d\n",&n,&m);
	l=pand(n,m);
	if(l==0)printf("error");
	else
	{		
		for(i=0;i<5;i++)
		{
			t=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=t;
		}
		for(i=0;i<5;i++)
		{
			printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
		}
	}
}
int pand(int y,int z)
{
     int x;
	 x=(y<=4&&z<=4)? 1:0;
	 return x;
}