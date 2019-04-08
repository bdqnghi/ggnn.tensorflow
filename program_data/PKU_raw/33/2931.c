int main(){
char a[256],b[256];
int l,j=0,n,k,i,s=0;
scanf("%d",&n);
for (i=1;i<=n+1;i++){
gets(a);
l=strlen(a);
for (j=0;j<=l-1;j++)
if (a[j]=='A') b[j]='T';
else if (a[j]=='T') b[j]='A';
else if (a[j]=='C') b[j]='G';
else if (a[j]=='G') b[j]='C';
for (s=0;s<l-1;s++)
printf("%c",b[s]);
printf("%c\n",b[l-1]);
}
return 0;
}