int tell(int x)
{
	int i,j;
	int count=0;
	if (x==2)
		return 1;
	else if(x%2==0)
		return 0;
	j=(int)sqrt(x);
	for(i=2;i<=j;i++)
	{
		if(x%i==0)
			count++;
	}
	if(count==0)
		return 1;
	else 
		return 0;
}

int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(j=3;j<i;j+=2)
		{
			if(tell(j)&&tell(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
		    	break;
			}
		}
	}
return 0;
}