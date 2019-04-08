
int judge(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return(0);break;
		}
		if(i==n-1)
			return(1);
	}
	if(n==1)
		return(0);
	if(n==2)
		return(1);
}

void main()
{
	int n,i,j=0;
	scanf("%d",&n);
	for(i=1;i<n-1;i++)
		if(judge(i)&&judge(i+2))
			{printf("%d %d\n",i,i+2);j++;}
if(j==0)
printf("empty");
}


