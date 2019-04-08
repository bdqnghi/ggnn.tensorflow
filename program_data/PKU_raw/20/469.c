void guocheng(char str[10],char substr[3])
{
 int i,max=0,n,j;
 for(i=0;i<strlen(str);i++)
 if(str[i]>max)
 {
  max=str[i];
  n=i;
 }
 for(j=0;j<=n;j++)
 printf("%c",str[j]);
 printf("%s",substr);
 for(j=n+1;j<strlen(str);j++)
 printf("%c",str[j]);
 printf("\n");
}
main()
{
 char a[100][10],b[100][3];
 int i=0;
 end:
 while(scanf("%s%s",a[i],b[i])!=EOF)
 {guocheng(a[i],b[i]);
 i++;
 goto end;}
}