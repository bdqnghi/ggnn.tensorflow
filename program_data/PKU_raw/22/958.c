main()
{
int n,i,j,a[200],t,m;
char c;
i=1;
while (c!='\n')
{
 scanf("%d%c",&a[i],&c);
i++;
}
n=-10000;
m=-10000;
if (i-1==1) printf("No");
 else {for(j=1;j<i;j++)
      if (n<a[j]) n=a[j];
      for (t=1;t<i;t++)
      if (a[t]==n) a[t]=-10000;
      for (j=1;j<i;j++)
      if (m<a[j]) m=a[j];
      if (m==-10000) printf("No");
else printf("%d",m);
   }
}
