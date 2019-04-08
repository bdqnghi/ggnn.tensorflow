void f(int j,int i,char c[]);
void g(char c[],int m,int j);
int main()
{
	char c[501];
	int i=0,j,k,m,n,y=0,l;
	c[0]=getchar();
	while(c[i]!='\n')
	{
		i++;
		c[i]=getchar();
	}
	for(j=2;j<i;j++)
	{
		f(j,i,c);
	}
	
}
void f(int j,int i,char c[])
{
	int m,n;
	for(m=0;m<=i-j;m++)
	{
		g(c,m,j);
	}
}
void g(char c[],int m,int j)
{
	int p,q,i;
	p=m;
	q=m+j-1;
	for(;;p++,q--)
	{
		if(c[p]!=c[q]) break;
		else if((p==q)||(p==q-1))
		{
			for(i=m;i<=m+j-1;i++)
			{
				printf("%c",c[i]);
			}
			printf("\n");
		}
	}
}