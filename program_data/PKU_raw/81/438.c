int hanshu(int a[5][5],int m,int n,int *a_p)
{
	int i,y;
	a_p=&a[0][0];
	if(m<5&&m>=0&&n<5&&n>=0)
	{
		int z[5];
		for(i=0;i<5;i++)
		{
			z[i]=*(a_p+5*m+i);
			*(a_p+5*m+i)=*(a_p+5*n+i);
			*(a_p+5*n+i)=z[i];
		}
		y=1;
	}
	else
		y=0;
	return (y);
}
int main()
{
    int hanshu(int a[5][5],int m,int n,int *a_p);
	int a[5][5],i,j,m,n,y,*a_p;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	a_p=&a[0][0];
	scanf("%d %d",&m,&n);
	y=hanshu(a,m,n,a_p);
	if(y==0) printf("error\n");
	else
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d",a[i][j]);
				if(j==4) printf("\n");
				else printf(" ");
			}
		}
	}
	return 0;
}
