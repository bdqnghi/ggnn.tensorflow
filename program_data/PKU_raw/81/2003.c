int main()
{
	int cal(int s,int t);
	int a[5][5],i,n,m,(*p)[5],temp;
	for(p=a;p<a+5;p++)
	{
		for(i=0;i<5;i++)
		{
			scanf("%d",*p+i);
		}
	}
	scanf("%d %d",&n,&m);
	if(cal(n,m)==0)
		printf("error");
	if(cal(n,m)==1)
	{
		for(i=0;i<5;i++)
		{
			temp=*(*(a+n)+i);
			*(*(a+n)+i)=*(*(a+m)+i);
			*(*(a+m)+i)=temp;
		}
		for(p=a;p<a+5;p++)
		{
			for(i=0;i<4;i++)
			{
				printf("%d ",*(*p+i));
			}
			printf("%d\n",*(*p+4));
		}
	}
}


	int cal(int s,int t)
	{
		int c;
		if(0<=s&&s<=4&&0<=t&&t<=4)
			c=1;
		else 
			c=0;
		return(c);
	}