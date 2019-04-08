int height[26];
int x;
int cmp(int a,int b)
{
	return(a>b?a:b);
}
int max(int a,int b)
{
	int cmp(int a,int b);
	if(b==x)
	{
		if(a>=height[x])return(1);
		else return(0);
	}
	else
	{
		if(a<height[b])return(max(a,b+1));
		else return(cmp(max(a,b+1),(1+max(height[b],b+1))));
	}
}

main()
{
	int max(int,int);
	int i;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&height[i]);
	}
	x--;
	printf("%d",max(1000000,0));
}
