int main()
{
	char s[100],w[100];
	int i,j,l1,l2,k;
	scanf("%s%s",s,w);
	l1=strlen(s);
	l2=strlen(w);
	i=0;
	for (j=0;j<l2;j++)
	{
		if (w[j]==s[i]) 
		{
			if (i==0) k=j;
			i++;
		}
		if (i==l1) break;
	}
	printf("%d",k);

	return 0;
}

