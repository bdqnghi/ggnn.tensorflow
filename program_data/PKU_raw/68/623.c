
int prime(int m)
{
  int i,k;
k=sqrt(m);
for(i=2;i<=k;i++)
if(m%i==0)break;
if(i>k) return(1);
else return(0);
}

void main()
{
	
int n,x,e,f;
scanf("%d",&n);
for(x=6;x<=n;x=x+2)
{
e=2;
while(e<=x/2)
{
f=x-e;
if(prime(e)==1&&prime(f)==1)
{
printf("%d=%d+%d\n",x,e,f);
break;
}
else e++;
}
}

}