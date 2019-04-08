int main()
{char a[100],b[100];
 int d,e,f,h,g,i,j,k;
gets(a);
int c[100]={0};
e=strlen(a);
j=0;
for (i=0;i<e;i++)
{if (a[i]!=' ') c[j]++;
 else j=j+1;}
g=0;
for (i=0;i<=j;i++)
{for (k=0;k<c[j-i];k++)
b[g+k]=a[e-c[j-i]-g+k];
g=g+c[j-i];
b[g]=' ';
g++;}
for (i=0;i<e;i++)
printf("%c",b[i]);
return 0;
} 