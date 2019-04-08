int main()
{
    char zfc[1000][256];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%s",zfc[i]);
      }
    for(i=0;i<n;i++)
    {
     for(j=0;j<strlen(zfc[i]);j++)
     {
      if(zfc[i][j]=='A')
      {
       zfc[i][j]='T';
       }
      else if(zfc[i][j]=='T')
      {
       zfc[i][j]='A';
       }
      else if(zfc[i][j]=='C')
      {
       zfc[i][j]='G';
       }
      else if(zfc[i][j]=='G')
      {
       zfc[i][j]='C';
       }
       
      
      }zfc[i][strlen(zfc[i])]='\0';
     }
    for(i=0;i<n-1;i++)
    {
     printf("%s\n",zfc[i]);
     }
    printf("%s",zfc[n-1]);
    return 0;

}


