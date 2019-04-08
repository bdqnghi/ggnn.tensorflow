void main()
{
	int a=0,b=0,begin,end,i,j;long int e=0;char c[40]={0};int f(char x);char g(int x);
       gets(c);
		for(i=0;c[i]!=' ';i++)
			a=a*10+c[i]-'0';
		  begin=i+1;
		for(i=begin;c[i]!=' ';i++);
			end=i-1;
                        
		for(i=end+2;c[i+1]!=0;i++)
			b=b*10+c[i]-'0';
		for(i=begin;i<=end;i++)
			e=a*e+f(c[i]);
if(e==0)printf("0");
		for(j=0;e>0;j++)
		{
			c[j]=g(e%b);
			e=e/b;
		}
		for(i=0;i<j/2;i++)
		{
			c[39]=c[i];c[i]=c[j-i-1];c[j-i-1]=c[39];
		}
		c[j]=0;
		puts(c);
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