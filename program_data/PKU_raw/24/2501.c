main()
{
char sen[2000],word[300][20];
int n,j,i,t,len,max,min,p,q;
gets(sen);
len=strlen(sen);
n=1;
j=0;
for (i=0;i<=len-1;i++)
 { if (sen[i]!=' '&&sen[i]!=',') {word[n][j]=sen[i];
 	                              j++;}
   if (sen[i]==' ') {n++;j=0;}
   if (sen[i]==',') {i++;n++;j=0;}
 }
max=0;min=10000;
for (i=1;i<=n;i++)
 {  
 	if (max<strlen(word[i])) {max=strlen(word[i]);p=i;}
    if (min>strlen(word[i])) {min=strlen(word[i]);q=i;}
 }
printf("%s\n",word[p]);
printf("%s",word[q]);
 } 