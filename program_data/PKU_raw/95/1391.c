main()
{
char a[3][100];
int i,j,len1,len2,p;
p=1;
gets(a[1]);
gets(a[2]);
len1=strlen(a[1]);
len2=strlen(a[2]);
if (len1>=len2) i=len2;
 else i=len1;
for (j=0;j<=i-1;j++)
 {if (a[1][j]>=65&&a[1][j]<=90) a[1][j]=a[1][j]+32;
 	if (a[2][j]>=65&&a[2][j]<=90) a[2][j]=a[2][j]+32;
      if (a[1][j]>a[2][j]) {printf(">");p=1;break;}
        else if (a[1][j]<a[2][j]) {p=1;printf("<");break;}
           else p=0;
  }
if (p==0&&len1==len2) printf("=");
}
