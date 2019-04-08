int main()
{
   char a[100][110],c,h;
   int i,j,k,t[100]={0},p,m,n=0;
   while(cin>>a[n])
   {
      n=n+1;
      }
   for(i=0;i<n;i++)
   {
   for(j=0;j<110;j++)
   {
      if(a[i][j]!='\0')
      t[i]=t[i]+1;
      if(a[i][j]=='\0')
      break;
      }
      }
   for(i=0;i<n;i++)
   {
      for(j=0;j<t[i];j++)
      cout<<a[i][j];
      cout<<endl;
      for(j=0;j<t[i];j++)
      {
         if((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z'))
         a[i][j]=' ';
         }
      for(j=0;j<t[i]-1;j++)
      {
         if(a[i][j]=='(')
         {
            for(k=j+1;k<t[i];k++)
            {
                if(a[i][k]==')')
                {
                   a[i][j]=' ';
                   a[i][k]=' ';
                   j=-1;
                   break;
                   }
                if(a[i][k]=='(')
                {
                   j=k-1;
                   break;
                   }
            }
            continue;
         }
      }
         for(j=0;j<t[i];j++)
         {
            if(a[i][j]==' ')
              cout<<a[i][j];
            if(a[i][j]=='(')
              cout<<'$';
            if(a[i][j]==')')
              cout<<'?';
            }
         cout<<endl;
         }
         return 0;
         }
                
      
