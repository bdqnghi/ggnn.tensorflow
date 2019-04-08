
struct
{
	int a;
	char b[26];
}shu[1000];

int main()
{
	int s[27];
	int n,i,j,o,max,t=1,x;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d %s",&shu[i].a,shu[i].b);

	for (i=1;i<=26;i++)
		s[i]=0;

	for (i=0;i<n;i++)
		for (j=0;j<strlen(shu[i].b);j++)
		{
			o=shu[i].b[j]-64;
			s[o]++;
		}


	max=0;
	for(i=1;i<=26;i++)
		if (max<s[i]) {max=s[i];t=i;}
	printf("%c\n",t+64);
	printf("%d\n",max);

	for (i=0;i<n;i++)
	{
		x=strlen(shu[i].b);
		for (j=0;j<x;j++)
			if (shu[i].b[j]==t+64)
				printf("%d\n",shu[i].a);
	}
	return 0;


	
}