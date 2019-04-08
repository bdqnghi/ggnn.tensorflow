void main()
{
	struct book
	{
		char num[100],wri[26];
	} bo[1000];
	int i,j,k,l,n,m=0,a[26]={0},mw;
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s %s",bo[i].num,bo[i].wri);
		l=strlen(bo[i].wri);
		for (j=0;j<l;j++) a[bo[i].wri[j]-65]++;
	}
	for (i=0;i<26;i++) if(a[i]>m) {m=a[i];mw=65+i;}
	printf("%c\n%d\n",mw,m);
	for (i=0;i<n;i++)
	{
		l=strlen(bo[i].wri);
		for (j=0;j<l;j++) if(bo[i].wri[j]==mw) {puts(bo[i].num);break;}
	}
}