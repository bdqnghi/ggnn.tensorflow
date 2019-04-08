int main(int argc, char* argv[])
{
	struct {
		int a;
		char b[26];
	}num[999];
	int i,m,j,k;
	int s[26];

	scanf ("%d",&m);
	for (i=0;i<m;i++)
	{
		scanf ("%d%s",&num[i].a,num[i].b);
	}
	for (k=0;k<26;k++)
	{
		s[k]=0;
	}


	for (i=0;i<m;i++)
	{
		for (j=0;num[i].b[j]!='\0';j++)
		{
			k=num[i].b[j]-'A';
			s[k]++;
		}
	}
	int first=s[0];
	int t;
	for (k=0;k<26;k++)
	{
		if (s[k]>first)
		{
			first=s[k];
			t=k;
		}
	}
	printf ("%c\n",t+'A');
	printf ("%d\n",first);
	for (i=0;i<m;i++)
	{
		for (j=0;num[i].b[j]!='\0';j++)
		{
			if (num[i].b[j]==(t+'A'))
			{
				printf ("%d\n",num[i].a);
			}
		}
	}
	return 0;
}
