int main()
{int n;
 char a[500],b[250][5],c[5];
 scanf("%d %s",&n,a);
 int i,j,r,k[250],t,p=0;
 r=strlen(a);
 for(i=0;i<=r-n;i++)
 {for(j=0;j<=n-1;j++)
   {c[j]=a[j+i];}
   c[n]=0;
  for(t=0;;t++)
  {if(strcmp(c,b[t])==0) {k[t]++;break;}
   else if(t==p) {strcpy(b[t],c);k[t]=1;p++;break;}
  }
 }
int o=0;
for(i=0;i<=p-1;i++)
{if(k[i]>k[o]) o=i;}
if(k[o]==1) printf("NO");
else{
printf("%d\n",k[o]);
for(i=0;i<=p-1;i++)
if(k[i]==k[o]) puts(b[i]);
} 
  }
 
 