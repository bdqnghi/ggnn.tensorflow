void main()
{
char a[501],c[500][6];
int n,i,k,j,m;
scanf("%d%s",&n,a);
k=strlen(a);
int b[500];
for(i=0;i<=k-n;i++)
{for(j=0;j<n;j++)c[i][j]=a[i+j];
c[i][n]=0;
}
for(i=0;i<k-n;i++)
{b[i]=1;
for(j=i+1;j<=k-n;j++)
{if(strcmp(c[i],c[j])==0)b[i]++;}
}
m=b[0];
for(i=1;i<k-n;i++)
{if(b[i]>m)m=b[i];}
if(m==1)printf("NO");
else {printf("%d\n",m);
for(i=0;i<k-n;i++)
{if(b[i]==m)printf("%s\n",c[i]);}
}
}