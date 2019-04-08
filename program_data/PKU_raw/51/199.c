int main()
{
	char a[510],b[510][6];
	int c[510]={0},i,j,s,n,l,m=0;
	scanf("%d\n",&n);
	gets(a);l=strlen(a);
	for(i=0;i<=l-n;i++)
	{for(j=0;j<n;j++)
			b[i][j]=a[i+j];
	b[i][j]=0;}
    for(i=0;i<=l-n;i++)
	{s=1;for(j=0;j<i;j++)
	if(c[j]!=-1)if(strcmp(b[i],b[j])==0){c[j]+=1;c[i]=-1;s=0;break;}
	if(s)c[i]+=1;}
    for(i=0;i<=l-n;i++)
		if(c[i]>m)m=c[i];
	if(m>1){printf("%d\n",m);for(i=0;i<=l-n;i++)
		if(c[i]==m)puts(b[i]);}
	else printf("NO");

    
}