int fenjie(int a,int b)
{
	int i,sign=0,k=0;
	if(a<b) return 0;
	else if(a==b) return 1;
	else
	{
		for(i=2;i<=a-1;i++)
		{
			if(a%i==0)
				sign=1;
		}
		if(sign!=1) return 1;
		else 
		{
			for(i=b;i<=a;i++)
			{
				if(a%i==0)
					k+=fenjie(a/i,i);
			}
			k+=1;
			return k;
		}
	}
}

	
int main()
{ 
	int n,a[100],i,k;
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

		scanf("%d",&k);
		printf("%d\n",fenjie(k,2));
	}
	return 0;
}
