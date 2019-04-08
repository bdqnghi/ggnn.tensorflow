int main()
{
	void sc(char *p[],char *q[]);
    char *p[100],*q[100];
    int i;
    for(i=0;i<100;i++)
	{p[i]=(char *)malloc(10);
	q[i]=(char *)malloc(5);}
	sc(p,q);
}
void sc(char *p[],char *q[])
{
	int n,m,j,max,x,i;
	for(i=0;scanf("%s %s",p[i],q[i])!=EOF;i++)
	{
		n=strlen(p[i]);m=strlen(q[i]);
		for(j=1,max=*(p[i]);j<n;j++)
			if(*(p[i]+j)>max)
			{max=*(p[i]+j);x=j;}
		for(j=n-x-1;j>=1;j--)
			*(p[i]+x+j+m)=*(p[i]+x+j);
		for(j=0;j<m;j++)
			*(p[i]+x+j+1)=*(q[i]+j);
		for(j=0;j<m+n;j++)
		{
			printf("%c",*(p[i]+j));
			if(j==n+m-1)printf("\n");
		}
	}
}