int main()
{
int n,i,j,a,b,c,m[500];
scanf("%d",&n);
for(i=0,j=0;i<n;i++)
{
scanf("%d",&a);
if(a%2!=0)
{
m[j]=a;
j++;
}
}
for(b=j-1;b>0;b--)
{
for(i=0;i<b;i++)
{
if(m[b]<m[i])
{
c=m[b];
m[b]=m[i];
m[i]=c;
}
}
}
printf("%d",m[0]);
for(i=1;i<j;i++)
printf(",%d",m[i]);
return 0;
}
