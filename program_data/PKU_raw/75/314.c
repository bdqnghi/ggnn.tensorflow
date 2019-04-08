
int main()
{
int i,a[1000],b[1000],n=0,t,maxt=0,t1[1000]={0},max=0;
char c;
for(i=0;;i++)
{
    scanf("%d%c",&a[i],&c);
    n++;
    if(c!=',')
    break;
}
for(i=0;;i++)
{
    scanf("%d%c",&b[i],&c);
    if(b[i]>maxt)
    maxt=b[i];
    if(c!=',')
    break;
}
for(t=0;t<maxt;t++)
{
    for(i=0;i<n;i++)
    if((t>=a[i])&&(t<b[i]))
    t1[t]++;
}
for(t=0;t<maxt;t++)
    if(max<t1[t])
    max=t1[t];
    printf("%d %d",n,max);
return 0;
}
