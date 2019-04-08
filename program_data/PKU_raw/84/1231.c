int main()
{
int a,n,i;
int p=0,q=0;
scanf("%d",&n);
i=1;
while(i<=n)
{
	scanf("%d",&a);
	if(a>=p){q=p,p=a;}
	if(a<p&&a>q){p=p,q=a;}
	if(a<=q){p=p,q=q;}
	i=i+1;
}
printf("%d\n%d",p,q);
	return 0;
}