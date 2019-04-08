void main()
{
	struct book{int num;char author[26];}b[999];
	int a[26]={0},n,i,j,k,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d %s",&b[i].num,b[i].author);
	for(i=0;i<26;i++)
	{
		for(j=0;j<n;j++)
		{
			k=0;
			while(b[j].author[k]!='\0')
			{if(b[j].author[k]==i+65)a[i]++;
			k++;}
		}
	}
	for(i=0;i<26;i++)if(max<a[i])max=a[i];
	i=0;
	while(max!=a[i])i++;
	printf("%c\n%d\n",i+65,a[i]);
	for(j=0;j<n;j++)
	{k=0;
	while(b[j].author[k]!=i+65&&b[j].author[k]!='\0')k++;
	if(b[j].author[k]==i+65)printf("%d\n",b[j].num);
	}
}


