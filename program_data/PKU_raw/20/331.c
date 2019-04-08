void main()
{
 char str[10000][100],substr[10000][100],max;
 int i,j,k,n=0,p;
 i=0;
  while(scanf("%s",&str[i])!=EOF)
   {
     scanf("%s",&substr[i]);
   max=str[i][0];
   p=0;
   for(j=1;j<=strlen(str[i])-1;j++)
    if(str[i][j]>max)
     {
      max=str[i][j];
      p=j;
     }
    for(k=strlen(str[i]);k>=p+1;k--)
     str[i][k+3]=str[i][k];
    for(k=p+1;k<=p+3;k++)
     str[i][k]=substr[i][k-p-1];
     i++;
    } 
  for(j=0;j<=i-1;j++)
   {
    puts(str[j]);
    printf("\n");
   }
}

