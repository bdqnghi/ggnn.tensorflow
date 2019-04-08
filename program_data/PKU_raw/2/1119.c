int main()
{
	int n;
	scanf("%d",&n);
	int a[1000]={0},b[1000]={0},c[100]={0},l=0;
	char s[1000][100]={0},m[26]={0},p;
	int i=0,j=0,k=0,t=0;
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&a[i],s[i]);
	}
	for(i='A';i<='Z';i++)
	{
		m[j]=i;
		for(t=0;t<n;t++)
		{
			for(k=0;s[t][k]!='\0';k++)
			{
				if(s[t][k]==m[j])
				{
				  c[j]++;
				  break;
				}
			}
		}
		j++;
	}
	l=0;
	for(i=0;i<26;i++)
	{
		if(c[i]>l)
		{
			l=c[i];
			p=m[i];
		}
	}
	printf("%c\n",p);
	printf("%d\n",l);
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;s[i][j]!='\0';j++)
		{
			if(s[i][j]==p)
			{
				k=1;
				break;
			}
		}
		if(k==1)
		{
			printf("%d\n",a[i]);
		}
	}
	return 0;
}