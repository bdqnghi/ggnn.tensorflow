int main() 
{
    double n,c=0;
    int i,j=0,zs;
    char s1[501],s2[501];
    scanf("%lf",&n);
    scanf("%s%s",s1,s2);
if(strlen(s1)!=strlen(s2))
{
    printf("error");
}else{
      zs=strlen(s1);
      for(i=0;i<zs;i++)
      {
          if(s1[i]=='G'||s1[i]=='A'||s1[i]=='C'||s1[i]=='T')
          {
                 j++;
          }
      }
      
      if(j!=zs)
      {
                 printf("error");
                 return 0;
      }else{
         for(i=0;i<zs;i++)
         { 
                     if(s1[i]-s2[i]==0)
                     {
                                     c=c+1;
                     }
         }
         if(c/zs>n)
         {
                     printf("yes");
         }else{
                     printf("no");
         }
      }
}
  return 0;
}