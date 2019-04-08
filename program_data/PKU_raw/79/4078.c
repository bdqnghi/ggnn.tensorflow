int main()
{
int n,a[300],m,t,s,h;
scanf("%d %d",&n,&m);
while(m!=0&&n!=0)
{
	s=1;
	h=0;
for(t=0;t<n;t++)
a[t]=t+1;
t=0;
while(h<n-1)
{
	if(a[t])
	{
	if(s==m)a[t]=0,s=0,h++;
	s++;
	}
	t++;
	if(t==n)t=0;
}
t=0;
while(a[t]==0)t++;
printf("%d\n",a[t]);	
scanf("%d %d",&n,&m);
}
return 0;
}