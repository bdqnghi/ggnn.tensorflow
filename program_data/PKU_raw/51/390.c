main()
{
char c[2000],x[2000][100];
int n,m,j,len,i,max;
int p[2000]={0},co[2000]={0};
scanf("%d\n",&m);
gets(c);	
len=strlen(c);
for (i=0;i<=len-m;i++)
 for (j=0;j<=m-1;j++)
    x[i][j]=c[i+j];
for (i=0;i<=len-m-1;i++)
 { p[i]=0;
 for (j=i+1;j<=len-m;j++)
  if (strcmp(x[i],x[j])==0&&p[j]==0) {co[i]++;p[j]=1;}
 }
 max=0;
for (i=0;i<=len-m;i++)
if (max<co[i]) max=co[i];
if (max+1<=1) printf("NO"); else {printf("%d\n",max+1);
for (i=0;i<=len-m;i++)
if (co[i]==max) printf("%s\n",x[i]);}
}	