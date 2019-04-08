
main ()
{
int i,j,k;
char s[10];
double m[42],f[42],temp;
int nm,nf,n;

scanf("%d",&n);
n--;
nm=-1;nf=-1;
for (i=0;i<=n;i++)
{
scanf("%s",s);
if (s[0]=='m'){nm++;scanf("%lf",&m[nm]);}
else {nf++;scanf("%lf",&f[nf]);}
}

for (i=0;i<=nm-1;i++)
for (j=i+1;j<=nm;j++)
if (m[i]>m[j])
{
temp=m[i];
m[i]=m[j];
m[j]=temp;
}
for (i=0;i<=nf-1;i++)
for (j=i+1;j<=nf;j++)
if (f[i]<f[j])
{
temp=f[i];
f[i]=f[j];
f[j]=temp;
}

printf("%.2f",m[0]);
for (i=1;i<=nm;i++) printf(" %.2f",m[i]);
for (i=0;i<=nf;i++) printf(" %.2f",f[i]);
printf("\n");
}