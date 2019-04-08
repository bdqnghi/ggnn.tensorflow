int sushu(int t)
{
	int r,i;
	for(i=2;i<t;i++)
	{
		r=t%i;
		if(r==0)
			return 0;
	}
	return 1;
}
int huiwen(int t)
{
	char s[100]={0};
	int i,j,k;
	for(i=1;;i++)
	{
		j=t/(pow(10,i));
		if(j==0)
			break;
	}
	k=i;
	for(i=0;i<k;i++)
	{
		s[i]=t%10;
		t=t/10;
	}
	j=k-1;
	for(i=0;;)
	{
		if(i>j)
			return 1;
		if(s[i++]!=s[j--])
			return 0;
	}
}
int main()
{
	int m,n,i,j=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		
		if(huiwen(i) && sushu(i) && j==0)
		{
			printf("%d",i);
			j++;
		}
		else if(huiwen(i) && sushu(i))
			printf(",%d",i);
	}
	if(j==0)
		printf("no");
	return 0;
}