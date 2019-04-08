int main()
{
char a[2000];
int n,lmax=0,lmin=0,smax=0,smin=0,e=0,s=0,i,emax,emin;
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]==' ')
{
lmax=i;
lmin=i;
emax=i;
emin=i;
break;
}
}
for(i=0;i<=n;i++)
{
if(a[i]==' '|| (i == n)){
e=i;
if(e-s>lmax)
{
lmax=e-s;
smax=s;
emax=e;
}
if(e-s<lmin)
{
lmin=e-s;
smin=s;
emin=e;
}
while(a[i]==' ')
i++;
s = i;
}
}
char max[300],min[300];
int j=0;
for(i=smax;i<emax;i++)
{
max[j]=a[i];
j++;
}
max[lmax]='\0';
j = 0;
for(i=smin;i<emin;i++)
{
min[j]=a[i];
j++;
}
min[lmin]='\0';
puts(max);
puts(min);
return 0;
}