int dudu(int x)
{
	int i,j;
	j=sqrt(x);
	(int) j;
	for (i=3;i<=(j+1);i++)
	{if(x%i==0) break;}
	if (i==(j+2)) return (1);
	else return (0);
}
int jay(int x)
{
	int a,i=0,j,n,b[1000];
	for (a=10;(x*10-a)>=0;a=(a*10)) 
	{
		b[i]=x%a;
		x=(x-b[i]);
		b[i]=b[i]*10/a;
		i++;
	}
	i--;
	if (i%2) n=(i-1)/2;
	else n=i/2;
	for (j=0;j<=n;j++)
		if (b[i-j]!=b[j]) break;
	if (j==(n+1)) return (1);
	else return (0);
}
void main()
{
	int m,n,i=0,j,p,a[300];
	scanf("%d %d",&m,&n);
	if (m%2==0) m++;
	if (n%2==0) n--;
	for (p=m;p<=n;p=p+2)
		if (jay(p))
			if (dudu(p))
			{a[i]=p;i++;}
	if (i==0) printf("no");
	else for(j=0;j<i;j++) 
	{if (j==i-1) printf("%d",a[j]);
	else printf("%d,",a[j]);}
}