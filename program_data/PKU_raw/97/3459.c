int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;;i++)
{
if(i*100<=n && i*100+100>n) break;
}
printf("%d\n",i);
n=n-i*100;
for(i=0;;i++)
{
if(i*50<=n && i*50+50>n) break;
}
printf("%d\n",i);
n=n-50*i;
for(i=0;;i++)
{
if(i*20<=n && i*20+20>n) break;
}
printf("%d\n",i);
n=n-i*20;
for(i=0;;i++)
{
if(i*10<=n && i*10+10>n) break;
}
printf("%d\n",i);
n=n-10*i;
for(i=0;;i++)
{
if(i*5<=n && i*5+5>n) break;
}
printf("%d\n",i);
n=n-i*5;
for(i=0;;i++)
{
if(i<=n && i+1>n) break;
}
printf("%d",i);
return 0;
}