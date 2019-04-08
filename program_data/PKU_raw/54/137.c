void main()
{
float m,h;
int l,j,n,k;
scanf("%d %d",&n,&k);
if(n==1)
printf("%d\n",(int)(n+k));
else
{
for(l=1;;l++)
{
m=(float)(l)*(float)(n)+k;
for(j=1;j<n;j++)
{
if((int)(m)!=m)
break;
h=m/(float)(n-1);
m=h*(float)(n)+k;
if((int)(h)!=h)
break;
}
if((int)(m)!=m)
continue;
if((int)(h)!=h)
continue;
if((int)(m)==m)
{
printf("%d\n",(int)(m));
break;
}
}}}
