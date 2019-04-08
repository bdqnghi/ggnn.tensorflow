void main()
{
	char s[300];
	int i,a[300]={0},l,t,k;
	gets(s);
	l=strlen(s);
	for (i=0;i<l;i++)
	{
		if ((s[i]>='A')&&(s[i]<='Z')||(s[i]>='a')&&(s[i]<='z'))
		{
			t=s[i]-'A';
			a[t]++;
		}
	}
	k=0;
	for (i=0;i<=75;i++)
	{
		if (a[i]!=0)
		{	
			k++;
			t=i+'A';
			printf("%c=%d\n",t,a[i]);
		}	
	}
	if (k==0) printf("No\n");
}