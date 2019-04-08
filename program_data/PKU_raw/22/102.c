void main()
{
int a[300],i,j,m,n=0,t,z=1,max;
char s;
for(i=0;;i++)
{
scanf("%d%c",&a[i],&s);
if(s!=',')break;
else n++;
}
m=a[0];
for(i=0;i<n;i++)
if(m!=a[i]){z=0;break;}
if(n==1||z==1)printf("No");
else
{
for(i=0;i<n;i++)
for(j=0;j<n-i;j++)
if(a[j]<a[j+1])
{t=a[j];a[j]=a[j+1];a[j+1]=t;}
max=a[0];
for(i=0;;i++)if(a[i]<max){printf("%d",a[i]);break;}
}
}