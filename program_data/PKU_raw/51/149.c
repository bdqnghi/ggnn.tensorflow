
void main()
{
	char s[N],a[N-2][6],t[6];
	int n,i,j,k,l,b[N-2];
	scanf("%d%s",&n,s);
	l=strlen(s);
	for(i=0;i<l;i++)
		b[i]=0;
	strncpy(a[0],s,n);
	t[n]=a[0][n]=0;
	b[0]++;
	for(i=1;i<=l-n;i++)
	{
		strncpy(t,s+i,n);
		for(j=0;b[j]!=0;j++)
		{
			if(strcmp(a[j],t)==0)
			{
				b[j]++;
				break;
			}
		}
		if(b[j]==0)
		{
			strcpy(a[j],t);
			b[j]++;
		}
	}
	for(k=i=0;b[i]!=0;i++)
		if(b[i]>k)
			k=b[i];
	if(k==1)
		printf("NO\n");
	else
	{
		printf("%d\n",k);
		for(i=0;b[i]!=0;i++)
			if(b[i]==k)
				printf("%s\n",a[i]);
	}
}