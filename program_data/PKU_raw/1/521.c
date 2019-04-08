int main()
{
	int f(int a,int min);
	int n,a[150],i,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=f(a[i],2);
		printf("%d\n",b);
	}
	return 0;
}

 
int f(int a,int min)
{ 
	int result=1,i;
	if(a < min)
	{ 
	return 0; 
	} 
	for(i = min;i<a;i++)
	{ 
		if(a % i == 0)
		{ 
		result += f(a/i,i); 
		} 
	} 
	return result; 
} 