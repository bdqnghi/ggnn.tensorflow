void main()
{
    int a[5][5];
	int exchange(int a[5][5],int n,int m);
	int n,m;
	for(n=0;n<5;n=n+1)
		for(m=0;m<5;m=m+1)
			scanf("%d",&a[n][m]);
	scanf("%d%d",&n,&m);
	if(exchange(a,n,m)==1)
	{
        for(n=0;n<5;n=n+1)
	   {
            for(m=0;m<4;m=m+1)
			    printf("%d ",a[n][m]);
	        printf("%d\n",a[n][4]);
	   }
	}
	else
		printf("error\n");
}
int exchange(int a[5][5],int n,int m)
{
	int flag,i,t;
	if((n>=0&&n<=4)&&(m>=0&&m<=4))
	{
     flag=1;
	 for(i=0;i<5;i++)
	 {
         t=a[n][i];
         a[n][i]=a[m][i];
         a[m][i]=t;
     }
	}
	else flag=0;
	return(flag);
}