int main()
{long int i,n,q=0,w=0,e=0,a,b,t;
	scanf("%d",&n);
	scanf("%d",&a);
	q=a;
	scanf("%d",&a);
	w=a;
	if (q<w){t=q;q=w;w=t;}

for(i=1;i<=n-2;i++)
{
	scanf("%d",&a);
	if(a>q){w=q;q=a;}
	else if(a>w)w=a;
	
	



}
printf("%d\n%d\n",q,w);

}
