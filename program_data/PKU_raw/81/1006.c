int main()
{
	int a[5][5],m,n,(*p)[5],i;
	int f(int (*p)[5],int m,int n);
	for(p=a;p<a+5;p++)
		for(i=0;i<5;i++)
			scanf("%d",*p+i);
	scanf("%d%d",&m,&n);
	if(f(a,m,n)==0)
		printf("error");
	else
		for(p=a;p<a+5;p++)
		{
			for(i=0;i<4;i++)
			    printf("%d ",*(*p+i));
			printf("%d\n",*(*p+i));
		}
	return 0;
}
int f(int (*p)[5],int m,int n)
{
	int *pt,i,t;
	if(m<5&&n<5)
	{
		for(i=0;i<5;i++)
		{
			t=*(*(p+m)+i);
			*(*(p+m)+i)=*(*(p+n)+i);
			*(*(p+n)+i)=t;
		}
		return 1;
	}
	else
		return 0;
}
	

		
	

	
		
