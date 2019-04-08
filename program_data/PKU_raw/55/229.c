void main()
{
	int a=0,b=0,i;
	long int e=0;
	char c[33];
	int f(char x);char g(int x);
       scanf("%d%s%d",&a,c,&b);
		for(i=0;c[i]!=0;i++)
			e=a*e+f(c[i]);
		if(e==0)printf("0");
		for(i=32;e>0;i--)
		{
			c[i]=g(e%b);
			e=e/b;
		}
		for(++i;i<=32;i++)
			printf("%c",c[i]);
		printf("\n");		
}
int f(char x)
{
	if('0'<=x&&x<='9')
		return(x-'0');
	else if('A'<=x&&x<='Z')
		return(x-'A'+10);
		else return(x-'a'+10);
}
char g(int x)
{
	if(0<=x&&x<=9)
		return(x+'0');
		else return(x+'A'-10);
}
