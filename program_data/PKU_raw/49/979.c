char str[510][510][510];


int huiwen(char c1[510])
{
   int n,l;
   char c2[510];
   n=strlen(c1);
   for (l=0;l<n;l++)
     c2[l]=c1[n-1-l];
   c2[n]='\0';
   if (strcmp(c1,c2)==0)
     return 1;
   else
     return 0;
}
int main( )
{
   char s[510];
   int i,j,k,n;
   scanf("%s",s);
   n=strlen(s);
   for (i=2;i<=n;i++)
     for (j=0;j<n-i+1;j++)
      {
       for (k=0;k<i;k++)
          str[i][j][k]=s[j+k];
      }
   for (i=2;i<=n;i++)
     for (j=0;j<n-i+1;j++)
       {
         if (huiwen(str[i][j]))
            printf("%s\n",str[i][j]);
       }
   return 0;
}