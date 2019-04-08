char a[100];int b;
void nihao()
{
  
  for(int i=0;i<b;i++)
  {
    int r=0;
    if(a[i]==')')
      {
        for(int j=i-1;j>=0;j--)
         {
          if(a[j]=='(')
           {
            for(int k=j;k<=i;k++)
              a[k]=' ';
            r=1;
            break;
           }
         } 
        if(r==0)
         { 
          a[i]='?';
          for(int k=i-1;k>=0;k--)
          if(a[k]!='?')
            a[k]=' ';
         }
      }
    } 
      
}
void nimei()
{
  for(int i=b-1;i>=0;i--)
    if(a[i]=='(')
      {
        a[i]='$';
      }
      
}
void nima()
{
   for(int i=0;i<b;i++)
     {
       if(a[i]!='?'&&a[i]!='$')
         a[i]=' ';
     }
   for(int i=0;i<b;i++)
     cout<<a[i];
   cout<<endl;
}
int main()
{
  while(cin>>a)
  {
    cout<<a;
    cout<<endl;
    b=strlen(a);
    nihao();
    nimei();
    nima();
  }
  
  
  
  
  
  return 0;
}
