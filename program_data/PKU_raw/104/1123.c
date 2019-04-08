int a,b,c,d,e,h,i,j,k;
int main()
{
	int cha(int a,int b);
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",cha(a,b));
	
	return 0;
}

int cha(int a,int b)
{
	if(a==b)
		return a;
	int t,q;
	if(a>b)
	{t=a;a=b;b=t;}
	q=b;
	while(a/2!=0)
	{
	
		while(q/2!=0)
		{
	
			if(a==q)
				break;
			q/=2;
		}
		
		if(a==q)
			break;
		a/=2;
		q=b;
	}
	return a;
}