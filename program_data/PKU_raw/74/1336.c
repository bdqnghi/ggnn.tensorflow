int p=0;
int huiwen(int x)
{
	int m,n;
	if(x==0)
		return(0);
	else
	{
		m=x%10;
		n=x/10;
		p=(p+m)*10;
		huiwen(n);
	}
	return(0);
}
int sushu(int x)
{
	int m,i,t=1;
	m=sqrt(x);
	for(i=2;i<=m;i++)
	{
		if((x%i)==0)
		{
			t=0;
			break;
		}	
	}
	return(t);
}
void main()
{
	int m,n,i,j=0,a[100]={0};
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		p=0;
		huiwen(i);
		if((p/10)==i)
		{	
			if(sushu(i)==1)
			{
				j=j+1;
				a[j]=i;
			}
		}
	}
	if(a[1]!=0)
	{
		for(i=1;i<j;i++)
			printf("%d,",a[i]);
		printf("%d",a[j]);
	}
	else
		printf("no");
}