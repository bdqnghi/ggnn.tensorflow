int main()
{
   int n,i,j;
   scanf("%d",&n);
   char s[n][255];
   for(i=0;i<n;i++)
   {
      scanf("%s\n",s[i]);
      for(j=0;s[i][j]!='\0';j++)
      {
         switch(s[i][j])
         {
            case 'C':
               s[i][j]='G';
               break;
            case 'G':
               s[i][j]='C';
               break;
            case 'A':
               s[i][j]='T';
               break;
            case 'T':
               s[i][j]='A';
               break;
         }
      }
      printf("%s\n",s[i]);
   }
   return 0;
}

