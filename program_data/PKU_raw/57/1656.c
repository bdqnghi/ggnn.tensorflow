
int main()
{
	int n,k,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char w[50];
		scanf("%s",w);
		k=strlen(w);
		if(w[k-1]=='g')
		{
			for(j=0;j<k-4;j++)
			{
				printf("%c",w[j]);
			}
			printf("%c\n",w[k-4]);
		}
		else
		{
			for(j=0;j<k-3;j++)
			{
				printf("%c",w[j]);
			}
			printf("%c\n",w[k-3]);
		}
	}
	return 0;
	
}
