void main()
{
	int n,i,c[26]={0},d[26]={0},j,s,t,k;
	char b[26000],r,max;
	scanf("%d\n",&n);
	struct book
	{
		int num;
		char author[26];
	}a[999];
	for(i=0;i<n;i++) scanf("%d %s\n",&a[i].num,&a[i].author);
    strcpy(b,a[0].author);
	for(i=1;i<n;i++) strcat(b,a[i].author);
	s=strlen(b);
	for(r='A',j=0;r<='Z',j<26;r++,j++)
		for(i=0;i<s;i++) if(b[i]==r) c[j]++;
	for(i=0;i<26;i++) d[i]=c[i];
	for(j=0;j<25;j++)
		for(i=0;i<25-j;i++)
			if(d[i]<d[i+1]) {t=d[i];d[i]=d[i+1];d[i+1]=t;}
    k=d[0];
	for(i=0;i<26;i++) if(c[i]==k) max=i+65;
	printf("%c\n%d\n",max,k);
	for(i=0;i<n;i++) 
		for(j=0;j<26;j++)
		   if(a[i].author[j]==max) printf("%d\n",a[i].num);
}
