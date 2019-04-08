int f(int a)
{
	int i,k,c;
	k=sqrt(a);
	for(i=2;i<=k;i++)
	{	if(a%i==0)
			break;
	}
	if(i>k)
		c=1;
	else
		c=-1;
	return(c);
}

void main()
{
	int n,i,k=0,a,b;
	scanf("%d",&n);
	for(i=2;i<=n-2;i++)
	{
		if(f(i)==1&&f(i+2)==1&&(i+2)<=n)
		{
			a=i;
			b=i+2;
			printf("%d %d\n",a,b);
			k++;
		}
	}
	if(k==0)
		printf("empty\n");
}
