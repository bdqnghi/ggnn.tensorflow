int main ()
{
int a[30],b[30],c[30],d[30],e[30],f[30],i,s[30];
i=0;
a[0]=1;b[0]=1;c[0]=1;d[0]=1;e[0]=1;f[0]=1;
while(a[i]!=0||b[i]!=0||c[i]!=0||d[i]!=0||e[i]!=0||f[i]!=0)
{
i++;
scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
if(a[i]!=0||b[i]!=0||c[i]!=0||d[i]!=0||e[i]!=0||f[i]!=0)
{s[i]=3600*(d[i]+12-a[i])+60*(e[i]-b[i])+f[i]-c[i];
printf("%d\n",s[i]);
}
}
return 0;
}