int sushu(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	if(i=sqrt(n)+1)
		return 1;
}
int huiwen(int n)
{
	int temp=n,k,m=0;
	while(temp>0)
	{
           k=temp%10;
           m=m*10+k;
           temp=temp/10;
    }
    if(m==n) return 1;
    else return 0;
}
int main()
{
	int m,n,i,flag=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(sushu(i)==1&&huiwen(i)==1)
		{
			printf("%d",i);
			flag=1;
			break;
		}
	}
	for(i=i+1;i<=n;i++)
	{
		if(sushu(i)&&huiwen(i))
		{
			printf(",%d",i);
			
		}
	}
	if(flag==0)
		printf("no");    
		
	return 0;
}
	