
int main(int argc, char* argv[])
{
	int k,i=2,a,b,n,m;
	scanf("%d\n%d",&k,&m);
         a=m;
	b=m;
	while(i<=k)
	{
		scanf("%d",&n);
		if(n>a)
		{
			a=n;
		}
                  if(n<a&&n>b)
                  {
                           b=n;
                  }
		i++;
	}
	
	printf("%d\n%d\n",a,b);
	
	return 0;
}

