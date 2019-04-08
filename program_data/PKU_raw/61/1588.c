int he(int x);
int main()
{
int n,a;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a);

printf("%d\n",he(a));
}
return 0;
}
int he(int x)
{
if(x==1){ return 1;}
if(x==2){ return 1;}
int sz[20],e;
sz[0]=1;sz[1]=1;
for(e=3;e<=x;e++)
{
	sz[e-1]=sz[e-2]+sz[e-3];}
return sz[x-1];
}