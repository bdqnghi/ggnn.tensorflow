void main()
{
int f(char k);
char a[1000];
int i,j,t,p,q,r,max,min,n=0,b[51],c[51];
gets (a);
j=strlen(a);
for (i=0;i<=j;i++)
if (f(a[i])==1&&f(a[i+1])==0)
{
b[n]=i;
n++;
}
c[1]=b[1]-b[0];
c[0]=b[0]+2;
for (t=2;t<n;t++)
c[t]=b[t]-b[t-1];
max=min=c[0];
for (t=0;t<n;t++)
if (c[t]>max)
max=c[t];
for (p=0;p<n;p++)
if (c[p]<min)
min=c[p];
for (r=0;r<n;r++)
if (c[r]==max)
{
t=r;
break;
}
for (q=0;q<n;q++)
if (c[q]==min)
{
p=q;
break;
}
if (max==c[0])
{
for (i=0;i<b[0]+1;i++)
printf("%c",a[i]);
printf("\n");
}
if (max!=c[0])
{
for (i=b[t-1]+2;i<b[t]+1;i++)
printf("%c",a[i]);
printf("\n");
}
if (min==c[0])
{
for (i=0;i<b[0]+1;i++)
printf("%c",a[i]);
}
if (min!=c[0])
{
for (i=b[p-1]+2;i<b[p]+1;i++)
printf("%c",a[i]);
}
}

int f(char k)
{
int e;
if (k>='A'&&k<='Z'||k>='a'&&k<='z') e=1;
else e=0;
return(e);
}


