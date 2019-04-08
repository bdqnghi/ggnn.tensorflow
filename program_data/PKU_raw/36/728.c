void main()
{
char a[100],b[100],c[100];
int i,j,k,l,m,sum=0,v,q=0,d;
gets(a);
j=strlen(a);
for(v=0;a[v]!=' ';v++)
q++;
d=2*q+1;
if(j%2==1&&d==j)
{k=(j-1)/2;
for(i=0;i<k;i++)
b[i]=a[i];
for(i=k+1;i<j;i++)
c[i-k-1]=a[i];
for(l=0;l<k;l++)
for(m=0;m<k;m++)
if(b[l]==c[m]) {b[l]='0'; c[m]='0';}
for(l=0;l<k;l++)
if(b[l]=='0'&&c[l]=='0') l=l;
else break;
if(l==k) printf("YES\n");
else printf("NO\n");
}
else
printf("NO\n");
}
