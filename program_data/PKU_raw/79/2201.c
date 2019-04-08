int ysf(int n,int m)
{int i,s=n,h=0;
int a[n+1];
for(i=0;i<=n;i++) a[i]=1;for (i=1;s>1;i++)
{i=i%n;
if (a[i]==0) continue;
else h++;
if (h==m) {s--;a[i]=0;h=0;}
}
for (i=1;i<=n;i++)
if (a[i]==1) return i;
}
int main ()
{int a0,b,c;
while (1)
{scanf ("%d %d",&a0,&b);
if (a0==0 && b==0) break;
c=ysf(a0,b);
printf ("%d\n",c);
}
return 0;
}