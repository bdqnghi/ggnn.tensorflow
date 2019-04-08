
int main()
{
  char str[500];
  cin>>str;
  int i;
  int size=strlen(str); 
  for(i=1;i<size;i++)
  {
       int h,t;
       for(h=0;h<size-i;h++)
       {
         int h1=h; 
         t=h+i;
         int m;
         for(;h1<t;h1++,t--) 
         if(str[h1]!=str[t])
         break;
         if(h1>t)
         {
         for(m=h;m<=h+i;m++)
         cout<<str[m];
         cout<<endl; 
         }                 
       }              
  }
  cin.get();cin.get();cin.get();
  return 0;
}
