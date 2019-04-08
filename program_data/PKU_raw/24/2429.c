main()
{
char word[200][20],sen[1000];
int n,i,j,len[200],t,max,min,p1,p2;
i=1;
gets(sen);
t=strlen(sen);
n=1;

j=1;
for (i=0;i<=t-1;i++)
  {
if (sen[i]!=' '&&sen[i]!=',') {word[n][j]=sen[i];j++;}
if (sen[i]==' '||sen[i]==',') {len[n]=j-1;n++;j=1;}
if (sen[i]==',') i++;
if (i==t-1) len[n]=j-1;
  }
max=0;
min=50000;


for (i=1;i<=n;i++)
  {if (len[i]>max) {max=len[i];p1=i;}
  if (len[i]<min) {min=len[i];p2=i;}
  }
if (max==min) {for (i=1;i<=len[1];i++) printf("%c",word[1][i]);printf("\n");for (i=1;i<=len[1];i++) printf("%c",word[1][i]);}
 else {for (i=1;i<=len[p1];i++) printf("%c",word[p1][i]);
          printf("\n");
         for (i=1;i<=len[p2];i++) printf("%c",word[p2][i]);}
}
