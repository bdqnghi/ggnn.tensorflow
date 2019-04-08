int main()
{
   int n;
   cin >> n;
   cin.get();
   int i,j,k,l,p,t;
   char a[501];
   cin.getline(a,501);
   l=strlen(a);
    p=l-n+1;
    int b[501]; 
   for(i=0;i<501;i++)
   {
     b[i]=1;
   }
   char c[200][6]={0};
   for(i=0;i<p;i++)
   {
      for(t=0;t<n;t++)
      {
        c[i][t]=a[i+t];
        
      }
   }
  
   for(i=0;i<p;i++)
   {
      for(j=0;j<p;j++)
      {
         if((strcmp(c[i],c[j])==0)&&(b[i]!=0)&&(i!=j)&&(b[j]!=0))
         {
           b[i]=b[i]+1;
          
           b[j]=0;
         }
      }
   }
   int s=b[0];
   for(i=0;i<p;i++)
   {
     if(b[i]>=s)
     {
       s=b[i];
     }
   }
   if(s==1)
   {
       cout << "NO" << endl;
   }
   else
   {
       cout << s << endl;
      for(i=0;i<p;i++)
      {
        if(b[i]==s)
        {
          for(j=0;j<n;j++)
          {
            cout << c[i][j];
          }
          cout << endl;
        }
      }
   }
   cin.get();cin.get();cin.get();
   return 0;
}

