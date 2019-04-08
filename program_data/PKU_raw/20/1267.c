void main()
{
 int i,j,k,n=0,max;char s[100][11],sb[100][4];
 while(scanf("%s%s",s[n],sb[n])!=EOF)    n++;
 for(i=0;i<n;i++)
  {max=0;
   for(j=0;j<strlen(s[i]);j++)  if(s[i][j]>max)  max=s[i][j];
   for(j=0;j<strlen(s[i]);j++)  if(s[i][j]==max)
   {for(k=0;k<=j;k++)   printf("%c",s[i][k]);
    for(k=0;k<strlen(sb[i]);k++)   printf("%c",sb[i][k]);
    for(k=j+1;k<strlen(s[i]);k++)   printf("%c",s[i][k]);
   printf("\n");break;}
}
}
 