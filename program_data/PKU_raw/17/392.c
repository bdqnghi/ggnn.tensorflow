void peidui(void);
int m,i;
char a[100][110];
int main()
{
   char c,h;
   int j,k,t[100]={0},p,n=0;
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
         for(m=0;m<t[i];m++)
         {
           if(a[i][m]=='(')
           {
           m=m+1;
           peidui();
           m=m-1;
           }
           if((a[i][m]>='a'&&a[i][m]<='z')||(a[i][m]>='A'&&a[i][m]<='Z'))
           a[i][m]=' ';
         }
         for(m=0;m<t[i];m++)
         {
            if(a[i][m]=='(')
            a[i][m]='$';
            if(a[i][m]==')')
            a[i][m]='?';
            }
         for(m=0;m<t[i];m++)
         cout<<a[i][m];
         cout<<endl;
         }
         return 0;
         }
   void peidui(void)
   {    
        int k;
        k=m-1;
        if((a[i][m]>='a'&&a[i][m]<='z')||(a[i][m]>='A'&&a[i][m]<='Z'))
        {
           a[i][m]=' ';
           m=m+1;
           peidui();
           }
        if(a[i][m]=='(')
        {
           m=m+1;
           peidui();
           }
        if(a[i][m]==')'&&a[i][k]=='(')
        {
           a[i][m]=' ';
           a[i][k]=' ';
           m=m+1;
           peidui();
           }
           }