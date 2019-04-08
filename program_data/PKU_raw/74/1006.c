void main()
{
	int f(int i);
	int g(int i);
	int i,m,n,k=0,j;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(f(i)==0&&g(i)==0)
		{
			printf("%d",i);
			k++;
		break;}
	}
	for(j=i+1;j<=n;j++)
	{
		if(f(j)==0&&g(j)==0)
		{
			printf(",%d",j);
			k++;
		}
	}
	if(k==0)
		printf ("no");
}
int f(int i)
{
	int r;
	for(r=2;r<=sqrt(i);r++)
		if(i%r==0)
		{
			return 1;
			break;
		}
	return 0;
}
int g(int i)
{
	int h(int x);
	int k,j=0,s;
	k=i;
	while(k>=10)
	{k=k/10;
	j++;
	}
	for(s=0;s<j;s++)
		if((i%h(s+1)-i%h(s))/h(s)!=(i/h(j-s))%10)
			return 1;
	return 0;
}
int h(int x)
{
	int s=1,i;
	for(i=0;i<x;i++)
		s=s*10;
	return s;
}