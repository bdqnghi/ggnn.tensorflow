void main()
{
	int n,i;
	int b[3000];
	char st[3000];
	gets(st);
	n=strlen(st);
	char c;
	int word=0,num=0;
	if(n==1) printf("1");
	if(n>=2)
	{
		for(i=0;c=st[i]!='\0';i++)
			if(c==' ') word=0;
			else if(word==0)
			{
				word=1;
				num++;
			}
	
    int shu[3000];
  int p=0;
  int k=0;
    for(i=0;i<=n;i++)
	{
		if(st[i]==' ')
		{
			if(st[i-1]!=' ') 
			{
				b[k]=i-p;
				p=i+1;
				k++;
			}
			if(st[i-1]==' ')
				p=p+1;
		}
		if(st[i]=='\0')
			b[k]=i-p;
	}
	for(i=0;i<k;i++)
		printf("%d,",b[i]);
	printf("%d",b[k]);
	}
				

}