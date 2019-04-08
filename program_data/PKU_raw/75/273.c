void main()
{
int k=0,a[1000],b[1000],t[1000],i=0,p=0,j;char c=',';
while(c==',')  {scanf("%d%c",&a[i],&c); p++;i++;}c=',';i=0;
while(c==',')  {scanf("%d%c",&b[i],&c); i++;}
for(i=0;i<999;i++)   t[i]=0;
for(i=0;i<999;i++)
 for(j=0;j<p;j++)    if((a[j]<=i)&&(b[j]>i))  t[i]++;
for(i=0;i<999;i++)
if(t[i]>k)   k=t[i];
printf("%d %d",p,k);
}