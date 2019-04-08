int main()
{
int n,i,a,factor(int N,int min);
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a);
    printf("%d\n",factor(a,2));
}

return 0;
}
int factor(int N,int min)
{
	int i,result;
	result=1;
	
    if(N<min)
	{
		return 0;
	}
	for(i=min;i<N;i++)
	{
		if(N%i==0)
		{
	      result+=factor(N/i,i);
		}

	}return result;
}
