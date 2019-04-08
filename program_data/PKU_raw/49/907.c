int judge(char *p,int l)
{
	char *x,*t;
	t=p;
    int y=1;
	x=t+l-1;
	while ((t<=x) && y)
	{
		if (*t!=*x) y=0;
		t++;
		x--;
	}
	return y;
}
void pp(char *p,int l)
{
	int i;
	char *t;
	t=p;
	for (i=1;i<=l;i++)
		printf("%c",*(p+i-1));

printf("\n");
}
void main()
{
	char c[3243];
	int i,j,k,l;
	char *p;
	//freopen("tt.in","r",stdin);
	//freopen("tt.out","w",stdout);
	gets(c); l=strlen(c); p=c;
	for (i=2;i<=l;i++)
	
	 for (j=1;j<=l-i+1;j++)
         if (judge(p+j-1,i)) 
	    pp(p+j-1,i);
	
	
	

	
}