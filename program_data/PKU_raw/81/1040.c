void main()
{
	int m,n,i;
	int *p[5],*p1;/*????*/
	int panduan(int,int);
	p[0]=(int *)calloc(5,sizeof(int));
	p[1]=(int *)calloc(5,sizeof(int));
	p[2]=(int *)calloc(5,sizeof(int));
	p[3]=(int *)calloc(5,sizeof(int));
	p[4]=(int *)calloc(5,sizeof(int));
	for(i=0;i<5;i++)
	{
		scanf("%d %d %d %d %d",p[i]+0,p[i]+1,p[i]+2,p[i]+3,p[i]+4);
	}
	scanf("%d %d",&m,&n);
    if(panduan(m,n)==1)
	{
		p1=p[m];
		p[m]=p[n];
		p[n]=p1;
	   for(i=0;i<5;i++)
	   {
			printf("%d %d %d %d %d\n",*(p[i]+0),*(p[i]+1),*(p[i]+2),*(p[i]+3),*(p[i]+4));
	   }
	}
	else
	{
		printf("error\n");
	}
}
int panduan(int m,int n)
{
	int z;
	if(m>=0&&m<=4&&n>=0&&n<=4)
	{
		z=1;
	}
	else
	{
		z=0;
	}
	return(z);
}
