int main()
{
	char words1[300],words2[300];
	int i,j,n=0,m=0,k=0;
	scanf("%s",words1);
	scanf("%s",words2);
	for(i=0;words1[i];i++)
	{
		n++;
	}
	for(i=0;words2[i];i++)
	{
		if(words1[0]==words2[i])
		{
			for(j=0;j<n;j++)
			{
				if(words1[j]!=words2[i+j]) break;
			}
			printf("%d",i);break;
		}
	}
	return 0;
}
