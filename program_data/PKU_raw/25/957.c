int main()
{
    int n=0,s[100]={0},i=0,k=0;
      cin>>n;
      s[1]=1;
      for(k=1;k<=n;k++)
       {
           for(i=1;i<=80;i++)
             {
                s[i]=s[i]*2;                
             }              
           for(i=1;i<=79;i++)
             {
                 if(s[i]>=10)
                 {s[i+1]++;s[i]=s[i]%10;}                
             } 
       }
    for(i=80;i>=1;i--)
      {
         if(s[i]!=0)
         break;                
      }
    for(;i>=1;i--)
      cout<<s[i];
return 0;    
}
