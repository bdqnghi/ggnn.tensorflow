int main()
{
	int i,s,n;
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++)
	{
		if(i%7==0||i==17||i==27||i==37||i==47||i==57||i==67||i==77||i==87||i==97||i==70||i==71||i==72||i==73||i==74||i==75||i==76||i==78||i==79)
		{
			continue;
		}
		else
		{
			s=s+i*i;
		}
	}
	printf("%d",s);
	return 0;
}