void main()
{
	int g(int a[],int b[],int n);
	void f(char a[],int b[]);
	int c[26]={0},d[26]={0};
	char a[100],b[100];
	scanf("%s%s",a,b);
	f(a,c);
	f(b,d);
	if(g(c,d,0)==1) printf("YES\n");
	else printf("NO\n");
}
int g(int a[],int b[],int n)
{
	if(n==25) 
	{
		if(a[25]==b[25]) return(1);
		else return(0);
	}
	else 
	{
		if(a[n]==b[n]) return(g(a,b,n+1));
		else return(0);
	}
}
void f(char a[],int b[])
{
	int i,p;
	p=strlen(a);
	for(i=0;i<p;i++) 
		b[a[i]-'a']++;
}