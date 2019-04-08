int f(int n,int m)
{
	int z;
	if(m>4||n>4)z=0;
	else z=1;
	return(z);
}
void main()
{
	int i,j,t,x,p,q,a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&p,&q);
	x=f(p,q);
	if(x==0)printf("error\n");
	else 
	{
		for(i=0;i<5;i++)
		{
			t=a[p][i];
			a[p][i]=a[q][i];
			a[q][i]=t;
		}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		printf("%d ",a[i][j]);
		printf("%d\n",a[i][4]);
	}
	}
}

		

