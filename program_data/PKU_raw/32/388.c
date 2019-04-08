int main()
{
 int n,i=0,j=0,c=0,l,k=0;
 scanf("%d" ,&n);
 char *** ppp;
 ppp=(char ***)malloc(n*sizeof(char **));
 for(i=0;i<n;i++)
 {
  ppp[i]=(char **)malloc(2*sizeof(char *));
  for(j=0;j<2;j++)
  {
   ppp[i][j]=(char *)malloc(101*sizeof(char));
  }
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<2;j++)
  {
   scanf("%s" ,ppp[i][j]);
   l=strlen(ppp[i][j]);
   for(k=0;k<=l;k++)              //???
   {
    ppp[i][j][100-k]=ppp[i][j][l-k];
   }
   for(k=0;k<100-l;k++)
   {
    ppp[i][j][k]='0';
   }
  }
 }
 for(i=0;i<n;i++)
 {
  for(k=99;k>=1;k--)                   
  {
   //ppp[i][0][k-1] = ppp[i][0][k-1]-1;
         c=ppp[i][0][k]-ppp[i][1][k];
   //printf("%d\n" ,c);
   if(c>=0) 
    ppp[i][0][k]=c+'0';
   else
   {
    ppp[i][0][k]=c+'0'+10;
    ppp[i][0][k-1]--;
   }
  
  }
  for(k=0;k<100;k++)
  {
   if(ppp[i][0][k]>'0')
   {
    c=k;
    break;
   }
  }
  for(k=c;k<100;k++)
  {
   printf("%c" ,ppp[i][0][k]);      //?0?
  }
  printf("\n");
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<2;j++)
  {
   free(ppp[i][j]);
  }
  free(ppp[i]);
 }
 free(ppp);
}

