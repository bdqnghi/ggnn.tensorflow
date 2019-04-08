int Set(int a)
{
	int i,w=1;
	if (a%2==0)
	{w=0;goto loop;}
	for (i=3;i<sqrt(a)+1;i=i+2)
	{
		if (a%i==0)
		{
			w=0;
		}

	}
loop:return (w);
}
int main ()
{
	long int i=6,n,j,f;
	scanf("%d",&n);
	while (i<n+1)
	{
		for (j=3;j<i;j=j+2)
		{
			if(Set(j)==1)
			{
			    f=Set(i-j);
			    if (f==1)
			    {
				printf("%d=%d+%d\n",i,j,i-j);
				break ;
			    }
			}
		}
		i=i+2;
	}
	return 0;
}
