int sum(int a,int b);
int empty(int a,int b);
int full(int a,int b);
int main()
{
	
	int m,n,count1,count2,count,num,i;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{	
		scanf("%d%d",&m,&n);
		if(n==1)
			count=full(m,n);
		else if(m==1)
			count=empty(m,n);
		else
		{
			count1=empty(m,n);
			count2=full(m,n);
			count=count1+count2;
		}
		printf("%d\n",count);
	}
	return 0;
}

int empty(int a,int b)
{
	int num;
	if(a==1)
		num=1;
	else 
		num=sum(a,b-1);
	return(num);
}
int full(int a,int b)
{
	int num;
	if(a==b)
		num=1;
	else 
		num=sum(a-b,b);
	return(num);
}
int sum(int a,int b)
{
	int num;
	if(a>0&&b>0)
		if(a<b)
			num=sum(a,a);
		else if(a==1)
			num=1;
		else if(b==1)
			num=1;
		else
			num=empty(a,b)+full(a,b);
	return(num);
}

