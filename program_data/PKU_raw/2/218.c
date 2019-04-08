struct book
{
	int id;
	char p[26];
};
void main()
{
	int n,i,j,k,a[150]={0},flag,max=0;
	struct book t,*s,o[1000],y[1000];
	scanf("%d",&n);
	s=(struct book *)malloc(n*sizeof(struct book));
	for(i=0;i<n;i++)
	{ scanf("%d %s",&s[i].id,s[i].p);
	  for (j=0;s[i].p[j]!='\0';j++)
		  a[s[i].p[j]]++;
	  }
	for(i='A';i<='Z';i++)
		if (max<a[i]) {max=a[i];j=i;}
    printf("%c\n",j);
printf("%d\n",max);
	for(i=0;i<n;i++)
	{
		flag=0;
		for(k=0;s[i].p[k]!='\0';k++)
			if (s[i].p[k]==j)flag=1;
			if(flag==1) printf("%d\n",s[i].id);
    }
}