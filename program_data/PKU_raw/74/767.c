int huiwen(int n);
int sushu(int n);

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
    int first=1,flag=1;
	for(int j=m;j<=n;j++)
	{
		if(sushu(j)&&huiwen(j))
		{
			if(first==1)
			{
				printf("%d",j);
				first=0;
			}
			else
			{
				printf(",%d",j);
			}
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("no");
	}
	return 0;
}
int huiwen(int n)
{
    int temp, s=0;
    temp=n;
    while(n>0)
	{
        s=s*10+(n%10);
        n=n/10;
    }
    if(s==temp)
        return 1;
    else
        return 0;
}
int sushu(int n)
{
    int i;
    for(i=2;i<n;i++)
        if (n%i==0)
            return 0;
    return 1;
}
