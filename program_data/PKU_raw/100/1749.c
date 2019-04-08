int main ()
{
  int n,num[128]={0},i,j=0;
  char zf[300],c;
  scanf("%s",zf);
  i=0;
 for(i=0;zf[i]!=0;i++)
{
    n=zf[i];
    if(((65<=n)&&(n<=90))||((97<=n)&&(n<=122)))
     {
       num[n]++;
       j++;
     }
  }
  if(j==0)
  printf("No");
  else
  {
     for(i=65;i<123;i++)
      {
         if(num[i]!=0)
          {
            c=i;
            printf("%c=%d\n",c,num[i]);
          }
       }
   }

  return 0;
}
