int main()
{int n,i,j,b[100][80]={0},c[100]={0},l;
char a[100][80];
scanf("%d",&n);
getchar();
for(i=0;i<n;i++)
 {gets(a[i]);
  c[i]=strlen(a[i]);
  for(j=0;j<c[i];j++)
  b[i][j]=a[i][j];
  l=1;
  if((b[i][0]>=65&&b[i][0]<=90)||(b[i][0]>=97&&b[i][0]<=122)||b[i][0]==95)
  {
   for(j=1;j<c[i];j++)
   {if((b[i][j]>=65&&b[i][j]<=90)||(b[i][j]>=97&&b[i][j]<=122)||(b[i][j]>=48&&b[i][j]<=57)||b[i][j]==95)
     l++;}
    if(l==c[i])
    printf("1\n");
    else printf("0\n");}
  else printf("0\n");}
 return 0;
}