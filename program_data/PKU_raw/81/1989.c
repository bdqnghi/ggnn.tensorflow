void main()
{
	int (*a)[5],i,j,k,m,n,f(int (*a)[5],int n,int m);
	a=(int (*)[5])malloc(5*5*sizeof(int));
	for(j=0;j<5;j++)
		for(i=0;i<5;i++)
			scanf("%d",*(a+j)+i);
	scanf("%d %d",&n,&m);
	k=f(a,n,m);
	if(k==0)
		printf("error");
	else
		for(j=0;j<5;j++)
		{
			for(i=0;i<4;i++)
				printf("%d ",*(*(a+j)+i));
			printf("%d\n",*(*(a+j)+4));
		}
}
int f(int (*a)[5],int n,int m)
{
	int t,i,j;
	if(n>4||m>4)
		return(0);
	else
	{
		for(i=0;i<5;i++)
		{
			t=*(*(a+n)+i);
			*(*(a+n)+i)=*(*(a+m)+i);
			*(*(a+m)+i)=t;
		}
		return(1);
	}
}
