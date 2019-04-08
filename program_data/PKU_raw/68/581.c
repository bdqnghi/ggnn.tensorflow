int f(int k);
void main()
{
	int x,i,n;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(x=3;x<i/2;x=x+2)
		{
			if(f(x)==0) continue;
			else if(f(i-x)==0) continue;
			else break;
		}
			printf("%d=%d+%d\n",i,x,i-x);
	}
}

int f(int k)
{
	int t;
	for(t=3;t<=sqrt(k);t++)
	{
		if(k%t==0) 
		break;
	}
	if(t<=sqrt(k)) return 0;
	else return 1;
	
}