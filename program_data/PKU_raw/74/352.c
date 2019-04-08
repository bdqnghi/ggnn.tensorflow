void main()
{
	long int m,n,i;
	void primechart(int *p);
	int prime(long int n,int *p);
	int check(int n,int i);
	int p[32001]={0},*ppr;
	int l,len;
	scanf("%d%d",&m,&n);
	ppr=p;
	p[2]=1;
	primechart(ppr);
	l=0;
	for(i=m;i<=n;i++)
	{
		len=(int)log10(i)+1;
		if((p[i]==1)&&(check(i,len)))
			if(l==0) {printf("%d",i);l++;}
			else printf(",%d",i);
	}
	if(l==0) printf("no");
	printf("\n");
}

void primechart(int *p)
{
	int i,j;
	for(i=4;i<=32000;i=i+2) *(p+i)=-1;
	for(i=3;i<=32000;i=i+2)
		if(*(p+i)==0)
		{
			*(p+i)=1;
			for(j=2*i;j<=32000;j=j+i)
				*(p+j)=-1;
		}
}

int prime(long int n,int *p)
{
	int i;
	for(i=3;i<=sqrt(n);i=i+2)
		if((*(p+i)==1)&&(n%i==0)) return 0;
	return 1;
}

int check(int n,int i)
{
	int j;
	char s[10];
	//printf("%d %d\n",n,i);
	for(j=0;j<=i-1;j++)
	{
		s[j]='0'+n%10;
		n=n/10;
	}
	s[i]='\0';
	for(j=0;j<=i/2;j++)
		if(s[j]!=s[i-1-j]) return 0;
	return 1;
}