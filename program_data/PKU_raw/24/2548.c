int main()
{
	int n,i;
	int max,min,p,q;
	int len[200]={0};
	char word[200][20];
	scanf("%d", &n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%s",word[i]);
	}
    for(i=0;i<n;i++)
	{
		len[i]=strlen(word[i]);
	}
	max=len[0];p=0;
	min=len[0];q=0;
	for(i=0;i<n;i++)
	{
		if(len[i]>max)
		{
			max=len[i];
			p=i;
		}
		if(len[i]<min)
		{
             min=len[i];
			 q=i;
		}
	}
	printf("%s\n",word[p]);
	printf("%s\n",word[q]);
	return 0;
}