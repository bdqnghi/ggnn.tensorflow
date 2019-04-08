void main()
{
	void insert(char s[]);
	char a[100][100],b[100][100];
	int i,n;
	gets(a[1]);
	
	for(i=2,n=0;a[i-1][0]!='\0';i++)
	{
		gets(a[i]);
		n++;
	}
	//printf("%d",n);
	for(i=1;i<=n;i++)
	insert(a[i]);
}
	void insert(char s[])
	{
		int n,i,j,max=0,m;
		char a[3];
		n=strlen(s);
		for(i=1,j=n-3;i<=3;i++,j++)
			a[i]=s[j];
		for(i=0;i<n-4;i++)
			max=max>s[i]?max:s[i];
		//printf("%c",max);
		for(i=0;i<n-4;i++)
			if(s[i]==max)	{m=i;break;}
			
			//printf("%d",m);
		for(i=0;i<=m;i++)
			printf("%c",s[i]);
		for(i=1;i<=3;i++)
			printf("%c",a[i]);
		for(i=m+1;i<n-4;i++)
			printf("%c",s[i]);
		printf("\n");
	}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
	
