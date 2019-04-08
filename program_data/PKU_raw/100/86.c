void main()
{	int a[26],i,n,t=0;
	char b[300];
	for(i=0;i<26;i++) a[i]=0;
	gets(b);
	n=strlen(b);
	for(i=0;i<n;i++)
	{	if(b[i]-97>=0&&b[i]-97<=25) a[b[i]-97]++;}
	for(i=0;i<26;i++)
	{	if(a[i]!=0) {printf("%c=%d\n",i+97,a[i]);t++;}}
	if(t==0) printf("No");
	scanf("%d",&n);
}
