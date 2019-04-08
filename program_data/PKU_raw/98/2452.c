int main()
{
	int n,i,j=1;
	char w[500][100];
	int l[500],s[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",w[i]);
		l[i]=strlen(w[i]);
	}
	//for(i=1;i<=n;i++)
	//{
	//	printf("%s ",w[i]);
	//	printf("%d ",l[i]);
	//}
	for(i=0;;i++)
	{
		printf("%s",w[j]);
		s[i]=l[j];
		j++;
		if(j==n+1)
			break;
		while(s[i]+l[j]+1<=80)
		{
			printf(" %s",w[j]);
			s[i]=s[i]+1+l[j];
			j++;
			if(j==n+1)
				break;
		}
		printf("\n");
		if(j==n+1)
			break;
	}
	return 0;
}