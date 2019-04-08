
int main()
{
char c[555],c1;
int tt2,tt,i,j,k,l,m,n,max,a[555];
cin>>n;
l=0;
tt=1;
c1=getchar();
while (tt=1)
{
c1=getchar();
if (c1=='\n')
{
tt=0;
break;
}
else
{
l++;
c[l]=c1;
}}
for (i=1;i<=l;i++)
{
a[i]=0;
}
max=1;
if (l<n)
{cout<<"NO";}
else	
{
for (i=1;i<=l-n+1;i++)
{
for (j=i;j<=l-n+1;j++)
{
tt=0;
for (k=0;k<=n-1;k++)
{
if (c[i+k]!=c[j+k])
{
tt=1;
}
}
if (tt==0)
{
a[i]++;
}
}
if (a[i]>max)
{
max=a[i];
}
}
tt2=0;
tt=0;
if (max==1)
{
cout<<"NO";
}
else
{
cout<<max;
cout<<'\n';
for (i=1;i<=l-n+1;i++)
{
if (a[i]==max)
{
tt2=1;
if (tt!=0)
{
cout<<'\n';
}
 for (j=0;j<=n-1;j++)
{	
 cout<<c[i+j];
 }
tt=1;
}
}
}
}

return 0;
}