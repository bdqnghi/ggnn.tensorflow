int e=1;
int cs(int i,int n,int m)
{
if (e==n+1) {e=1;return(1);}
else if((i%n==m)&&i>n) {e++;return(cs(i/n*(n-1),n,m));}
else {e=1;return(0);}
}

void main()
{
int n,m,sum=0,i,e=1;
scanf("%d %d",&n,&m);
for(i=1;;i++)
{	e=i;
	if (cs(i,n,m)==1) {printf("%d",e);break;}
	i=e;
}

}
