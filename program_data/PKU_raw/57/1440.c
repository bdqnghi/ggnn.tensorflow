void main()
{
 char word1[50][20],word2[50][20];
 int i,n,j,l[50];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%s",word1[i]);
  l[i]=strlen(word1[i]); 
 }
 for(i=0;i<n;i++)
 {
  if(word1[i][l[i]-2]=='e'&&word1[i][l[i]-1]=='r')
  {
   for(j=0;j<l[i]-2;j++)
   {
    word2[i][j]=word1[i][j];
   }
    word2[i][j]='\0';
  }
  else if(word1[i][l[i]-1]=='g'&&word1[i][l[i]-2]=='n'&&word1[i][l[i]-3]=='i')
  {
   for(j=0;j<l[i]-3;j++)
   word2[i][j]=word1[i][j];
   word2[i][j]='\0';
  }
  else if(word1[i][l[i]-2]=='l'&&word1[i][l[i]-1]=='y')
  {
   for(j=0;j<l[i]-2;j++)
   {
    word2[i][j]=word1[i][j];
   }
   word2[i][j]='\0';
  }
 }
 for(i=0;i<n;i++)
 {
  printf("%s",word2[i]);
  printf("\n");
 }
}