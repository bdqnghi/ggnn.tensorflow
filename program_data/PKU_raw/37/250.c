void main()
{
 char str[100][10000];
 int t,i,j,k,m;
 scanf("%d",&t);
 getchar();
 for(i=0;i<t;i++)gets(str[i]); 
 for(i=0;i<t;i++)
 {
  for(j=0;j<100000&&str[i][j] !='\0';j++)
  {
   m=0;
   for(k=0;k<100000&&str[i][k]!='\0';k++)
   {
    if(str[i][j]==str[i][k])
     m=m+1; 
   }
   if(m==1)
   {
       printf("%c\n",str[i][j]);
    break;
   } 
  }
  if(m>1) printf("no\n");
}
}