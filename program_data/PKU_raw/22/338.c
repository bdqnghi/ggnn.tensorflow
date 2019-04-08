int fscan(int *n)
{
 char c;
 *n=0;
 do
   {
    c=getchar();
    if(c=='\n')return 0;
    if(c!=',')
      {
       *n=*n*10+c-'0';
      }
   }while(c!=',');
 return 1;
}    
    
    
int main()
{
    int n;
    int first=-1,second=-1;
    int temp;
    temp=fscan(&n);
    first=n;
    while(temp)
         {
          temp=fscan(&n);
          if(n>first)
            {
             second=first;
             first=n;
            }
          else if(n>second&&n!=first)
                 second=n;
         }    
   if(second==-1)printf("No");
   else printf("%d",second);
   return 1;
}                 
