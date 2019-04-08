int main()
{int a[1000],b[1000],i=0,j=0,n,m,loop;
scanf("%d %d",&n,&m);
while(n!=0)
{    a[i]=n;
     n=n/2;
 i++;
}
while(m!=0)
{
b[j]=m;
m=m/2;
j++;
}
for(i=0;i<1000;i++)
{
for(j=0;j<1000;j++)
{
if(a[i]==b[j])
{

goto loop ;
}
else
{
continue;
}

}
}

loop:printf("%d\n",a[i]);
return 0;
}