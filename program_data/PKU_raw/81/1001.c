void main()
{
	int a[5][5];
	int j,i,m,n,t,*p;
             for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
          p=&a[0][0];
	scanf("%d %d",&m,&n);
	if((m>=0)&&(m<=4)&&(n>=0)&&(n<=4))
	{
       for(i=0;i<5;i++)
	   {
		t=*(p+5*m+i);
		*(p+5*m+i)=*(p+5*n+i);
		*(p+5*n+i)=t;
	   }
	   for(i=0;i<5;i++)
		printf("%d %d %d %d %d\n",*(a[i]+0),*(a[i]+1),*(a[i]+2),*(a[i]+3),*(a[i]+4));
	}
	else
		printf("error");
}
