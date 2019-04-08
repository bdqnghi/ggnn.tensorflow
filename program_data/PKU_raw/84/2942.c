int main()
{
	int n;
	int first,second;
	int x,i;
	scanf("%d\n",&n);
	if(n>1&&n<100)
	{
		if(n==1)
		{
			int a;
			scanf("%d",&a);
			first = second=a;
		}
		else{
			for(i=0;i<n;i++)
			{
		       scanf("%d",&x);
				if(i==0)
				{			
					first=x;
					second=0;
				}
				else
				{
					if(first<x)
					{
						second=first;
						first=x;						
					}
				    else if(second<x)
					{
					    first=first;
					    second=x;
					}
				}
			
			}
		}
		printf("%d\n%d",first,second);
	}
return 0;
}