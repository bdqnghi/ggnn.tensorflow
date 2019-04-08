int e;
int cs(int i,int n,int m)
{
if (e==0) return(1);
else
	{
	if (i%n==m&&i>n) {e--;return(cs(i/n*(n-1),n,m));}
	else return(0);
	}
}

void main()
{
int n,m,i;
scanf("%d %d",&n,&m);

for(i=1;;i++)
	{e=n;
	if (cs(i,n,m)==1) {printf("%d",i);break;}
	}
}