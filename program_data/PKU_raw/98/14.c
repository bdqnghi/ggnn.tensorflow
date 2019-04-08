
int main()
{
	struct
	{
		char word[41];
		int lw;
	}a[10000];
	int lpr=0;
	
	int n,m,i,j,k=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",a[i].word);
		a[i].lw=strlen(a[i].word);
	}
	printf("%s",a[0].word);
	lpr=a[0].lw;
	for (i=1;i<n;i++)
	{
			lpr+=a[i].lw;
			if (lpr<80)
			{
				printf(" %s",a[i].word);
				lpr++;
			}
			else
			{
				printf("\n");
				printf("%s",a[i].word);
				lpr=a[i].lw;
			}
	}
	printf("\n");
	return 0;
}
