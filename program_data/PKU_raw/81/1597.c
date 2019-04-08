int a[5][5],i,j,n1,m1,t;
int ch(int n,int m)
{
	if(n>4 || n<0 || m>4 || m<0) return 0;
	if((n>=0 && n<=4) && (m>=0 && m<=4)) return 1;
}
int main()
{
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n1,&m1);
	if(ch(n1,m1)==0) printf("error\n");
	if(ch(n1,m1)==1) 
	{
		for(i=0;i<5;i++)
		{
			t=a[n1][i];
			a[n1][i]=a[m1][i];
			a[m1][i]=t;
		}
        for(i=0;i<5;i++)
		{
		    for(j=0;j<4;j++)
			{
			   printf("%d ",a[i][j]);
			}
			if(j==4) printf("%d\n",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

