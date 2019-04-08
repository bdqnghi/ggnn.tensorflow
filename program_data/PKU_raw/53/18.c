

void main()
{
	int n,k[300]={0},s[300]={0};int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&k[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(k[j]==k[i])
				s[j]=1;
		}
	}
	printf("%d",k[0]);
	for(i=1;i<n;i++)
		if(s[i]==0)
			printf(",%d",k[i]);

}