int main()
{
int n; 
scanf("%d",&n);
double m[40],f[40];
int nm=0,nf=0;
int i;
for (i=0; i<n; i++)
{
char sex[7]; 
double h;
scanf("%s%lf",sex,&h);
if (sex[0]=='m') 
{
nm++;
m[nm-1]=h;
}
else 
{
nf++;
f[nf-1]=h;
}
}

int j;
for (i=0; i<nm-1; i++)
for (j=i+1; j<nm; j++)
if (m[i]>m[j])
{
double t=m[i];
m[i]=m[j];
m[j]=t;
}

for (i=0; i<nf-1; i++)
for (j=i+1; j<nf; j++)
if (f[i]<f[j])
{
double t=f[i];
f[i]=f[j];
f[j]=t;
}

for (i=0; i<nm; i++) printf("%.2lf ",m[i]);
for (i=0; i<nf; i++) 
{
printf("%.2lf",f[i]);
if (i<nf-1) printf(" "); else printf("\n");
}

return 0;
}

