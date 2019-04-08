int main()
{
	char s[1000][45];
	int n,i,j,k;
	int sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	sum=0;
	for(i=0;i<n-1;i++)
	{
		k=sum+strlen(s[i]);
		if(k<80)
		{
			if((k+1+strlen(s[1+i]))>80)
			{
				printf("%s\n",s[i]);
                sum=0;
			}else
			{
				printf("%s ",s[i]);
				sum+=strlen(s[i])+1;
			}
		}else
		{
			if(k==80)
			{
				printf("%s\n",s[i]);
				sum=0;
			}
		}
	}
	printf("%s",s[n-1]);
	return 0;
}