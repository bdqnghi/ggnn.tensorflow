
int max_number(char *q,int n)
{
	int j,m=1,t=*q;
	for(j=1;j<n;j++)
	{
		if(t<*(q+j))
		{
			t=*(q+j);
			m=j+1;
		}
	}
		return m;
}

void main()
{
	int i,n,m;
	char str[14],substr[4],*p[2]={str,substr};
	while(scanf("%s%s",p[0],p[1])!=EOF)
	{
		n=strlen(p[0]);
		m=max_number(p[0],n);
	/*	printf("%d",m);*/
		for(i=n-m;i>0;i--)
			*(p[0]+m+i+2)=*(p[0]+m+i-1);
		*(p[0]+n+3)='\0';
		for(i=0;i<3;i++)
			*(p[0]+m+i)=*(p[1]+i);
		puts(str);
	}
}

