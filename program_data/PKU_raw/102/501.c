int main()
{   
int i,j=0,r=0,n,f;
char a[100][100];
double b[100],c[100],d[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s %lf",a[i],&b[i]);
}
for(i=0;i<n;i++)
{
if(a[i][0]=='m')
{
c[j]=b[i];
j++;
}
if(a[i][0]=='f')
{
d[r]=b[i];
r++;
}
}
for(i=j-1;i>0;i--)
{
for(f=0;f<i;f++)
{
if(c[f]>c[f+1])
{
double tmp;
tmp=c[f+1];
                c[f+1]=c[f];
c[f]=tmp;
}
}
}
for(i=r-1;i>0;i--)
{
for(f=0;f<i;f++)
{
if(d[f]<d[f+1])
{
double p;
p=d[f];
d[f]=d[f+1];
d[f+1]=p;
}
}
}
for(i=0;i<j;i++)
{
printf("%.2lf ",c[i]);
}
for(i=0;i<r-1;i++)
{
printf("%.2lf ",d[i]);
}
printf("%.2lf",d[r-1]);
return 0;
}

