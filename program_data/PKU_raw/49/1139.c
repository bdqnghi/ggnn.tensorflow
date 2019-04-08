int main()
{
 char str[500];
 int i,j,len,n,t,k;
 gets(str);
 len=strlen(str);
 for(n=2;n<=len;n++)
 {
 for(i=0;i+n-1<len;i++)
 {
     t=i;
     for(j=i+n-1;t<j;j--,t++)
     {
  if(str[t]!=str[j])
  {
   break;
  }
  else
  if((j==t+1)||(j==t+2))
  {
  for(k=i;k<=i+n-1;k++)
  printf("%c",str[k]);
  printf("\n");
  }
     }
 }
 }
 return 0;
}
