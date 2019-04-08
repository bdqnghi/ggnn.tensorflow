void main()
{
 char a[10000],b[1000][1000];
 int c[1000];
 int m,j=1,i=0,k=0,x,y;
 gets(a);
 for(i=0;i<strlen(a);i++)
    {
      if(a[i]==' ')j++;
    }
 i=0;
 for(m=0;m<j;m++)
    for(;i<strlen(a);i++)
    {
      if(a[i]!=' ')
        {
          b[m][k]=a[i];
          k++;
        }
        c[m]=k;
      if(a[i]==' ')
        {
          
          k=0;
          i=i+1;
          break;
        }
    }
   
  for(m=j-1;m>0;m--)
  {
   
    for(x=0;x<c[m];x++)
    printf("%c",b[m][x]);
   printf(" ");
  }
  for(y=0;y<c[0];y++)
  printf("%c",b[0][y]);
}