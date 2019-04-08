void change(int a[5][5],int n,int m)
{
	int i, j,t,*p;
	p=&a[0][0];
	if((n<5)&&(m<5))
	{
		
		for(j=0;j<5;j++)
		{
			t=*(p+5*n+j);
			*(p+5*n+j)=*(p+5*m+j);
			*(p+5*m+j)=t;
		}
        for(i=0;i<5;i++)
		printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
	}
	else
		printf("error");	
}
void main()
{
	int a[5][5],i,j,m,n;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
		scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&n,&m);
	change(a,n,m);
}
    
