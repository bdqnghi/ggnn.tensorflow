int main()
{
	char a[300];
	int i,b[26]={0},t=0;
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			b[(a[i]-97)]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(b[i]>0) printf("%c=%d\n",(97+i),b[i]);
	}
	for(i=0;i<26;i++)
	{
		t+=b[i];
	}
	if(t==0) printf("No\n");
	scanf("%d",&i);
	return 0;
}

