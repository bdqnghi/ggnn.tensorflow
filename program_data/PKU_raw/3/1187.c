
int main()
{
	int i,k,n,p,l=0;
	scanf("%d",&n);
	scanf("%d",&k);
	int s[2][1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&(s[0][i]));
		s[1][i]=k-s[0][i];
	}
	for(i=0;i<n;i++)
	{
		for(p=0;p<n;p++)
		{
			if((s[1][i]==s[0][p])&&(i!=p))
			{
				l++;
			}
		}
	}
	if(l==0)
	{
		printf("no");
	}
	if(l!=0)
	{
		printf("yes");
	}
		return 0;
}

