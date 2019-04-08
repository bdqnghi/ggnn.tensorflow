int cont(int s)
{
	int i,j;
	j=1;
	for(i=0;i<=10;i++)
	{
		s=s/10;
		if(s==0)
			break;
		else j++;}
	return (j);
}
int su(int p)
{
	int i,t,m,w;
	w=p,t=0;
	for(i=1;i<=w;i++)
	{
	   m=p%i;
	   if(m==0)
		   t++;
	   }
	if(t>2)
		return (1);
	else return(0);}
int dao(int m,int n)
{int  a[1000],b[1000],i,j,k,l,t,s;

a[0]=m;t=0;
for(i=1;i<n;i++)
a[i]=a[i-1]/10;
a[n]=0;
for(i=n;i>0;i--)
b[i]=a[i-1]-a[i]*10;

for(s=1;s<=n;s++)
{
	for(j=n-s;j>0;j--)
	{b[s]=b[s]*10;}}
for(i=1;i<=n;i++)
t=t+b[i];
return (t);
}


int main()
{
	int m,n,i,j,k,a[10000],b[10000],f,o,s,t;
	scanf("%d %d",&m,&n);
	k=0;o=0;
	for(i=m;i<=n;i++)
	{   f=cont(i);
	t=dao(i,f);
s=su(i);
	if(t==i&&s==0)
	{a[o]=i;o++;}
	}
	o--;
	if(o+1==0)
		printf("no");
	else {
		for(i=0;i<o;i++)
			printf("%d,",a[i]);
		printf("%d",a[i]);
	}
}



