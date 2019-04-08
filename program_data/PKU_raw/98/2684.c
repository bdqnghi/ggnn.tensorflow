void main()
{
	int n,i,l,s,t;
	char word[40];
	scanf("%d",&n);
	scanf("%s",word);
	printf("%s",word);
	l=strlen(word);
	s=l;
	t=0;
	for(i=1;i<=n-1;i++)
	{
		scanf("%s",word);
		l=strlen(word);
		s+=l;
		t++;
		if(s+t<=80)
			printf(" %s",word);
		else
		{
			printf("\n");
			printf("%s",word);
			s=l;
			t=0;
		}
	}
}


