void pro()
{
	int l,i,j,a[26]={0};
	char c[100000];
	scanf("%s",c);
	l=strlen(c);
	for(i=0;i<l;i++)
		a[c[i]-'a']+=1;
	for(i=0;i<l;i++)
		if(a[c[i]-'a']==1)
		{
			printf("%c\n",c[i]);
		    break;
		}
	if(i==l)
		printf("no\n");
}
void main()
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    pro();
}

