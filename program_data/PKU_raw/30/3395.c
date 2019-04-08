int main()
{
	int n,i,j;
	i=1;
	j=0;
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%7!=0&&i%10!=7&&(i-70>=10||70-i>0))
			j=j+i*i;
		else
		{
			j=j;
		}
		i=i+1;
	}
	printf("%d",j);
	return 0;
}