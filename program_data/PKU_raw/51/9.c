int main()
{
	char s[501]={'\0'},t[500][5]={'\0'},r[5]={'\0'};	
	int a[500]={0},n,m,i,j,k=0,p;
	scanf("%d\n",&m);
	gets(s);n=strlen(s);
	for(i=0;i<n-m+1;i++)
	{
		p=0;
		for(j=0;j<m;j++)
			r[j]=s[i+j];
		for(j=0;j<k;j++)
			if(strcmp(r,t[j])==0)
			{a[j]++;p++;}
		if(p==0)
		{
			strcpy(t[k],r);
			k++;a[k-1]++;
		}
	}
	p=a[0];
	for(i=0;i<k;i++)
	{
		if(p<a[i])
			p=a[i];
	}
	if(p==1)
		printf("NO");
	else
	{
	printf("%d",p);
	for(i=0;i<k;i++)
		if(a[i]==p)
			printf("\n%s",t[i]);
	}
	return 0;
}

