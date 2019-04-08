struct information
{
	int num;
	char author[26];
}*a;
void main()
{
	int n,i,j,m,s[26]={0},max=0,p;
	scanf("%d",&n);
	a=(struct information *)malloc(sizeof(struct information)*n);
	for(i=0;i<n;i++) scanf("%d%s",&a[i].num,a[i].author);
	for(i=0;i<n;i++)
	{
		for(j=0;a[i].author[j]!='\0';j++)
		{
			m=a[i].author[j]-'A';s[m]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(max<s[i]) {max=s[i];p=i;}
	}
	printf("%c\n%d\n",'A'+p,s[p]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<26;j++)
		{
			if(a[i].author[j]=='A'+p) {printf("%d\n",a[i].num);break;}
		}
	}
}