char l[500];
int len,n=0,record[2000][3];
main()
{
int i,j,k;
void doit(int a,int b);
gets(l);
len=strlen(l);
for (i=0;i<=len-1;i++)
  doit(i,i+1);
for (i=2;i<=len;i++)
 for (j=1;j<=n;j++)
 if (record[j][2]-record[j][1]+1==i){ for (k=record[j][1];k<=record[j][2];k++) printf("%c",l[k]); printf("\n");}
   
}

void doit(int a,int b)
{
int i,j;
if (l[a]==l[b]&&a-1>=0&&b+1<=len-1) {n++;record[n][1]=a;record[n][2]=b;doit(a-1,b+1);}
if (l[a]==l[b]&&(a==0||b==len-1)) {n++;record[n][1]=a;record[n][2]=b;}
}