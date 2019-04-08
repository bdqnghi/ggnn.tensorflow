int main ()
{int i,n,a,b,j,max=0,min=30000;
scanf("%d",&n);
int l[10001];
for (i=1;i<=10000;i++)
l[i]=0;
for (i=0;i<n;i++)
{scanf ("%d %d",&a,&b);
if (max<b) max=b;
if (min>a) min=a;
for (j=a+1;j<b;j++)
l[j]=1;
if (l[a]==0) l[a]=2;
else l[a]=1;
if (l[b]==0) l[b]=2;
else l[b]=1;
}
l[min]=l[max]=1;
j=1;
for (i=min;i<=max;i++)
if (l[i]!=1) {j=0;break;}
if (j==1) printf ("%d %d\n",min,max);
else printf ("no\n");
return 0;
}