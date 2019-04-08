int f1(int x)
{
	int i,j=1;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			j=0;
			break;
		}
	}
	return(j);
}
int f2(int x)
{
	int s[10];
	int i,j,k=1;
    for(i=0;x!=0;i++)
	{
		s[i]=x%10;
		x=x/10;
	}
	for(j=0;j<i-1;j++,i--)
	{
		if(s[i-1]!=s[j])
		{
			k=0;
			break;
		}
	}
	return(k);
}
void main()
{
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	j=1;
	for(i=m;i<=n;i++)
	{   
		if(f1(i)&&f2(i))
		{
		  printf("%d",i);
		  j=0;
		  break;
		}
	}
	if(j==1)
		printf("no");
	for(j=i+1;j<=n;j++)
	{
		if(f1(j)&&f2(j))
			printf(",%d",j);
	}
}