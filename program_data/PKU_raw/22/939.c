int main()
{
int a[310],n,x;
for (int i=0;i<310;i++)
    a[i]=-1;
for (int i=0;i<310;i++)
    {
    if ((scanf("%d,",&a[i]))==EOF) {n=i;break;}
    }
x=a[0];
for (int i=1;i<n;i++)
    if (a[i]>x) {x=a[i];}
for (int i=0;i<n;i++)
    if (a[i]==x) a[i]=-1;
x=a[0];
for (int i=1;i<n;i++)
    if (a[i]>x) {x=a[i];}
if (x==-1) printf("No");
else printf("%d",x);
}
